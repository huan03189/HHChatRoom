#include "weather.h"
#include "ui_weather.h"
#include<QMessageBox>

Weather::Weather(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Weather)
{
    ui->setupUi(this);
    initcitycode();
    manager=new QNetworkAccessManager(this);
    connect(manager,&QNetworkAccessManager::finished,this,&Weather::onReplyFinished);
    QUrl url("http://t.weather.itboy.net/api/weather/city/101060201");
    manager->get(QNetworkRequest(url));
}
Weather::~Weather()
{
    delete ui;
}
void Weather::onReplyFinished(QNetworkReply *reply){
    if(reply->error()!=QNetworkReply::NoError){
        reply->deleteLater();
        return;
    }
    //解析json数据
    QByteArray Data=reply->readAll();
    QJsonDocument Doc=QJsonDocument::fromJson(Data);
    QJsonObject root=Doc.object();
    QJsonObject DataObj=root["data"].toObject();
    QJsonArray forecast=DataObj["forecast"].toArray();
    QJsonObject today=forecast[0].toObject();
    //更新城市
    QString city=root["cityInfo"].toObject()["city"].toString();
    ui->City->setText(city);
    //更新日期
    ui->date->setText(today["ymd"].toString());
    //更新温度
    QString Wendu=DataObj["wendu"].toString().append("℃");
    QFont font;
    font.setPointSize(32);
    font.setBold(true);
    ui->WD->setText(Wendu);
    ui->WD->setFont(font);
    //更新温度范围
    QString high=today["high"].toString().remove("℃");
    QString low=today["low"].toString().remove("℃");
    ui->WDFW->setText(QString("%1~%2").arg(low).arg(high));
    //更新天气类型与图标
    QString weatherType=today["type"].toString();
    ui->TQ->setText(weatherType);
    if(weatherType=="晴"){
        ui->WeatherLabel->setPixmap(QPixmap(":/HHCharRoomIcon/2.png"));
    }else if(weatherType=="阴"){
        ui->WeatherLabel->setPixmap(QPixmap(":/HHCharRoomIcon/1.png"));
    }else if(weatherType=="多云"){
        ui->WeatherLabel->setPixmap(QPixmap(":/HHCharRoomIcon/4.png"));
    }else{
        ui->WeatherLabel->setPixmap(QPixmap(":/HHCharRoomIcon/3.png"));
    }
    //更新风向、PM2.5、湿度、空气质量
    ui->FXType->setText(today["fx"].toString());
    ui->FXClass->setText(today["fl"].toString());
    ui->SDClass->setText(DataObj["shidu"].toString());
    ui->KQClass->setText(DataObj["quality"].toString());
    ui->PMClass->setText(QString::number(DataObj["pm25"].toDouble()));
    //更新提示
    ui->label->setText(DataObj["ganmao"].toString());
    //更新未来四天
    for(int i=1;i<5;i++){
        QJsonObject cast = forecast[i].toObject();
        QString date=cast["ymd"].toString();
        int labelIndex = i + 1;  // 标签编号=循环i+1
        QString labelName = QString("label00%1").arg(labelIndex);  // 拼接标签名称
        QLabel *dateLabel = this->findChild<QLabel*>(labelName);
        if (!dateLabel) {
            continue;
        }
        QString ymd = cast["ymd"].toString();
        QStringList dateParts = ymd.split("-");
        if (dateParts.size() == 3) {
            QString shortDate = QString("%1/%2").arg(dateParts[1]).arg(dateParts[2]);
            dateLabel->setText(shortDate);
        } else {
            dateLabel->setText(ymd);
        }
        QString iconLabelName = QString("label%1").arg(labelIndex);
        QLabel *iconLabel = this->findChild<QLabel*>(iconLabelName);
        if (iconLabel) {
            QString weatherType = cast["type"].toString();
            if (weatherType == "晴") {
                iconLabel->setPixmap(QPixmap(":/HHCharRoomIcon/2.png").scaled(40, 40, Qt::KeepAspectRatio));
            } else if (weatherType == "阴") {
                iconLabel->setPixmap(QPixmap(":/HHCharRoomIcon/1.png").scaled(40, 40, Qt::KeepAspectRatio));
            } else if (weatherType.contains("雨")) {
                iconLabel->setPixmap(QPixmap(":/HHCharRoomIcon/3.png").scaled(40, 40, Qt::KeepAspectRatio));
            } else {
                iconLabel->setPixmap(QPixmap(":/HHCharRoomIcon/4.png").scaled(40, 40, Qt::KeepAspectRatio));
            }
        }
        QString qualityLabelName = QString("quality0%1").arg(labelIndex);
        QLabel *qualityLabel = this->findChild<QLabel*>(qualityLabelName);
        if (qualityLabel) {
            QString quality = cast["quality"].toString();
            qualityLabel->setText(quality);
            if (quality == "优") {
                qualityLabel->setStyleSheet("color: #2E8B57;");
            } else if (quality == "良") {
                qualityLabel->setStyleSheet("color: #32CD32;");
            } else if (quality.contains("轻度污染")) {
                qualityLabel->setStyleSheet("color: #FFA500;");
            } else {
                qualityLabel->setStyleSheet("color: #FF4500;");
            }
        }
    }
}
void Weather::initcitycode(){
    CityCode.insert("北京", "101010100");
    CityCode.insert("上海", "101020100");
    CityCode.insert("广州", "101280101");
    CityCode.insert("深圳", "101280601");
    CityCode.insert("杭州", "101210101");
    CityCode.insert("南京", "101190101");
    CityCode.insert("武汉", "101200101");
    CityCode.insert("成都", "101270101");
    CityCode.insert("重庆", "101040100");
    CityCode.insert("天津", "101030100");
    CityCode.insert("西安", "101110101");
    CityCode.insert("长春", "101060101");
    CityCode.insert("吉林", "101060201");
    CityCode.insert("哈尔滨", "101050101");
}

void Weather::on_inquire_clicked()
{
    QString cityName = ui->lineEdit->text().trimmed();
    if (cityName.isEmpty()) {
        QMessageBox::information(this,"查询提示","查询失败");
        return;
    }
    if (!CityCode.contains(cityName)) {
        QMessageBox::information(this,"查询提示","查询失败");
        return;
    }
    QString cityCode = CityCode[cityName];
    QString apiUrl = QString("http://t.weather.itboy.net/api/weather/city/%1").arg(cityCode);
    manager->get(QNetworkRequest(QUrl(apiUrl)));
    ui->lineEdit->clear();
}

