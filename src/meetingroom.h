#ifndef MEETINGROOM_H
#define MEETINGROOM_H

#include <QWidget>
#include <QMouseEvent>
#include <QPoint>
#include <QResizeEvent>

namespace Ui {
class MeetingRoom;
}

class MeetingRoom : public QWidget
{
    Q_OBJECT

public:
    explicit MeetingRoom(QWidget *parent = nullptr);
    ~MeetingRoom();

private slots:
    void onSendMessage();
    void toggleMaximized();
    void onSettingsButtonClicked();
    void onAudioToggled(bool checked);
    void onVideoToggled(bool checked);
    void onScreenShareToggled(bool checked);

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;

private:
    Ui::MeetingRoom *ui;
    QPoint m_dragPosition;
    
    void setupTitleBar();
    void setupControlButtons();
    void addParticipant(const QString &name);
};

#endif // MEETINGROOM_H
