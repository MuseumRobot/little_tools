/********************************************************************************
** Form generated from reading UI file 'dlgnewvoice.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGNEWVOICE_H
#define UI_DLGNEWVOICE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgNewVoice
{
public:
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *m_ctlName;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *m_ctl_short;
    QSplitter *splitter;
    QPushButton *m_ok;
    QPushButton *m_cancel;
    QTextEdit *m_ctl_content;

    void setupUi(QDialog *DlgNewVoice)
    {
        if (DlgNewVoice->objectName().isEmpty())
            DlgNewVoice->setObjectName(QString::fromUtf8("DlgNewVoice"));
        DlgNewVoice->resize(302, 322);
        label_3 = new QLabel(DlgNewVoice);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 60, 54, 16));
        widget = new QWidget(DlgNewVoice);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(9, 9, 211, 22));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_ctlName = new QLineEdit(widget);
        m_ctlName->setObjectName(QString::fromUtf8("m_ctlName"));

        horizontalLayout->addWidget(m_ctlName);

        widget1 = new QWidget(DlgNewVoice);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(9, 37, 211, 22));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        m_ctl_short = new QLineEdit(widget1);
        m_ctl_short->setObjectName(QString::fromUtf8("m_ctl_short"));

        horizontalLayout_2->addWidget(m_ctl_short);

        splitter = new QSplitter(DlgNewVoice);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(9, 288, 270, 23));
        splitter->setOrientation(Qt::Horizontal);
        m_ok = new QPushButton(splitter);
        m_ok->setObjectName(QString::fromUtf8("m_ok"));
        splitter->addWidget(m_ok);
        m_cancel = new QPushButton(splitter);
        m_cancel->setObjectName(QString::fromUtf8("m_cancel"));
        splitter->addWidget(m_cancel);
        m_ctl_content = new QTextEdit(DlgNewVoice);
        m_ctl_content->setObjectName(QString::fromUtf8("m_ctl_content"));
        m_ctl_content->setGeometry(QRect(10, 80, 256, 191));

        retranslateUi(DlgNewVoice);

        QMetaObject::connectSlotsByName(DlgNewVoice);
    } // setupUi

    void retranslateUi(QDialog *DlgNewVoice)
    {
        DlgNewVoice->setWindowTitle(QApplication::translate("DlgNewVoice", "DlgNewVoice", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DlgNewVoice", "\345\206\205\345\256\271", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DlgNewVoice", "\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DlgNewVoice", "\347\256\200\344\273\213", 0, QApplication::UnicodeUTF8));
        m_ok->setText(QApplication::translate("DlgNewVoice", "ok", 0, QApplication::UnicodeUTF8));
        m_cancel->setText(QApplication::translate("DlgNewVoice", "cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DlgNewVoice: public Ui_DlgNewVoice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGNEWVOICE_H
