/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *controlPanelLayout;
    QLabel *titleLabel;
    QFrame *line;
    QLabel *sourceLabel;
    QComboBox *sourceComboBox;
    QLabel *destLabel;
    QComboBox *destComboBox;
    QPushButton *findPathButton;
    QFrame *line_2;
    QLabel *resultLabel;
    QTextEdit *pathResultTextEdit;
    QSpacerItem *verticalSpacer;
    QGraphicsView *mapGraphicsView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1200, 800);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName("layoutWidget");
        controlPanelLayout = new QVBoxLayout(layoutWidget);
        controlPanelLayout->setSpacing(10);
        controlPanelLayout->setObjectName("controlPanelLayout");
        controlPanelLayout->setContentsMargins(0, 0, 0, 0);
        titleLabel = new QLabel(layoutWidget);
        titleLabel->setObjectName("titleLabel");
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        titleLabel->setFont(font);
        titleLabel->setAlignment(Qt::AlignCenter);

        controlPanelLayout->addWidget(titleLabel);

        line = new QFrame(layoutWidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        controlPanelLayout->addWidget(line);

        sourceLabel = new QLabel(layoutWidget);
        sourceLabel->setObjectName("sourceLabel");

        controlPanelLayout->addWidget(sourceLabel);

        sourceComboBox = new QComboBox(layoutWidget);
        sourceComboBox->setObjectName("sourceComboBox");

        controlPanelLayout->addWidget(sourceComboBox);

        destLabel = new QLabel(layoutWidget);
        destLabel->setObjectName("destLabel");

        controlPanelLayout->addWidget(destLabel);

        destComboBox = new QComboBox(layoutWidget);
        destComboBox->setObjectName("destComboBox");

        controlPanelLayout->addWidget(destComboBox);

        findPathButton = new QPushButton(layoutWidget);
        findPathButton->setObjectName("findPathButton");

        controlPanelLayout->addWidget(findPathButton);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        controlPanelLayout->addWidget(line_2);

        resultLabel = new QLabel(layoutWidget);
        resultLabel->setObjectName("resultLabel");

        controlPanelLayout->addWidget(resultLabel);

        pathResultTextEdit = new QTextEdit(layoutWidget);
        pathResultTextEdit->setObjectName("pathResultTextEdit");
        pathResultTextEdit->setReadOnly(true);

        controlPanelLayout->addWidget(pathResultTextEdit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        controlPanelLayout->addItem(verticalSpacer);

        splitter->addWidget(layoutWidget);
        mapGraphicsView = new QGraphicsView(splitter);
        mapGraphicsView->setObjectName("mapGraphicsView");
        mapGraphicsView->setRenderHints(QPainter::Antialiasing|QPainter::TextAntialiasing);
        splitter->addWidget(mapGraphicsView);

        horizontalLayout->addWidget(splitter);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1200, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "FAST NUCES Karachi - Campus Navigation", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "Path Finder", nullptr));
        sourceLabel->setText(QCoreApplication::translate("MainWindow", "Source Location:", nullptr));
        destLabel->setText(QCoreApplication::translate("MainWindow", "Destination Location:", nullptr));
        findPathButton->setText(QCoreApplication::translate("MainWindow", "Find Shortest Path", nullptr));
        resultLabel->setText(QCoreApplication::translate("MainWindow", "Resulting Path:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
