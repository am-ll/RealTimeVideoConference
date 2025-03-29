/********************************************************************************
** Form generated from reading UI file 'meetingroom.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEETINGROOM_H
#define UI_MEETINGROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MeetingRoom
{
public:
    QVBoxLayout *mainLayout;
    QFrame *titleBarFrame;
    QHBoxLayout *titleBarLayout;
    QLabel *appLogoLabel;
    QLabel *appTitleLabel;
    QSpacerItem *titleBarSpacer;
    QPushButton *settingsButton;
    QPushButton *minButton;
    QPushButton *maxButton;
    QPushButton *closeButton;
    QFrame *meetingInfoFrame;
    QHBoxLayout *meetingInfoLayout;
    QLabel *meetingTitleLabel;
    QSpacerItem *meetingInfoSpacer;
    QLabel *meetingIdLabel;
    QPushButton *leaveButton;
    QFrame *contentFrame;
    QHBoxLayout *contentLayout;
    QFrame *videoFrame;
    QVBoxLayout *videoLayout;
    QFrame *mainVideoContainer;
    QFrame *controlsFrame;
    QHBoxLayout *controlsLayout;
    QSpacerItem *controlsLeftSpacer;
    QPushButton *audioToggleButton;
    QPushButton *videoToggleButton;
    QPushButton *screenShareButton;
    QSpacerItem *controlsRightSpacer;
    QFrame *sidebarFrame;
    QVBoxLayout *sidebarLayout;
    QTabWidget *sideTabWidget;
    QWidget *participantsTab;
    QVBoxLayout *participantsTabLayout;
    QLabel *participantsLabel;
    QListWidget *participantsList;
    QWidget *chatTab;
    QVBoxLayout *chatTabLayout;
    QLabel *chatLabel;
    QTextBrowser *chatDisplay;
    QFrame *chatInputFrame;
    QHBoxLayout *chatInputLayout;
    QLineEdit *chatInput;
    QPushButton *sendButton;

    void setupUi(QWidget *MeetingRoom)
    {
        if (MeetingRoom->objectName().isEmpty())
            MeetingRoom->setObjectName(QString::fromUtf8("MeetingRoom"));
        MeetingRoom->resize(1200, 800);
        MeetingRoom->setStyleSheet(QString::fromUtf8(""));
        mainLayout = new QVBoxLayout(MeetingRoom);
        mainLayout->setSpacing(5);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mainLayout->setContentsMargins(0, 0, 0, 0);
        titleBarFrame = new QFrame(MeetingRoom);
        titleBarFrame->setObjectName(QString::fromUtf8("titleBarFrame"));
        titleBarFrame->setMinimumSize(QSize(0, 60));
        titleBarFrame->setMaximumSize(QSize(16777215, 60));
        titleBarFrame->setFrameShape(QFrame::StyledPanel);
        titleBarFrame->setFrameShadow(QFrame::Raised);
        titleBarLayout = new QHBoxLayout(titleBarFrame);
        titleBarLayout->setObjectName(QString::fromUtf8("titleBarLayout"));
        titleBarLayout->setContentsMargins(9, 4, 9, 4);
        appLogoLabel = new QLabel(titleBarFrame);
        appLogoLabel->setObjectName(QString::fromUtf8("appLogoLabel"));
        appLogoLabel->setMinimumSize(QSize(40, 40));
        appLogoLabel->setMaximumSize(QSize(40, 40));

        titleBarLayout->addWidget(appLogoLabel, 0, Qt::AlignVCenter);

        appTitleLabel = new QLabel(titleBarFrame);
        appTitleLabel->setObjectName(QString::fromUtf8("appTitleLabel"));

        titleBarLayout->addWidget(appTitleLabel, 0, Qt::AlignVCenter);

        titleBarSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        titleBarLayout->addItem(titleBarSpacer);

        settingsButton = new QPushButton(titleBarFrame);
        settingsButton->setObjectName(QString::fromUtf8("settingsButton"));
        settingsButton->setMinimumSize(QSize(40, 40));
        settingsButton->setMaximumSize(QSize(40, 40));

        titleBarLayout->addWidget(settingsButton, 0, Qt::AlignVCenter);

        minButton = new QPushButton(titleBarFrame);
        minButton->setObjectName(QString::fromUtf8("minButton"));
        minButton->setMinimumSize(QSize(40, 40));
        minButton->setMaximumSize(QSize(40, 40));

        titleBarLayout->addWidget(minButton, 0, Qt::AlignVCenter);

        maxButton = new QPushButton(titleBarFrame);
        maxButton->setObjectName(QString::fromUtf8("maxButton"));
        maxButton->setMinimumSize(QSize(40, 40));
        maxButton->setMaximumSize(QSize(40, 40));

        titleBarLayout->addWidget(maxButton, 0, Qt::AlignVCenter);

        closeButton = new QPushButton(titleBarFrame);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setMinimumSize(QSize(40, 40));
        closeButton->setMaximumSize(QSize(40, 40));

        titleBarLayout->addWidget(closeButton, 0, Qt::AlignVCenter);


        mainLayout->addWidget(titleBarFrame);

        meetingInfoFrame = new QFrame(MeetingRoom);
        meetingInfoFrame->setObjectName(QString::fromUtf8("meetingInfoFrame"));
        meetingInfoFrame->setMinimumSize(QSize(0, 50));
        meetingInfoFrame->setMaximumSize(QSize(16777215, 50));
        meetingInfoFrame->setFrameShape(QFrame::StyledPanel);
        meetingInfoFrame->setFrameShadow(QFrame::Raised);
        meetingInfoLayout = new QHBoxLayout(meetingInfoFrame);
        meetingInfoLayout->setObjectName(QString::fromUtf8("meetingInfoLayout"));
        meetingInfoLayout->setContentsMargins(10, 5, 10, 5);
        meetingTitleLabel = new QLabel(meetingInfoFrame);
        meetingTitleLabel->setObjectName(QString::fromUtf8("meetingTitleLabel"));
        meetingTitleLabel->setAlignment(Qt::AlignCenter);

        meetingInfoLayout->addWidget(meetingTitleLabel, 0, Qt::AlignVCenter);

        meetingInfoSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        meetingInfoLayout->addItem(meetingInfoSpacer);

        meetingIdLabel = new QLabel(meetingInfoFrame);
        meetingIdLabel->setObjectName(QString::fromUtf8("meetingIdLabel"));
        meetingIdLabel->setMinimumSize(QSize(180, 0));

        meetingInfoLayout->addWidget(meetingIdLabel, 0, Qt::AlignVCenter);

        leaveButton = new QPushButton(meetingInfoFrame);
        leaveButton->setObjectName(QString::fromUtf8("leaveButton"));
        leaveButton->setMinimumSize(QSize(100, 35));

        meetingInfoLayout->addWidget(leaveButton, 0, Qt::AlignVCenter);


        mainLayout->addWidget(meetingInfoFrame);

        contentFrame = new QFrame(MeetingRoom);
        contentFrame->setObjectName(QString::fromUtf8("contentFrame"));
        contentFrame->setFrameShape(QFrame::StyledPanel);
        contentFrame->setFrameShadow(QFrame::Raised);
        contentLayout = new QHBoxLayout(contentFrame);
        contentLayout->setSpacing(10);
        contentLayout->setObjectName(QString::fromUtf8("contentLayout"));
        videoFrame = new QFrame(contentFrame);
        videoFrame->setObjectName(QString::fromUtf8("videoFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(4);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(videoFrame->sizePolicy().hasHeightForWidth());
        videoFrame->setSizePolicy(sizePolicy);
        videoFrame->setFrameShape(QFrame::StyledPanel);
        videoFrame->setFrameShadow(QFrame::Raised);
        videoLayout = new QVBoxLayout(videoFrame);
        videoLayout->setObjectName(QString::fromUtf8("videoLayout"));
        mainVideoContainer = new QFrame(videoFrame);
        mainVideoContainer->setObjectName(QString::fromUtf8("mainVideoContainer"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(mainVideoContainer->sizePolicy().hasHeightForWidth());
        mainVideoContainer->setSizePolicy(sizePolicy1);
        mainVideoContainer->setFrameShape(QFrame::StyledPanel);
        mainVideoContainer->setFrameShadow(QFrame::Raised);

        videoLayout->addWidget(mainVideoContainer);

        controlsFrame = new QFrame(videoFrame);
        controlsFrame->setObjectName(QString::fromUtf8("controlsFrame"));
        controlsFrame->setMinimumSize(QSize(0, 60));
        controlsFrame->setMaximumSize(QSize(16777215, 60));
        controlsFrame->setFrameShape(QFrame::StyledPanel);
        controlsFrame->setFrameShadow(QFrame::Raised);
        controlsLayout = new QHBoxLayout(controlsFrame);
        controlsLayout->setObjectName(QString::fromUtf8("controlsLayout"));
        controlsLayout->setContentsMargins(10, 5, 10, 5);
        controlsLeftSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        controlsLayout->addItem(controlsLeftSpacer);

        audioToggleButton = new QPushButton(controlsFrame);
        audioToggleButton->setObjectName(QString::fromUtf8("audioToggleButton"));
        audioToggleButton->setMinimumSize(QSize(50, 50));
        audioToggleButton->setMaximumSize(QSize(50, 50));
        audioToggleButton->setCheckable(true);

        controlsLayout->addWidget(audioToggleButton, 0, Qt::AlignVCenter);

        videoToggleButton = new QPushButton(controlsFrame);
        videoToggleButton->setObjectName(QString::fromUtf8("videoToggleButton"));
        videoToggleButton->setMinimumSize(QSize(50, 50));
        videoToggleButton->setMaximumSize(QSize(50, 50));
        videoToggleButton->setCheckable(true);

        controlsLayout->addWidget(videoToggleButton, 0, Qt::AlignVCenter);

        screenShareButton = new QPushButton(controlsFrame);
        screenShareButton->setObjectName(QString::fromUtf8("screenShareButton"));
        screenShareButton->setMinimumSize(QSize(50, 50));
        screenShareButton->setMaximumSize(QSize(50, 50));
        screenShareButton->setCheckable(true);

        controlsLayout->addWidget(screenShareButton, 0, Qt::AlignVCenter);

        controlsRightSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        controlsLayout->addItem(controlsRightSpacer);


        videoLayout->addWidget(controlsFrame);


        contentLayout->addWidget(videoFrame);

        sidebarFrame = new QFrame(contentFrame);
        sidebarFrame->setObjectName(QString::fromUtf8("sidebarFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sidebarFrame->sizePolicy().hasHeightForWidth());
        sidebarFrame->setSizePolicy(sizePolicy2);
        sidebarFrame->setMinimumSize(QSize(280, 0));
        sidebarFrame->setMaximumSize(QSize(320, 16777215));
        sidebarFrame->setFrameShape(QFrame::StyledPanel);
        sidebarFrame->setFrameShadow(QFrame::Raised);
        sidebarLayout = new QVBoxLayout(sidebarFrame);
        sidebarLayout->setSpacing(5);
        sidebarLayout->setObjectName(QString::fromUtf8("sidebarLayout"));
        sidebarLayout->setContentsMargins(5, 5, 5, 5);
        sideTabWidget = new QTabWidget(sidebarFrame);
        sideTabWidget->setObjectName(QString::fromUtf8("sideTabWidget"));
        sideTabWidget->setTabPosition(QTabWidget::North);
        sideTabWidget->setTabShape(QTabWidget::Rounded);
        sideTabWidget->setElideMode(Qt::ElideNone);
        sideTabWidget->setDocumentMode(false);
        participantsTab = new QWidget();
        participantsTab->setObjectName(QString::fromUtf8("participantsTab"));
        participantsTabLayout = new QVBoxLayout(participantsTab);
        participantsTabLayout->setSpacing(5);
        participantsTabLayout->setObjectName(QString::fromUtf8("participantsTabLayout"));
        participantsTabLayout->setContentsMargins(5, 5, 5, 5);
        participantsLabel = new QLabel(participantsTab);
        participantsLabel->setObjectName(QString::fromUtf8("participantsLabel"));
        QFont font;
        font.setBold(true);
        participantsLabel->setFont(font);

        participantsTabLayout->addWidget(participantsLabel);

        participantsList = new QListWidget(participantsTab);
        participantsList->setObjectName(QString::fromUtf8("participantsList"));
        participantsList->setMinimumSize(QSize(0, 400));
        participantsList->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        participantsTabLayout->addWidget(participantsList);

        sideTabWidget->addTab(participantsTab, QString());
        chatTab = new QWidget();
        chatTab->setObjectName(QString::fromUtf8("chatTab"));
        chatTabLayout = new QVBoxLayout(chatTab);
        chatTabLayout->setSpacing(5);
        chatTabLayout->setObjectName(QString::fromUtf8("chatTabLayout"));
        chatTabLayout->setContentsMargins(5, 5, 5, 5);
        chatLabel = new QLabel(chatTab);
        chatLabel->setObjectName(QString::fromUtf8("chatLabel"));
        chatLabel->setFont(font);

        chatTabLayout->addWidget(chatLabel);

        chatDisplay = new QTextBrowser(chatTab);
        chatDisplay->setObjectName(QString::fromUtf8("chatDisplay"));
        chatDisplay->setMinimumSize(QSize(0, 350));
        chatDisplay->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        chatTabLayout->addWidget(chatDisplay);

        chatInputFrame = new QFrame(chatTab);
        chatInputFrame->setObjectName(QString::fromUtf8("chatInputFrame"));
        chatInputFrame->setFrameShape(QFrame::StyledPanel);
        chatInputFrame->setFrameShadow(QFrame::Raised);
        chatInputLayout = new QHBoxLayout(chatInputFrame);
        chatInputLayout->setSpacing(6);
        chatInputLayout->setObjectName(QString::fromUtf8("chatInputLayout"));
        chatInputLayout->setContentsMargins(0, 0, 0, 0);
        chatInput = new QLineEdit(chatInputFrame);
        chatInput->setObjectName(QString::fromUtf8("chatInput"));
        chatInput->setMinimumSize(QSize(0, 35));

        chatInputLayout->addWidget(chatInput);

        sendButton = new QPushButton(chatInputFrame);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setMinimumSize(QSize(70, 35));

        chatInputLayout->addWidget(sendButton);


        chatTabLayout->addWidget(chatInputFrame);

        sideTabWidget->addTab(chatTab, QString());

        sidebarLayout->addWidget(sideTabWidget);


        contentLayout->addWidget(sidebarFrame);


        mainLayout->addWidget(contentFrame);


        retranslateUi(MeetingRoom);

        sideTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MeetingRoom);
    } // setupUi

    void retranslateUi(QWidget *MeetingRoom)
    {
        MeetingRoom->setWindowTitle(QCoreApplication::translate("MeetingRoom", "\344\274\232\350\256\256\345\256\244", nullptr));
        appLogoLabel->setText(QString());
        appTitleLabel->setText(QCoreApplication::translate("MeetingRoom", "\350\247\206\351\242\221\344\274\232\350\256\256\345\256\244", nullptr));
#if QT_CONFIG(tooltip)
        settingsButton->setToolTip(QCoreApplication::translate("MeetingRoom", "\347\263\273\347\273\237\350\256\276\347\275\256", nullptr));
#endif // QT_CONFIG(tooltip)
        settingsButton->setText(QString());
#if QT_CONFIG(tooltip)
        minButton->setToolTip(QCoreApplication::translate("MeetingRoom", "\346\234\200\345\260\217\345\214\226", nullptr));
#endif // QT_CONFIG(tooltip)
        minButton->setText(QString());
#if QT_CONFIG(tooltip)
        maxButton->setToolTip(QCoreApplication::translate("MeetingRoom", "\346\234\200\345\244\247\345\214\226", nullptr));
#endif // QT_CONFIG(tooltip)
        maxButton->setText(QString());
#if QT_CONFIG(tooltip)
        closeButton->setToolTip(QCoreApplication::translate("MeetingRoom", "\345\205\263\351\227\255", nullptr));
#endif // QT_CONFIG(tooltip)
        closeButton->setText(QString());
        meetingTitleLabel->setText(QCoreApplication::translate("MeetingRoom", "\345\275\223\345\211\215\344\274\232\350\256\256", nullptr));
        meetingIdLabel->setText(QCoreApplication::translate("MeetingRoom", "\344\274\232\350\256\256\345\217\267: ", nullptr));
        leaveButton->setText(QCoreApplication::translate("MeetingRoom", "\347\246\273\345\274\200\344\274\232\350\256\256", nullptr));
#if QT_CONFIG(tooltip)
        audioToggleButton->setToolTip(QCoreApplication::translate("MeetingRoom", "\351\272\246\345\205\213\351\243\216\345\274\200\345\205\263", nullptr));
#endif // QT_CONFIG(tooltip)
        audioToggleButton->setText(QString());
#if QT_CONFIG(tooltip)
        videoToggleButton->setToolTip(QCoreApplication::translate("MeetingRoom", "\346\221\204\345\203\217\345\244\264\345\274\200\345\205\263", nullptr));
#endif // QT_CONFIG(tooltip)
        videoToggleButton->setText(QString());
#if QT_CONFIG(tooltip)
        screenShareButton->setToolTip(QCoreApplication::translate("MeetingRoom", "\345\261\217\345\271\225\345\205\261\344\272\253", nullptr));
#endif // QT_CONFIG(tooltip)
        screenShareButton->setText(QString());
        participantsLabel->setText(QCoreApplication::translate("MeetingRoom", "\345\217\202\344\270\216\350\200\205\345\210\227\350\241\250", nullptr));
        sideTabWidget->setTabText(sideTabWidget->indexOf(participantsTab), QCoreApplication::translate("MeetingRoom", "\345\217\202\344\270\216\350\200\205", nullptr));
        chatLabel->setText(QCoreApplication::translate("MeetingRoom", "\350\201\212\345\244\251\346\266\210\346\201\257", nullptr));
        chatInput->setPlaceholderText(QCoreApplication::translate("MeetingRoom", "\350\276\223\345\205\245\346\266\210\346\201\257...", nullptr));
        sendButton->setText(QCoreApplication::translate("MeetingRoom", "\345\217\221\351\200\201", nullptr));
        sideTabWidget->setTabText(sideTabWidget->indexOf(chatTab), QCoreApplication::translate("MeetingRoom", "\350\201\212\345\244\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MeetingRoom: public Ui_MeetingRoom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEETINGROOM_H
