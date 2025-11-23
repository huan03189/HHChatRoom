#ifndef WEATHER_H
#define WEATHER_H

#include <QWidget>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
namespace Ui {
class Weather;
}

class Weather : public QWidget
{
    Q_OBJECT

public:
    explicit Weather(QWidget *parent = nullptr);
    ~Weather();

private:
    Ui::Weather *ui;
    QNetworkAccessManager *manager;
    QMap<QString,QString> CityCode;
    void initcitycode();

private slots:
    void onReplyFinished(QNetworkReply *reply);
    void on_inquire_clicked();
};

#endif // WEATHER_H
