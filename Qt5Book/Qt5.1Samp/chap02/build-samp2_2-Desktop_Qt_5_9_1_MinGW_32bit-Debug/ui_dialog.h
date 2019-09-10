/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *chkBoxUnder;
    QCheckBox *chkBoxItalic;
    QCheckBox *chkBoxBold;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rBtnBlack;
    QRadioButton *rBtnRed;
    QRadioButton *rBtnBlue;
    QPlainTextEdit *txtEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOK;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnClose;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(393, 302);
        verticalLayout_3 = new QVBoxLayout(Dialog);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        chkBoxUnder = new QCheckBox(groupBox);
        chkBoxUnder->setObjectName(QStringLiteral("chkBoxUnder"));

        horizontalLayout_3->addWidget(chkBoxUnder);

        chkBoxItalic = new QCheckBox(groupBox);
        chkBoxItalic->setObjectName(QStringLiteral("chkBoxItalic"));

        horizontalLayout_3->addWidget(chkBoxItalic);

        chkBoxBold = new QCheckBox(groupBox);
        chkBoxBold->setObjectName(QStringLiteral("chkBoxBold"));

        horizontalLayout_3->addWidget(chkBoxBold);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Dialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        rBtnBlack = new QRadioButton(groupBox_2);
        rBtnBlack->setObjectName(QStringLiteral("rBtnBlack"));

        horizontalLayout_2->addWidget(rBtnBlack);

        rBtnRed = new QRadioButton(groupBox_2);
        rBtnRed->setObjectName(QStringLiteral("rBtnRed"));

        horizontalLayout_2->addWidget(rBtnRed);

        rBtnBlue = new QRadioButton(groupBox_2);
        rBtnBlue->setObjectName(QStringLiteral("rBtnBlue"));

        horizontalLayout_2->addWidget(rBtnBlue);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addWidget(groupBox_2);

        txtEdit = new QPlainTextEdit(Dialog);
        txtEdit->setObjectName(QStringLiteral("txtEdit"));
        QFont font;
        font.setPointSize(20);
        txtEdit->setFont(font);

        verticalLayout_3->addWidget(txtEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnOK = new QPushButton(Dialog);
        btnOK->setObjectName(QStringLiteral("btnOK"));

        horizontalLayout->addWidget(btnOK);

        btnCancel = new QPushButton(Dialog);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        horizontalLayout->addWidget(btnCancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btnClose = new QPushButton(Dialog);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        horizontalLayout->addWidget(btnClose);


        verticalLayout_3->addLayout(horizontalLayout);

        txtEdit->raise();
        groupBox->raise();
        groupBox_2->raise();

        retranslateUi(Dialog);
        QObject::connect(btnOK, SIGNAL(clicked()), Dialog, SLOT(accept()));
        QObject::connect(btnCancel, SIGNAL(clicked()), Dialog, SLOT(reject()));
        QObject::connect(btnClose, SIGNAL(clicked()), Dialog, SLOT(close()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog by Designer", Q_NULLPTR));
        groupBox->setTitle(QString());
        chkBoxUnder->setText(QApplication::translate("Dialog", "Underline", Q_NULLPTR));
        chkBoxItalic->setText(QApplication::translate("Dialog", "Italic", Q_NULLPTR));
        chkBoxBold->setText(QApplication::translate("Dialog", "Bold", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        rBtnBlack->setText(QApplication::translate("Dialog", "Black", Q_NULLPTR));
        rBtnRed->setText(QApplication::translate("Dialog", "Red", Q_NULLPTR));
        rBtnBlue->setText(QApplication::translate("Dialog", "Blue", Q_NULLPTR));
        txtEdit->setPlainText(QApplication::translate("Dialog", "Hello,world\n"
"It is my demo.", Q_NULLPTR));
        btnOK->setText(QApplication::translate("Dialog", "\347\241\256\345\256\232", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("Dialog", "\345\217\226\346\266\210", Q_NULLPTR));
        btnClose->setText(QApplication::translate("Dialog", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
