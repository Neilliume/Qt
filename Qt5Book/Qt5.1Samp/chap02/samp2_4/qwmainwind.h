#ifndef QWMAINWIND_H
#define QWMAINWIND_H

#include <QMainWindow>
#include <QLabel>
#include <QProgressBar>
#include <QSpinBox>
#include <QFontComboBox>
#include <QTextCharFormat>

namespace Ui {
class QWMainWind;
}

class QWMainWind : public QMainWindow
{
    Q_OBJECT

public:
    explicit QWMainWind(QWidget *parent = 0);
    ~QWMainWind();

private slots:
    void on_actFontBold_triggered(bool checked);

    void on_actFontItalic_triggered(bool checked);

    void on_txtEdit_copyAvailable(bool b);

    void on_txtEdit_selectionChanged();

    void on_spinBoxFontSize_valueChanged(int aFontSize);    //改变字体大小
    void on_comboFont_currentIndexChanged(const QString &arg1); //选择字体

private:
    Ui::QWMainWind *ui;
    QLabel          *fLabCurFile;   //状态栏显示当前文件的label
    QProgressBar    *progressBar1;  //状态栏上的进度条
    QSpinBox        *spinFontSize;  //字体大小spinBox
    QFontComboBox   *comboFont;     //字体名称comboBox
    void    iniUI();                //代码实现的UI初始化
    void    iniSignalSlots();       //关联信号和槽
};

#endif // QWMAINWIND_H
