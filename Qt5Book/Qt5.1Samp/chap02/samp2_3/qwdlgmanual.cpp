#include "qwdlgmanual.h"

void QWDlgManual::iniUI()
{
    //创建Underline,Italic,Bold3个CheckBox,并水平布局
    chkBoxUnder = new QCheckBox(tr("Underline"));
    chkBoxItalic = new QCheckBox(tr("Italic"));
    chkBoxBold = new QCheckBox(tr("Bold"));
    QHBoxLayout *HLay1 = new QHBoxLayout;
    HLay1->addWidget(chkBoxUnder);
    HLay1->addWidget(chkBoxItalic);
    HLay1->addWidget(chkBoxBold);
    //创建Black,Red,Blue3个RadioButton,并水平布局
    rBtnBlack = new QRadioButton(tr("Black"));
    rBtnBlack->setChecked(true);
    rBtnRed = new QRadioButton(tr("Red"));
    rBtnBlue = new QRadioButton(tr("Blue"));
    QHBoxLayout *HLay2 = new QHBoxLayout;
    HLay2->addWidget(rBtnBlack);
    HLay2->addWidget(rBtnRed);
    HLay2->addWidget(rBtnBlue);
    //创建确定,取消,退出3个PushButton,并水平布局
    btnOK = new QPushButton(tr("确定"));
    btnCancel = new QPushButton(tr("取消"));
    btnClose = new QPushButton(tr("退出"));
    QHBoxLayout *HLay3 = new QHBoxLayout;
    HLay3->addWidget(btnOK);
    HLay3->addWidget(btnCancel);
    HLay3->addWidget(btnClose);
    //创建文本框,并设置初始字体
    txtEdit = new QPlainTextEdit;
    txtEdit->setPlainText("Hello world\n\nIt is my demo");
    QFont font = txtEdit->font();   //获取字体
    font.setPointSize(20);          //修改字体大小
    txtEdit->setFont(font);         //设置字体
    //创建垂直布局，并设置为主布局
    QVBoxLayout     *VLay = new QVBoxLayout;
    VLay->addLayout(HLay1);         //添加字体类型组
    VLay->addLayout(HLay2);         //添加字体颜色组
    VLay->addWidget(txtEdit);       //添加PlainTextEcit
    VLay->addLayout(HLay3);         //添加按键组
    setLayout(VLay);                //设置为窗体的主布局
}

void QWDlgManual::iniSignalSlots()
{
    //三个颜色
}

void QWDlgManual::on_chkBoxUnder(bool checked)
{
    QFont   font = txtEdit->font();
    font.setUnderline(checked);
    txtEdit->setFont(font);
}

QWDlgManual::QWDlgManual(QWidget *parent)
    : QDialog(parent)
{
    iniUI();            //界面创建与布局
    iniSignalSlots();   //信号与槽的关联
    setWindowTitle("Form created mannually");
}

QWDlgManual::~QWDlgManual()
{

}
