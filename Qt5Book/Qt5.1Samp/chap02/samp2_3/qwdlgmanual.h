#ifndef QWDLGMANUAL_H
#define QWDLGMANUAL_H

#include <QDialog>
#include <QCheckBox>
#include <QRadioButton>
#include <QPlainTextEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

class QWDlgManual : public QDialog
{
    Q_OBJECT

private:
    QCheckBox       *chkBoxUnder;
    QCheckBox       *chkBoxItalic;
    QCheckBox       *chkBoxBold;
    QRadioButton    *rBtnBlack;
    QRadioButton    *rBtnRed;
    QRadioButton    *rBtnBlue;
    QPlainTextEdit  *txtEdit;
    QPushButton     *btnOK;
    QPushButton     *btnCancel;
    QPushButton     *btnClose;
    void iniUI();           //UI创建与初始化
    void iniSignalSlots();  //初始化信号与槽的链接

private slots:
    void on_chkBoxUnder(bool checked);  //Underline的槽函数
    void on_chkBoxItalic(bool checked); //Italic的槽函数
    void on_chkBoxBold(bool checked);   //Bold的槽函数
    void setTextFontColor();            //设置字体颜色

public:
    QWDlgManual(QWidget *parent = 0);
    ~QWDlgManual();
};

#endif // QWDLGMANUAL_H
