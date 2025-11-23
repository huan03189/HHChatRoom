HHChatRoom - 基于 Qt 的多线程即时通讯系统
A Multi-threaded Instant Messaging System Based on Qt
项目简介
HHChatRoom 是一款基于 Qt 框架开发的跨平台即时通讯应用，集成了 登录注册、群聊、实时天气查询、本地数据持久化 等核心功能。采用 多线程架构 分离核心业务逻辑，确保 UI 响应流畅与数据处理高效，同时通过 MQTT 协议实现稳定的网络通信，支持 Windows 平台直接运行（无需额外安装依赖）。
核心功能
功能模块	详细说明
账户管理	支持用户注册、登录验证，本地 SQLite 数据库存储账户信息（用户名、密码加密存储）
即时通讯	MQTT 协议实现群聊、一对一私聊，消息实时收发，支持消息状态反馈
实时天气查询	调用天气 API 获取城市天气数据，同步显示温度、天气状况等信息
多线程架构	独立线程处理 MQTT 通信、数据库操作、天气 API 请求，避免阻塞 UI 线程
可视化界面	自定义图标资源，简洁直观的交互设计，支持窗口自适应布局
技术栈
开发框架：Qt 5/6（Qt Widgets 用于界面开发）
核心库 / 模块：Qt Core、Qt Widgets、Qt Sql（SQLite）、Qt Network、Qt MQTT
编译环境：MSVC 2022 / MinGW 8.1.0（64-bit）
编程语言：C++ 17
网络协议：MQTT（消息传输）、HTTP/HTTPS（天气 API 请求）
数据存储：SQLite（本地数据库）
架构设计：多线程（UI 线程 + 业务子线程）
多线程设计亮点
为解决单线程下 "UI 卡顿"、"数据处理阻塞" 问题，项目采用 多线程分离架构，核心线程分工如下：
1. 主线程（UI 线程）
负责界面渲染、用户交互（按钮点击、输入框输入等）
仅处理 UI 相关操作，不参与耗时任务（如网络请求、数据库读写）
通过 Qt 信号与槽机制，与子线程进行安全的数据通信（避免线程安全问题）
2. MQTT 通信线程
独立线程处理 MQTT 客户端的连接、订阅、消息收发
耗时操作（网络连接、消息等待）在子线程中执行，不阻塞 UI 响应
消息接收后通过信号通知 UI 线程更新聊天界面，消息发送通过信号提交给子线程处理
3. 数据库操作线程
独立线程处理 SQLite 数据库的增删改查（用户注册、登录验证、消息缓存）
避免频繁数据库操作导致 UI 卡顿，同时通过线程锁保证数据读写安全
支持异步查询结果返回（如登录验证结果通过信号反馈给 UI 线程）
4. 天气 API 请求线程
独立线程发起 HTTP 请求调用天气 API，解析返回的 JSON 数据
网络请求耗时（如网络延迟）不影响 UI 操作，数据解析完成后更新界面天气信息
支持定时刷新天气数据（可配置刷新间隔）
多线程通信方式
采用 Qt 原生 信号与槽（Signal/Slot） 机制，通过 Qt::QueuedConnection 实现跨线程安全通信，无需手动处理线程锁（Qt 内部已封装），确保数据传输安全且高效。
快速开始
方式 1：直接运行（推荐，无需安装 Qt）
下载 Releases 中的 Release.zip 压缩包；
解压到任意 纯英文路径（无中文、空格、特殊字符）；
双击解压目录中的 HHChatRoom.exe，即可启动程序；
首次使用：点击「注册」创建账户，登录后即可使用所有功能。
方式 2：源码编译（二次开发）
环境要求：安装 Qt 5.15+ / Qt 6.0+（需勾选 Qt MQTT、Qt Sql、MinGW/MSVC 编译器）；
下载项目源码：git clone https://github.com/你的用户名/HHChatRoom-github.git；
打开 Qt Creator，导入 src/HHChatRoom.pro 工程文件；
切换构建模式为「Release」，点击「构建」→「重新构建项目」；
编译完成后，在 build-xxx-Release/release/ 目录找到可执行文件。
目录结构说明
plaintext
HHChatRoom-github/
├── .gitignore        # Git 忽略文件（过滤编译产物、本地数据库等）
├── docs/             # 项目文档目录（含本 README）
├── Release/          # 本地打包目录（可运行文件，不上传 Git）
├── Release.zip       # 发布用压缩包（通过 GitHub Releases 发布）
└── src/              # 核心源代码目录
    ├── Icon.qrc      # 资源文件（图标、图片等）
    ├── HHChatRoom.pro# 工程配置文件
    ├── main.cpp      # 程序入口
    ├── charroom.cpp/.h/.ui  # 群聊界面    初始时候打成了CharRoom，后面就没改。
    ├── privatechat.cpp/.h/.ui  # 私聊界面
    ├── logreg.cpp/.h/.ui    # 登录注册界面
    ├── mqttwork.cpp/.h      # MQTT 通信线程逻辑
    ├── database.cpp/.h      # 数据库操作线程逻辑
    ├── weather.cpp/.h/.ui   # 天气查询线程逻辑
    └── widget.cpp/.h/.ui    # 主窗口界面
注意事项
运行程序时，确保网络通畅（需访问 MQTT 服务器、天气 API）；
避免将程序放在中文路径下，否则可能导致图标缺失、启动失败；
本地数据库文件 HH_db.db 自动生成在程序运行目录，卸载时直接删除即可；
二次开发时，若修改资源文件（Icon.qrc），需重新编译才能生效。
问题排查
图标缺失：检查 Icon.qrc 中资源路径是否正确，确保图标文件在 resources/HHCharRoomIcon/ 目录；
启动失败 / 闪退：检查路径是否含中文，或缺失依赖 DLL（重新解压 Release.zip 即可）；
编译报错：确认 Qt 安装时勾选了「Qt MQTT」模块，且 Kit 配置正确（Qt 版本、编译器匹配）；
无法登录 / 注册：检查本地数据库权限，或确保 SQLite 驱动已正确加载。
致谢
Qt 框架：提供强大的跨平台开发能力与丰富的组件库；
MQTT 协议：轻量级、低功耗的消息传输方案，适配即时通讯场景；
天气 API 服务：提供实时天气数据支持（需自行替换为可用 API）。
欢迎 Star 🌟 本项目，如有 Bug 反馈或功能建议，可通过 Issues 提交！
