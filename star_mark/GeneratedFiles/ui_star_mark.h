/********************************************************************************
** Form generated from reading UI file 'star_mark.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAR_MARK_H
#define UI_STAR_MARK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
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
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Star_markClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *m_add;
    QPushButton *m_remove;
    QSpacerItem *horizontalSpacer;
    QLineEdit *m_ctlFilter;
    QTreeWidget *treeWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Star_markClass)
    {
        if (Star_markClass->objectName().isEmpty())
            Star_markClass->setObjectName(QString::fromUtf8("Star_markClass"));
        Star_markClass->resize(425, 353);
        centralWidget = new QWidget(Star_markClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_add = new QPushButton(centralWidget);
        m_add->setObjectName(QString::fromUtf8("m_add"));

        horizontalLayout->addWidget(m_add);

        m_remove = new QPushButton(centralWidget);
        m_remove->setObjectName(QString::fromUtf8("m_remove"));

        horizontalLayout->addWidget(m_remove);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_ctlFilter = new QLineEdit(centralWidget);
        m_ctlFilter->setObjectName(QString::fromUtf8("m_ctlFilter"));

        horizontalLayout->addWidget(m_ctlFilter);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        treeWidget = new QTreeWidget(centralWidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->header()->setDefaultSectionSize(80);

        gridLayout->addWidget(treeWidget, 1, 0, 1, 1);

        Star_markClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Star_markClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 425, 23));
        Star_markClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Star_markClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Star_markClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Star_markClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Star_markClass->setStatusBar(statusBar);

        retranslateUi(Star_markClass);

        QMetaObject::connectSlotsByName(Star_markClass);
    } // setupUi

    void retranslateUi(QMainWindow *Star_markClass)
    {
        Star_markClass->setWindowTitle(QApplication::translate("Star_markClass", "Star_mark", 0, QApplication::UnicodeUTF8));
        m_add->setText(QApplication::translate("Star_markClass", "addStar", 0, QApplication::UnicodeUTF8));
        m_remove->setText(QApplication::translate("Star_markClass", "removeStar", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("Star_markClass", "star_y", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(3, QApplication::translate("Star_markClass", "star_x", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("Star_markClass", "star_angle", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("Star_markClass", "id", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("Star_markClass", "order", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Star_markClass: public Ui_Star_markClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAR_MARK_H
