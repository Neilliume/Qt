/********************************************************************************
** Form generated from reading UI file 'qwmainwind.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWMAINWIND_H
#define UI_QWMAINWIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWMainWind
{
public:
    QAction *actCut;
    QAction *actCopy;
    QAction *actPaste;
    QAction *actFontBold;
    QAction *actFontItalic;
    QAction *actFontUnder;
    QAction *actClose;
    QAction *actOpen;
    QAction *actClear;
    QAction *actFont;
    QAction *actNew;
    QAction *actToolbatLab;
    QWidget *centralWidget;
    QTextEdit *txtEdit;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QWMainWind)
    {
        if (QWMainWind->objectName().isEmpty())
            QWMainWind->setObjectName(QStringLiteral("QWMainWind"));
        QWMainWind->resize(531, 307);
        actCut = new QAction(QWMainWind);
        actCut->setObjectName(QStringLiteral("actCut"));
        QIcon icon;
        icon.addFile(QStringLiteral("images/cut.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actCut->setIcon(icon);
        actCopy = new QAction(QWMainWind);
        actCopy->setObjectName(QStringLiteral("actCopy"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("images/120.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actCopy->setIcon(icon1);
        actPaste = new QAction(QWMainWind);
        actPaste->setObjectName(QStringLiteral("actPaste"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("images/paste.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actPaste->setIcon(icon2);
        actFontBold = new QAction(QWMainWind);
        actFontBold->setObjectName(QStringLiteral("actFontBold"));
        actFontBold->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral("images/BLD.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actFontBold->setIcon(icon3);
        actFontItalic = new QAction(QWMainWind);
        actFontItalic->setObjectName(QStringLiteral("actFontItalic"));
        actFontItalic->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral("images/ITL.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actFontItalic->setIcon(icon4);
        actFontUnder = new QAction(QWMainWind);
        actFontUnder->setObjectName(QStringLiteral("actFontUnder"));
        actFontUnder->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QStringLiteral("images/WORDUNDR.BMP"), QSize(), QIcon::Normal, QIcon::Off);
        actFontUnder->setIcon(icon5);
        actClose = new QAction(QWMainWind);
        actClose->setObjectName(QStringLiteral("actClose"));
        QIcon icon6;
        icon6.addFile(QStringLiteral("images/exit.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actClose->setIcon(icon6);
        actOpen = new QAction(QWMainWind);
        actOpen->setObjectName(QStringLiteral("actOpen"));
        QIcon icon7;
        icon7.addFile(QStringLiteral("images/open3.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actOpen->setIcon(icon7);
        actClear = new QAction(QWMainWind);
        actClear->setObjectName(QStringLiteral("actClear"));
        QIcon icon8;
        icon8.addFile(QStringLiteral("images/103.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actClear->setIcon(icon8);
        actFont = new QAction(QWMainWind);
        actFont->setObjectName(QStringLiteral("actFont"));
        QIcon icon9;
        icon9.addFile(QStringLiteral("images/20.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actFont->setIcon(icon9);
        actNew = new QAction(QWMainWind);
        actNew->setObjectName(QStringLiteral("actNew"));
        QIcon icon10;
        icon10.addFile(QStringLiteral("images/new2.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actNew->setIcon(icon10);
        actToolbatLab = new QAction(QWMainWind);
        actToolbatLab->setObjectName(QStringLiteral("actToolbatLab"));
        actToolbatLab->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QStringLiteral("images/430.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actToolbatLab->setIcon(icon11);
        centralWidget = new QWidget(QWMainWind);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        txtEdit = new QTextEdit(centralWidget);
        txtEdit->setObjectName(QStringLiteral("txtEdit"));
        txtEdit->setGeometry(QRect(10, 10, 511, 201));
        QWMainWind->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QWMainWind);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 531, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        QWMainWind->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QWMainWind);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QWMainWind->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QWMainWind);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QWMainWind->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(actNew);
        menu->addAction(actOpen);
        menu->addSeparator();
        menu->addAction(actClose);
        menu_2->addAction(actCut);
        menu_2->addAction(actCopy);
        menu_2->addAction(actPaste);
        menu_2->addSeparator();
        menu_2->addAction(actClear);
        menu_3->addAction(actFontBold);
        menu_3->addAction(actFontItalic);
        menu_3->addAction(actFontUnder);
        menu_3->addSeparator();
        menu_3->addAction(actToolbatLab);
        mainToolBar->addAction(actNew);
        mainToolBar->addAction(actOpen);
        mainToolBar->addAction(actClear);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actCut);
        mainToolBar->addAction(actCopy);
        mainToolBar->addAction(actPaste);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actFontItalic);
        mainToolBar->addAction(actFontBold);
        mainToolBar->addAction(actFontUnder);
        mainToolBar->addSeparator();

        retranslateUi(QWMainWind);
        QObject::connect(actClose, SIGNAL(triggered()), QWMainWind, SLOT(close()));

        QMetaObject::connectSlotsByName(QWMainWind);
    } // setupUi

    void retranslateUi(QMainWindow *QWMainWind)
    {
        QWMainWind->setWindowTitle(QApplication::translate("QWMainWind", "QWMainWind", Q_NULLPTR));
        actCut->setText(QApplication::translate("QWMainWind", "\345\211\252\345\210\207", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCut->setToolTip(QApplication::translate("QWMainWind", "\345\211\252\345\210\207", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actCut->setShortcut(QApplication::translate("QWMainWind", "Ctrl+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actCopy->setText(QApplication::translate("QWMainWind", "\345\244\215\345\210\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actCopy->setToolTip(QApplication::translate("QWMainWind", "\345\244\215\345\210\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actCopy->setShortcut(QApplication::translate("QWMainWind", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actPaste->setText(QApplication::translate("QWMainWind", "\347\262\230\350\264\264", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actPaste->setToolTip(QApplication::translate("QWMainWind", "\347\262\230\350\264\264", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actPaste->setShortcut(QApplication::translate("QWMainWind", "Ctrl+V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actFontBold->setText(QApplication::translate("QWMainWind", "\347\262\227\344\275\223", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFontBold->setToolTip(QApplication::translate("QWMainWind", "\347\262\227\344\275\223", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actFontItalic->setText(QApplication::translate("QWMainWind", "\346\226\234\344\275\223", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFontItalic->setToolTip(QApplication::translate("QWMainWind", "\346\226\234\344\275\223", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actFontUnder->setText(QApplication::translate("QWMainWind", "\344\270\213\345\210\222\347\272\277", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFontUnder->setToolTip(QApplication::translate("QWMainWind", "\344\270\213\345\210\222\347\272\277", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actClose->setText(QApplication::translate("QWMainWind", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actClose->setToolTip(QApplication::translate("QWMainWind", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actOpen->setText(QApplication::translate("QWMainWind", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actOpen->setToolTip(QApplication::translate("QWMainWind", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actOpen->setShortcut(QApplication::translate("QWMainWind", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actClear->setText(QApplication::translate("QWMainWind", "\346\270\205\347\251\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actClear->setToolTip(QApplication::translate("QWMainWind", "\346\270\205\347\251\272\345\206\205\345\256\271", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actFont->setText(QApplication::translate("QWMainWind", "\345\255\227\344\275\223\350\256\276\347\275\256", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFont->setToolTip(QApplication::translate("QWMainWind", "\345\255\227\344\275\223\350\256\276\347\275\256", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actNew->setText(QApplication::translate("QWMainWind", "\346\226\260\345\273\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actNew->setToolTip(QApplication::translate("QWMainWind", "\346\226\260\345\273\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actNew->setShortcut(QApplication::translate("QWMainWind", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actToolbatLab->setText(QApplication::translate("QWMainWind", "\346\230\276\347\244\272\345\267\245\345\205\267\346\240\217\346\226\207\345\255\227\346\240\207\347\255\276", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actToolbatLab->setToolTip(QApplication::translate("QWMainWind", "\346\230\276\347\244\272\345\267\245\345\205\267\346\240\217\346\226\207\345\255\227\346\240\207\347\255\276", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        menu->setTitle(QApplication::translate("QWMainWind", "\346\226\207\344\273\266", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("QWMainWind", "\347\274\226\350\276\221", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("QWMainWind", "\346\240\274\345\274\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QWMainWind: public Ui_QWMainWind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWMAINWIND_H
