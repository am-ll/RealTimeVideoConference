#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFile>
#include <QStyle>
#include <QGraphicsDropShadowEffect>
#include <QPushButton>
#include <QHBoxLayout>
#include <QDebug>
#include "src/meetingroom.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    
    MeetingRoom *Meet=new MeetingRoom;
    Meet->show();

    // 设置无边框窗口
    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    
    // 添加窗口阴影
    QGraphicsDropShadowEffect *shadowEffect = new QGraphicsDropShadowEffect(this);
    shadowEffect->setBlurRadius(20);
    shadowEffect->setColor(QColor(0, 0, 0, 80));
    shadowEffect->setOffset(0, 0);
    ui->centralwidget->setGraphicsEffect(shadowEffect);
    
    // 创建窗口控制按钮
    QPushButton *minButton = new QPushButton(this);
    QPushButton *maxButton = new QPushButton(this);
    QPushButton *closeButton = new QPushButton(this);
    
    minButton->setObjectName("minButton");
    maxButton->setObjectName("maxButton");
    closeButton->setObjectName("closeButton");
    
    minButton->setFixedSize(40, 40);
    maxButton->setFixedSize(40, 40);
    closeButton->setFixedSize(40, 40);
    
    // 设置工具提示
    minButton->setToolTip("最小化");
    maxButton->setToolTip("最大化");
    closeButton->setToolTip("关闭");
    
    // 添加按钮到标题栏
    QHBoxLayout *headerLayout = qobject_cast<QHBoxLayout*>(ui->headerFrame->layout());
    if (headerLayout) {
        headerLayout->addWidget(minButton);
        headerLayout->addWidget(maxButton);
        headerLayout->addWidget(closeButton);
    }
    
    // 连接信号和槽
    connect(minButton, &QPushButton::clicked, this, &MainWindow::showMinimized);
    connect(maxButton, &QPushButton::clicked, this, &MainWindow::toggleMaximized);
    connect(closeButton, &QPushButton::clicked, this, &MainWindow::close);
    
    // 加载QSS样式表
    QFile styleFile(":/resources/qss/mainwindow.qss");
    if (styleFile.open(QFile::ReadOnly)) {
        QString styleSheet = QString::fromUtf8(styleFile.readAll());
        setStyleSheet(styleSheet);
        styleFile.close();
    } else {
        qDebug() << "无法加载样式表文件";
    }


}

void MainWindow::toggleMaximized()
{
    if (isMaximized()) {
        showNormal();
    } else {
        showMaximized();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

// 实现鼠标拖动窗口
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        m_dragPosition = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton) {
        move(event->globalPos() - m_dragPosition);
        event->accept();
    }
}
