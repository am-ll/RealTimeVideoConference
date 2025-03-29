#ifndef CUSTOMTITLEBAR_H
#define CUSTOMTITLEBAR_H

#include <QWidget>
#include <QPoint>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QMouseEvent>

class CustomTitleBar : public QWidget
{
    Q_OBJECT

public:
    explicit CustomTitleBar(QWidget *parent = nullptr);
    ~CustomTitleBar();

    // 设置标题
    void setTitle(const QString &title);
    
    // 设置图标
    void setIcon(const QPixmap &icon);
    
    // 应用到窗口
    void applyToWindow(QWidget *window);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseDoubleClickEvent(QMouseEvent *event) override;

private slots:
    void onMinButtonClicked();
    void onMaxButtonClicked();
    void onCloseButtonClicked();

private:
    QLabel *m_iconLabel;
    QLabel *m_titleLabel;
    QPushButton *m_minButton;
    QPushButton *m_maxButton;
    QPushButton *m_closeButton;
    QHBoxLayout *m_layout;
    
    QWidget *m_targetWindow;
    QPoint m_dragPosition;
    bool m_isMaximized;
    
    void setupUI();
    void setupConnections();
};

#endif // CUSTOMTITLEBAR_H 