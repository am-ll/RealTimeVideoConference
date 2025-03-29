#include "customtitlebar.h"
#include <QApplication>
#include <QStyle>
#include <QDebug>

CustomTitleBar::CustomTitleBar(QWidget *parent)
    : QWidget(parent)
    , m_targetWindow(nullptr)
    , m_isMaximized(false)
{
    setupUI();
    setupConnections();
}

CustomTitleBar::~CustomTitleBar()
{
}

void CustomTitleBar::setTitle(const QString &title)
{
    m_titleLabel->setText(title);
}

void CustomTitleBar::setIcon(const QPixmap &icon)
{
    m_iconLabel->setPixmap(icon);
}

void CustomTitleBar::applyToWindow(QWidget *window)
{
    if (!window) {
        return;
    }

    m_targetWindow = window;
    
    // 设置无边框窗口
    window->setWindowFlags(Qt::FramelessWindowHint);
    window->setAttribute(Qt::WA_TranslucentBackground);
}

void CustomTitleBar::setupUI()
{
    // 设置固定高度
    setFixedHeight(50);
    
    // 创建布局
    m_layout = new QHBoxLayout(this);
    m_layout->setContentsMargins(10, 0, 10, 0);
    m_layout->setSpacing(5);
    
    // 创建图标标签
    m_iconLabel = new QLabel(this);
    m_iconLabel->setFixedSize(40, 40);
    m_layout->addWidget(m_iconLabel);
    
    // 创建标题标签
    m_titleLabel = new QLabel(this);
    m_titleLabel->setObjectName("titleLabel");
    m_layout->addWidget(m_titleLabel);
    
    // 添加弹簧
    m_layout->addStretch();
    
    // 创建最小化按钮
    m_minButton = new QPushButton(this);
    m_minButton->setObjectName("minButton");
    m_minButton->setToolTip("最小化");
    m_minButton->setFixedSize(40, 40);
    m_layout->addWidget(m_minButton);
    
    // 创建最大化按钮
    m_maxButton = new QPushButton(this);
    m_maxButton->setObjectName("maxButton");
    m_maxButton->setToolTip("最大化");
    m_maxButton->setFixedSize(40, 40);
    m_layout->addWidget(m_maxButton);
    
    // 创建关闭按钮
    m_closeButton = new QPushButton(this);
    m_closeButton->setObjectName("closeButton");
    m_closeButton->setToolTip("关闭");
    m_closeButton->setFixedSize(40, 40);
    m_layout->addWidget(m_closeButton);
    
    // 设置默认标题
    setTitle("应用程序");
}

void CustomTitleBar::setupConnections()
{
    connect(m_minButton, &QPushButton::clicked, this, &CustomTitleBar::onMinButtonClicked);
    connect(m_maxButton, &QPushButton::clicked, this, &CustomTitleBar::onMaxButtonClicked);
    connect(m_closeButton, &QPushButton::clicked, this, &CustomTitleBar::onCloseButtonClicked);
}

void CustomTitleBar::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton && m_targetWindow) {
        m_dragPosition = event->globalPos() - m_targetWindow->frameGeometry().topLeft();
        event->accept();
    }
}

void CustomTitleBar::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton && m_targetWindow) {
        m_targetWindow->move(event->globalPos() - m_dragPosition);
        event->accept();
    }
}

void CustomTitleBar::mouseDoubleClickEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        onMaxButtonClicked();
    }
}

void CustomTitleBar::onMinButtonClicked()
{
    if (m_targetWindow) {
        m_targetWindow->showMinimized();
    }
}

void CustomTitleBar::onMaxButtonClicked()
{
    if (!m_targetWindow) {
        return;
    }
    
    if (m_targetWindow->isMaximized()) {
        m_targetWindow->showNormal();
        m_isMaximized = false;
    } else {
        m_targetWindow->showMaximized();
        m_isMaximized = true;
    }
}

void CustomTitleBar::onCloseButtonClicked()
{
    if (m_targetWindow) {
        m_targetWindow->close();
    }
} 