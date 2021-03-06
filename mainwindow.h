#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCloseEvent>
#include <QKeyEvent>

namespace Ui {
class MainWindow;
}

class QLineEdit;
class QDialog;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    void newFile();
    bool maybeSave();
    bool save();
    bool saveAs();
    bool saveFile(const QString &fileName);
    bool loadFile(const QString &fileName); // 加载文件

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_action_New_triggered();

    void on_action_Open_triggered();

    void on_action_Save_triggered();

    void on_action_Save_As_triggered();

    void on_action_Close_triggered();

    void on_action_Exit_triggered();

    void on_action_Undo_triggered();

    void on_action_Redo_triggered();

    void on_action_Cut_triggered();

    void on_action_Copy_triggered();

    void on_action_Paste_triggered();

    void on_action_Find_triggered();

    void on_textEdit_textChanged();

    void showFindText();

private:
    //为真表示文件没有保存过，为假表示文件已经被保存过了
    bool isUntitled;
    //保存当前文件路径
    QString curFile;
    Ui::MainWindow *ui;
    //For find dialog
    QLineEdit *findLineEdit;
    QDialog *findDlg;

protected:
    void closeEvent(QCloseEvent *event); // 关闭事件
    virtual void keyPressEvent(QKeyEvent *e);
    void findDogClose();
};

#endif // MAINWINDOW_H
