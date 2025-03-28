/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *mainVerticalLayout;
    QFrame *headerFrame;
    QHBoxLayout *headerLayout;
    QLabel *appLogoLabel;
    QLabel *appTitleLabel;
    QSpacerItem *headerSpacer;
    QPushButton *settingsButton;
    QFrame *contentFrame;
    QHBoxLayout *contentLayout;
    QFrame *sidebarFrame;
    QVBoxLayout *sidebarLayout;
    QPushButton *createMeetingButton;
    QPushButton *joinMeetingButton;
    QLineEdit *meetingIdInput;
    QLabel *meetingListTitle;
    QListWidget *meetingListWidget;
    QFrame *mainContentFrame;
    QVBoxLayout *mainContentLayout;
    QLabel *welcomeMessageLabel;
    QLabel *welcomeDescriptionLabel;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 700);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        mainVerticalLayout = new QVBoxLayout(centralwidget);
        mainVerticalLayout->setObjectName(QString::fromUtf8("mainVerticalLayout"));
        headerFrame = new QFrame(centralwidget);
        headerFrame->setObjectName(QString::fromUtf8("headerFrame"));
        headerFrame->setMinimumSize(QSize(0, 60));
        headerLayout = new QHBoxLayout(headerFrame);
        headerLayout->setObjectName(QString::fromUtf8("headerLayout"));
        appLogoLabel = new QLabel(headerFrame);
        appLogoLabel->setObjectName(QString::fromUtf8("appLogoLabel"));
        appLogoLabel->setMinimumSize(QSize(40, 40));
        appLogoLabel->setMaximumSize(QSize(40, 40));

        headerLayout->addWidget(appLogoLabel);

        appTitleLabel = new QLabel(headerFrame);
        appTitleLabel->setObjectName(QString::fromUtf8("appTitleLabel"));

        headerLayout->addWidget(appTitleLabel);

        headerSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        headerLayout->addItem(headerSpacer);

        settingsButton = new QPushButton(headerFrame);
        settingsButton->setObjectName(QString::fromUtf8("settingsButton"));
        settingsButton->setMinimumSize(QSize(40, 40));
        settingsButton->setMaximumSize(QSize(40, 40));

        headerLayout->addWidget(settingsButton);


        mainVerticalLayout->addWidget(headerFrame);

        contentFrame = new QFrame(centralwidget);
        contentFrame->setObjectName(QString::fromUtf8("contentFrame"));
        contentLayout = new QHBoxLayout(contentFrame);
        contentLayout->setObjectName(QString::fromUtf8("contentLayout"));
        sidebarFrame = new QFrame(contentFrame);
        sidebarFrame->setObjectName(QString::fromUtf8("sidebarFrame"));
        sidebarFrame->setMaximumSize(QSize(300, 16777215));
        sidebarLayout = new QVBoxLayout(sidebarFrame);
        sidebarLayout->setObjectName(QString::fromUtf8("sidebarLayout"));
        createMeetingButton = new QPushButton(sidebarFrame);
        createMeetingButton->setObjectName(QString::fromUtf8("createMeetingButton"));
        createMeetingButton->setMinimumSize(QSize(0, 50));

        sidebarLayout->addWidget(createMeetingButton);

        joinMeetingButton = new QPushButton(sidebarFrame);
        joinMeetingButton->setObjectName(QString::fromUtf8("joinMeetingButton"));
        joinMeetingButton->setMinimumSize(QSize(0, 50));

        sidebarLayout->addWidget(joinMeetingButton);

        meetingIdInput = new QLineEdit(sidebarFrame);
        meetingIdInput->setObjectName(QString::fromUtf8("meetingIdInput"));
        meetingIdInput->setMinimumSize(QSize(0, 40));

        sidebarLayout->addWidget(meetingIdInput);

        meetingListTitle = new QLabel(sidebarFrame);
        meetingListTitle->setObjectName(QString::fromUtf8("meetingListTitle"));

        sidebarLayout->addWidget(meetingListTitle);

        meetingListWidget = new QListWidget(sidebarFrame);
        meetingListWidget->setObjectName(QString::fromUtf8("meetingListWidget"));

        sidebarLayout->addWidget(meetingListWidget);


        contentLayout->addWidget(sidebarFrame);

        mainContentFrame = new QFrame(contentFrame);
        mainContentFrame->setObjectName(QString::fromUtf8("mainContentFrame"));
        mainContentLayout = new QVBoxLayout(mainContentFrame);
        mainContentLayout->setObjectName(QString::fromUtf8("mainContentLayout"));
        welcomeMessageLabel = new QLabel(mainContentFrame);
        welcomeMessageLabel->setObjectName(QString::fromUtf8("welcomeMessageLabel"));
        welcomeMessageLabel->setAlignment(Qt::AlignCenter);

        mainContentLayout->addWidget(welcomeMessageLabel);

        welcomeDescriptionLabel = new QLabel(mainContentFrame);
        welcomeDescriptionLabel->setObjectName(QString::fromUtf8("welcomeDescriptionLabel"));
        welcomeDescriptionLabel->setAlignment(Qt::AlignCenter);

        mainContentLayout->addWidget(welcomeDescriptionLabel);


        contentLayout->addWidget(mainContentFrame);


        mainVerticalLayout->addWidget(contentFrame);

        MainWindow->setCentralWidget(centralwidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\247\206\351\242\221\344\274\232\350\256\256\347\263\273\347\273\237", nullptr));
        appTitleLabel->setText(QCoreApplication::translate("MainWindow", "\350\247\206\351\242\221\344\274\232\350\256\256\347\263\273\347\273\237", nullptr));
#if QT_CONFIG(tooltip)
        settingsButton->setToolTip(QCoreApplication::translate("MainWindow", "\347\263\273\347\273\237\350\256\276\347\275\256", nullptr));
#endif // QT_CONFIG(tooltip)
        settingsButton->setText(QString());
        createMeetingButton->setText(QCoreApplication::translate("MainWindow", "\345\210\233\345\273\272\346\210\277\351\227\264", nullptr));
        joinMeetingButton->setText(QCoreApplication::translate("MainWindow", "\345\212\240\345\205\245\346\210\277\351\227\264", nullptr));
        meetingIdInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\346\210\277\351\227\264\345\217\267...", nullptr));
        meetingListTitle->setText(QCoreApplication::translate("MainWindow", "\346\210\221\347\232\204\346\210\277\351\227\264\345\210\227\350\241\250", nullptr));
        welcomeMessageLabel->setText(QCoreApplication::translate("MainWindow", "\346\254\242\350\277\216\344\275\277\347\224\250\350\247\206\351\242\221\344\274\232\350\256\256\347\263\273\347\273\237", nullptr));
        welcomeDescriptionLabel->setText(QCoreApplication::translate("MainWindow", "\346\202\250\345\217\257\344\273\245\345\210\233\345\273\272\346\226\260\347\232\204\344\274\232\350\256\256\346\210\277\351\227\264\346\210\226\345\212\240\345\205\245\345\267\262\346\234\211\347\232\204\346\210\277\351\227\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
