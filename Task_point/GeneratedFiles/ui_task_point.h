/********************************************************************************
** Form generated from reading UI file 'task_point.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_POINT_H
#define UI_TASK_POINT_H

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

class Ui_Task_pointClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *addPoint;
    QPushButton *removePoint;
    QSpacerItem *horizontalSpacer;
    QLineEdit *m_ctlFilter;
    QTreeWidget *treeWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Task_pointClass)
    {
        if (Task_pointClass->objectName().isEmpty())
            Task_pointClass->setObjectName(QString::fromUtf8("Task_pointClass"));
        Task_pointClass->resize(847, 681);
        centralWidget = new QWidget(Task_pointClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addPoint = new QPushButton(centralWidget);
        addPoint->setObjectName(QString::fromUtf8("addPoint"));

        horizontalLayout->addWidget(addPoint);

        removePoint = new QPushButton(centralWidget);
        removePoint->setObjectName(QString::fromUtf8("removePoint"));

        horizontalLayout->addWidget(removePoint);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_ctlFilter = new QLineEdit(centralWidget);
        m_ctlFilter->setObjectName(QString::fromUtf8("m_ctlFilter"));

        horizontalLayout->addWidget(m_ctlFilter);


        verticalLayout->addLayout(horizontalLayout);

        treeWidget = new QTreeWidget(centralWidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setColumnCount(6);
        treeWidget->header()->setDefaultSectionSize(150);

        verticalLayout->addWidget(treeWidget);

        Task_pointClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Task_pointClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 847, 26));
        Task_pointClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Task_pointClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Task_pointClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Task_pointClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Task_pointClass->setStatusBar(statusBar);

        retranslateUi(Task_pointClass);

        QMetaObject::connectSlotsByName(Task_pointClass);
    } // setupUi

    void retranslateUi(QMainWindow *Task_pointClass)
    {
        Task_pointClass->setWindowTitle(QApplication::translate("Task_pointClass", "Task_point", 0, QApplication::UnicodeUTF8));
        addPoint->setText(QApplication::translate("Task_pointClass", "addPoint", 0, QApplication::UnicodeUTF8));
        removePoint->setText(QApplication::translate("Task_pointClass", "removePoint", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(5, QApplication::translate("Task_pointClass", "\347\233\256\346\240\207\347\202\271y", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(4, QApplication::translate("Task_pointClass", "\347\233\256\346\240\207\347\202\271x", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(3, QApplication::translate("Task_pointClass", "\350\257\255\351\237\263\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("Task_pointClass", "\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("Task_pointClass", "\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("Task_pointClass", "id", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Task_pointClass: public Ui_Task_pointClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_POINT_H
