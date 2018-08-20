/********************************************************************************
** Form generated from reading UI file 'dlgnewstar.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGNEWSTAR_H
#define UI_DLGNEWSTAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dlgNewStar
{
public:
    QPushButton *m_ok;
    QPushButton *m_cancel;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *m_ctl_id;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *m_ctl_angle;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *m_ctl_x;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *m_ctl_y;

    void setupUi(QWidget *dlgNewStar)
    {
        if (dlgNewStar->objectName().isEmpty())
            dlgNewStar->setObjectName(QString::fromUtf8("dlgNewStar"));
        dlgNewStar->resize(256, 300);
        m_ok = new QPushButton(dlgNewStar);
        m_ok->setObjectName(QString::fromUtf8("m_ok"));
        m_ok->setGeometry(QRect(20, 170, 75, 23));
        m_cancel = new QPushButton(dlgNewStar);
        m_cancel->setObjectName(QString::fromUtf8("m_cancel"));
        m_cancel->setGeometry(QRect(120, 170, 75, 23));
        widget = new QWidget(dlgNewStar);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 241, 22));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_ctl_id = new QLineEdit(widget);
        m_ctl_id->setObjectName(QString::fromUtf8("m_ctl_id"));

        horizontalLayout->addWidget(m_ctl_id);

        widget1 = new QWidget(dlgNewStar);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 60, 241, 22));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        m_ctl_angle = new QLineEdit(widget1);
        m_ctl_angle->setObjectName(QString::fromUtf8("m_ctl_angle"));

        horizontalLayout_2->addWidget(m_ctl_angle);

        widget2 = new QWidget(dlgNewStar);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(10, 90, 241, 22));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        m_ctl_x = new QLineEdit(widget2);
        m_ctl_x->setObjectName(QString::fromUtf8("m_ctl_x"));

        horizontalLayout_3->addWidget(m_ctl_x);

        widget3 = new QWidget(dlgNewStar);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(10, 130, 241, 22));
        horizontalLayout_4 = new QHBoxLayout(widget3);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        m_ctl_y = new QLineEdit(widget3);
        m_ctl_y->setObjectName(QString::fromUtf8("m_ctl_y"));

        horizontalLayout_4->addWidget(m_ctl_y);

        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        m_ctl_id->raise();
        m_ctl_angle->raise();
        m_ctl_x->raise();
        m_ctl_y->raise();
        m_ok->raise();
        m_cancel->raise();
        m_ctl_angle->raise();

        retranslateUi(dlgNewStar);

        QMetaObject::connectSlotsByName(dlgNewStar);
    } // setupUi

    void retranslateUi(QWidget *dlgNewStar)
    {
        dlgNewStar->setWindowTitle(QApplication::translate("dlgNewStar", "dlgNewStar", 0, QApplication::UnicodeUTF8));
        m_ok->setText(QApplication::translate("dlgNewStar", "ok", 0, QApplication::UnicodeUTF8));
        m_cancel->setText(QApplication::translate("dlgNewStar", "cancel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("dlgNewStar", "id", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("dlgNewStar", "\346\230\237\346\240\207\350\247\222\345\272\246", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("dlgNewStar", "star_x", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("dlgNewStar", "star_y", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dlgNewStar: public Ui_dlgNewStar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGNEWSTAR_H
