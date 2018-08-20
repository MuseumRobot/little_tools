/********************************************************************************
** Form generated from reading UI file 'dlgnewpoint.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGNEWPOINT_H
#define UI_DLGNEWPOINT_H

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
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgNewPoint
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *m_ctlId;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *m_ctlName;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *m_ctlKind;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *m_ctlCon_num;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *label_6;
    QLineEdit *m_ctldestination_x;
    QLabel *label_7;
    QLineEdit *m_ctldestination_y;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *m_ok;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *m_cancel;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *DlgNewPoint)
    {
        if (DlgNewPoint->objectName().isEmpty())
            DlgNewPoint->setObjectName(QString::fromUtf8("DlgNewPoint"));
        DlgNewPoint->resize(336, 397);
        verticalLayout = new QVBoxLayout(DlgNewPoint);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(DlgNewPoint);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        m_ctlId = new QLineEdit(DlgNewPoint);
        m_ctlId->setObjectName(QString::fromUtf8("m_ctlId"));

        horizontalLayout_6->addWidget(m_ctlId);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(DlgNewPoint);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        m_ctlName = new QLineEdit(DlgNewPoint);
        m_ctlName->setObjectName(QString::fromUtf8("m_ctlName"));

        horizontalLayout->addWidget(m_ctlName);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(DlgNewPoint);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        m_ctlKind = new QLineEdit(DlgNewPoint);
        m_ctlKind->setObjectName(QString::fromUtf8("m_ctlKind"));

        horizontalLayout_2->addWidget(m_ctlKind);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(DlgNewPoint);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        m_ctlCon_num = new QLineEdit(DlgNewPoint);
        m_ctlCon_num->setObjectName(QString::fromUtf8("m_ctlCon_num"));

        horizontalLayout_3->addWidget(m_ctlCon_num);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(DlgNewPoint);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        label_6 = new QLabel(DlgNewPoint);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        m_ctldestination_x = new QLineEdit(DlgNewPoint);
        m_ctldestination_x->setObjectName(QString::fromUtf8("m_ctldestination_x"));

        horizontalLayout_4->addWidget(m_ctldestination_x);

        label_7 = new QLabel(DlgNewPoint);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);

        m_ctldestination_y = new QLineEdit(DlgNewPoint);
        m_ctldestination_y->setObjectName(QString::fromUtf8("m_ctldestination_y"));

        horizontalLayout_4->addWidget(m_ctldestination_y);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        m_ok = new QPushButton(DlgNewPoint);
        m_ok->setObjectName(QString::fromUtf8("m_ok"));

        horizontalLayout_5->addWidget(m_ok);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        m_cancel = new QPushButton(DlgNewPoint);
        m_cancel->setObjectName(QString::fromUtf8("m_cancel"));

        horizontalLayout_5->addWidget(m_cancel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_5);

        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        m_ctlName->raise();
        m_ctlKind->raise();
        m_ctlCon_num->raise();
        m_ctldestination_x->raise();
        m_ok->raise();
        m_ctlKind->raise();
        label_5->raise();
        m_ctlId->raise();
        m_ctldestination_y->raise();
        label_6->raise();
        label_7->raise();

        retranslateUi(DlgNewPoint);

        QMetaObject::connectSlotsByName(DlgNewPoint);
    } // setupUi

    void retranslateUi(QWidget *DlgNewPoint)
    {
        DlgNewPoint->setWindowTitle(QApplication::translate("DlgNewPoint", "\346\267\273\345\212\240\346\226\260\347\232\204\347\202\271", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("DlgNewPoint", "\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DlgNewPoint", "\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DlgNewPoint", "\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DlgNewPoint", "\350\257\255\351\237\263\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("DlgNewPoint", "\347\233\256\346\240\207\347\202\271", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("DlgNewPoint", "x", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("DlgNewPoint", "y", 0, QApplication::UnicodeUTF8));
        m_ok->setText(QApplication::translate("DlgNewPoint", "ok", 0, QApplication::UnicodeUTF8));
        m_cancel->setText(QApplication::translate("DlgNewPoint", "cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DlgNewPoint: public Ui_DlgNewPoint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGNEWPOINT_H
