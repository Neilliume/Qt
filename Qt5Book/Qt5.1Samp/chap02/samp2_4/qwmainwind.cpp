#include "qwmainwind.h"
#include "ui_qwmainwind.h"

QWMainWind::QWMainWind(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QWMainWind)
{
    ui->setupUi(this);
    iniUI();
}

QWMainWind::~QWMainWind()
{
    delete ui;
}

void QWMainWind::iniUI()
{
    //状态栏上添加组件
    fLabCurFile = new QLabel;
    fLabCurFile->setMinimumWidth(150);
    fLabCurFile->setText("当前文件：");
    ui->statusBar->addWidget(fLabCurFile);  //添加到状态栏

    progressBar1 = new QProgressBar;
    progressBar1->setMaximumWidth(200);
    progressBar1->setMinimum(5);
    progressBar1->setMaximum(50);
    progressBar1->setValue(ui->txtEdit->font().pointSize());
    ui->statusBar->addWidget(progressBar1); //添加到状态栏

    //工具栏上添加组件
    spinFontSize = new QSpinBox;    //文字大小SpinBox
    spinFontSize->setMinimum(5);
    spinFontSize->setMaximum(50);
    spinFontSize->setValue(ui->txtEdit->font().pointSize());
    spinFontSize->setMinimumWidth(50);
    ui->mainToolBar->addWidget(new QLabel("字体大小"));
    ui->mainToolBar->addWidget(spinFontSize);   //SpinBox添加到工具栏

    ui->mainToolBar->addSeparator();    //分割条
    ui->mainToolBar->addWidget(new QLabel("字体"));
    comboFont = new QFontComboBox;
    comboFont->setMinimumWidth(150);
    ui->mainToolBar->addWidget(comboFont);  //添加到工具栏

    setCentralWidget(ui->txtEdit);
}

void QWMainWind::iniSignalSlots()
{
    connect(spinFontSize, SIGNAL(valueChanged(int)),
            this, SLOT(on_spinBoxFontSize_valueChanged(int)));
    connect(comboFont, SIGNAL(currentIndexChanged(const QString &)),
            this, SLOT(on_comboFont_currentIndexChanged(const QString &)));
}

void QWMainWind::on_actFontBold_triggered(bool checked)
{
    QTextCharFormat fmt;
    fmt = ui->txtEdit->currentCharFormat();
    if (checked)
        fmt.setFontWeight(QFont::Bold);
    else
        fmt.setFontWeight(QFont::Normal);
    ui->txtEdit->mergeCurrentCharFormat(fmt);
}

void QWMainWind::on_actFontItalic_triggered(bool checked)
{

}

void QWMainWind::on_txtEdit_copyAvailable(bool b)
{
    //跟新cut,copy,paste的enabled属性
    ui->actCut->setEnabled(b);
    ui->actCopy->setEnabled(b);
    ui->actPaste->setEnabled(b);
}

void QWMainWind::on_txtEdit_selectionChanged()
{
    //更新粗体、斜体和下划线3种action的checked属性
    QTextCharFormat fmt;
    fmt = ui->txtEdit->currentCharFormat();
    ui->actFontItalic->setChecked(fmt.fontItalic());
    ui->actFontBold->setChecked(fmt.font().bold());
    ui->actFontUnder->setChecked(fmt.fontUnderline());
}

void QWMainWind::on_spinBoxFontSize_valueChanged(int aFontSize)
{

}
