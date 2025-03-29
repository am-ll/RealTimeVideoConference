#include "meetingroom.h"
#include "ui_meetingroom.h"
#include <QFile>
#include <QDebug>
#include <QGraphicsDropShadowEffect>
#include <QPalette>
#include <QBrush>
#include <QPixmap>

MeetingRoom::MeetingRoom(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MeetingRoom)
{
    ui->setupUi(this);
    
    // 设置无边框窗口
    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    
    // 添加窗口阴影
    QGraphicsDropShadowEffect *shadowEffect = new QGraphicsDropShadowEffect(this);
    shadowEffect->setBlurRadius(20);
    shadowEffect->setColor(QColor(0, 0, 0, 80));
    shadowEffect->setOffset(0, 0);
    setGraphicsEffect(shadowEffect);
    
    // 设置背景图片
    QPixmap backgroundPixmap(":/resources/images/meeting_background.jpg");
    if (!backgroundPixmap.isNull()) {
        QSize windowSize = size();
        QPixmap scaledPixmap = backgroundPixmap.scaled(
            windowSize, 
            Qt::KeepAspectRatioByExpanding, 
            Qt::SmoothTransformation);
            
        // 裁剪以适应窗口大小
        if (scaledPixmap.width() > windowSize.width() || scaledPixmap.height() > windowSize.height()) {
            int x = (scaledPixmap.width() - windowSize.width()) / 2;
            int y = (scaledPixmap.height() - windowSize.height()) / 2;
            scaledPixmap = scaledPixmap.copy(x, y, windowSize.width(), windowSize.height());
        }
        
        QPalette palette;
        palette.setBrush(QPalette::Window, QBrush(scaledPixmap));
        setPalette(palette);
        setAutoFillBackground(true);
        
        qDebug() << "背景图片已成功加载，尺寸:" << backgroundPixmap.size();
    } else {
        qDebug() << "无法加载背景图片，请检查资源路径是否正确";
    }
    
    // 初始化标题栏
    setupTitleBar();
    
    // 初始化控制按钮
    setupControlButtons();
    
    // 连接发送按钮和聊天输入框
    connect(ui->sendButton, &QPushButton::clicked, this, &MeetingRoom::onSendMessage);
    connect(ui->chatInput, &QLineEdit::returnPressed, this, &MeetingRoom::onSendMessage);
    
    // 连接离开会议按钮
    connect(ui->leaveButton, &QPushButton::clicked, this, &MeetingRoom::close);

    // 加载QSS样式表
    QFile styleFile(":/resources/qss/meetingroom.qss");
    if (styleFile.open(QFile::ReadOnly)) {
        QString styleSheet = QString::fromUtf8(styleFile.readAll());
        setStyleSheet(styleSheet);
        styleFile.close();
    } else {
        qDebug() << "无法加载会议室样式表文件";
    }
    
    // 初始化会议房间号（示例）
    ui->meetingIdLabel->setText("会议号: 123-456-789");
    
    // 添加示例参与者
    addParticipant("张三 (主持人)");
    addParticipant("李四");
    addParticipant("王五");
    addParticipant("赵六");
    addParticipant("钱七");
    addParticipant("孙八");
    addParticipant("周九");
}

MeetingRoom::~MeetingRoom()
{
    delete ui;
}

void MeetingRoom::setupTitleBar()
{
    // 连接标题栏按钮
    connect(ui->minButton, &QPushButton::clicked, this, &MeetingRoom::showMinimized);
    connect(ui->maxButton, &QPushButton::clicked, this, &MeetingRoom::toggleMaximized);
    connect(ui->closeButton, &QPushButton::clicked, this, &MeetingRoom::close);
    connect(ui->settingsButton, &QPushButton::clicked, this, &MeetingRoom::onSettingsButtonClicked);
}

void MeetingRoom::setupControlButtons()
{
    // 设置初始图标
    ui->audioToggleButton->setIcon(QIcon(":/resources/images/mic.png"));
    ui->audioToggleButton->setIconSize(QSize(24, 24));
    
    ui->videoToggleButton->setIcon(QIcon(":/resources/images/camera.png"));
    ui->videoToggleButton->setIconSize(QSize(24, 24));
    
    ui->screenShareButton->setIcon(QIcon(":/resources/images/screen_share.png"));
    ui->screenShareButton->setIconSize(QSize(24, 24));
    
    // 连接音频切换按钮
    connect(ui->audioToggleButton, &QPushButton::toggled, this, &MeetingRoom::onAudioToggled);
    
    // 连接视频切换按钮
    connect(ui->videoToggleButton, &QPushButton::toggled, this, &MeetingRoom::onVideoToggled);
    
    // 连接屏幕共享按钮
    connect(ui->screenShareButton, &QPushButton::toggled, this, &MeetingRoom::onScreenShareToggled);
}

void MeetingRoom::toggleMaximized()
{
    if (isMaximized()) {
        showNormal();
    } else {
        showMaximized();
    }
}

void MeetingRoom::onSettingsButtonClicked()
{
    // 设置按钮点击事件
    qDebug() << "设置按钮被点击";
    // 这里可以添加打开设置对话框等功能
}

void MeetingRoom::onAudioToggled(bool checked)
{
    qDebug() << "音频状态: " << (checked ? "关闭" : "开启");
    
    // 切换图标 - 确保图标正确显示，不仅依赖于QSS
    if (checked) {
        ui->audioToggleButton->setIcon(QIcon(":/resources/images/mic_off.png"));
        ui->audioToggleButton->setStyleSheet("background-color: #e74c3c; border-radius: 25px; padding: 5px;");
    } else {
        ui->audioToggleButton->setIcon(QIcon(":/resources/images/mic.png"));
        ui->audioToggleButton->setStyleSheet("background-color: #3498db; border-radius: 25px; padding: 5px;");
    }
    
    // 可以在这里添加实际的音频控制逻辑
}

void MeetingRoom::onVideoToggled(bool checked)
{
    qDebug() << "视频状态: " << (checked ? "关闭" : "开启");
    
    // 切换图标 - 确保图标正确显示，不仅依赖于QSS
    if (checked) {
        //qDebug()<<"视频状态"<<"关闭";
        ui->videoToggleButton->setIcon(QIcon(":/resources/images/camera_off.png"));
        ui->videoToggleButton->setStyleSheet("background-color: #e74c3c; border-radius: 25px; padding: 5px;");
    } else {
        ui->videoToggleButton->setIcon(QIcon(":/resources/images/camera.png"));
        ui->videoToggleButton->setStyleSheet("background-color: #3498db; border-radius: 25px; padding: 5px;");
    }
    
    // 可以在这里添加实际的视频控制逻辑
}

void MeetingRoom::onScreenShareToggled(bool checked)
{
    qDebug() << "屏幕共享状态: " << (checked ? "开启" : "关闭");
    
    // 切换图标 - 确保图标正确显示，不仅依赖于QSS
    if (checked) {
        ui->screenShareButton->setIcon(QIcon(":/resources/images/screen_share_active.png"));
        ui->screenShareButton->setStyleSheet("background-color: #27ae60; border-radius: 25px; padding: 5px;");
    } else {
        ui->screenShareButton->setIcon(QIcon(":/resources/images/screen_share.png"));
        ui->screenShareButton->setStyleSheet("background-color: #3498db; border-radius: 25px; padding: 5px;");
    }
    
    // 可以在这里添加实际的屏幕共享控制逻辑
}

void MeetingRoom::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        // 只有当点击在标题栏范围内时才允许拖动窗口
        QRect titleBarRect = ui->titleBarFrame->geometry();
        if (titleBarRect.contains(event->pos())) {
            m_dragPosition = event->globalPos() - frameGeometry().topLeft();
            event->accept();
        }
    }
}

void MeetingRoom::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton) {
        move(event->globalPos() - m_dragPosition);
        event->accept();
    }
}

void MeetingRoom::onSendMessage()
{
    QString message = ui->chatInput->text().trimmed();
    if (!message.isEmpty()) {
        // 这里添加发送消息的逻辑
        QString formattedMessage = QString("<b>我:</b> %1").arg(message);
        ui->chatDisplay->append(formattedMessage);
        
        // 清空输入框
        ui->chatInput->clear();
    }
}

void MeetingRoom::addParticipant(const QString &name)
{
    // 添加参与者到列表
    QListWidgetItem *item = new QListWidgetItem(name);
    ui->participantsList->addItem(item);
}

void MeetingRoom::resizeEvent(QResizeEvent *event)
{
    QWidget::resizeEvent(event);
    
    // 窗口大小变化时更新背景图片
    QPixmap backgroundPixmap(":/resources/images/meeting_background.jpg");
    if (!backgroundPixmap.isNull()) {
        QSize windowSize = size();
        QPixmap scaledPixmap = backgroundPixmap.scaled(
            windowSize, 
            Qt::KeepAspectRatioByExpanding, 
            Qt::SmoothTransformation);
            
        // 裁剪以适应窗口大小
        if (scaledPixmap.width() > windowSize.width() || scaledPixmap.height() > windowSize.height()) {
            int x = (scaledPixmap.width() - windowSize.width()) / 2;
            int y = (scaledPixmap.height() - windowSize.height()) / 2;
            scaledPixmap = scaledPixmap.copy(x, y, windowSize.width(), windowSize.height());
        }
        
        QPalette palette;
        palette.setBrush(QPalette::Window, QBrush(scaledPixmap));
        setPalette(palette);
    }
}
