/********************************************************************************
** Form generated from reading UI file 'voice.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOICE_H
#define UI_VOICE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VoiceClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *addYuliao;
    QPushButton *removeYuliao;
    QSpacerItem *horizontalSpacer;
    QLineEdit *m_ctlFilter;
    QTreeWidget *treeWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VoiceClass)
    {
        if (VoiceClass->objectName().isEmpty())
            VoiceClass->setObjectName(QString::fromUtf8("VoiceClass"));
        VoiceClass->resize(633, 391);
        centralWidget = new QWidget(VoiceClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addYuliao = new QPushButton(centralWidget);
        addYuliao->setObjectName(QString::fromUtf8("addYuliao"));

        horizontalLayout->addWidget(addYuliao);

        removeYuliao = new QPushButton(centralWidget);
        removeYuliao->setObjectName(QString::fromUtf8("removeYuliao"));

        horizontalLayout->addWidget(removeYuliao);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_ctlFilter = new QLineEdit(centralWidget);
        m_ctlFilter->setObjectName(QString::fromUtf8("m_ctlFilter"));

        horizontalLayout->addWidget(m_ctlFilter);


        verticalLayout->addLayout(horizontalLayout);

        treeWidget = new QTreeWidget(centralWidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->header()->setDefaultSectionSize(80);

        verticalLayout->addWidget(treeWidget);

        VoiceClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VoiceClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 633, 23));
        VoiceClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VoiceClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        VoiceClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(VoiceClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        VoiceClass->setStatusBar(statusBar);

        retranslateUi(VoiceClass);

        QMetaObject::connectSlotsByName(VoiceClass);
    } // setupUi

    void retranslateUi(QMainWindow *VoiceClass)
    {
        VoiceClass->setWindowTitle(QApplication::translate("VoiceClass", "Voice", 0, QApplication::UnicodeUTF8));
        addYuliao->setText(QApplication::translate("VoiceClass", "add", 0, QApplication::UnicodeUTF8));
        removeYuliao->setText(QApplication::translate("VoiceClass", "remove", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("VoiceClass", "\345\206\205\345\256\271", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("VoiceClass", "\347\256\200\344\273\213", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("VoiceClass", "name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("VoiceClass", "id", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VoiceClass: public Ui_VoiceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOICE_H
