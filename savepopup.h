#ifndef SAVEPOPUP_H
#define SAVEPOPUP_H

#include <QMainWindow>

namespace Ui {
class SavePopUp;
}

class SavePopUp : public QMainWindow
{
    Q_OBJECT

public:
    explicit SavePopUp(QWidget *parent = nullptr);
    ~SavePopUp();
    void getTxtFromWin(std::string *noteTxt);


private:
    Ui::SavePopUp *ui;
    std::string *winTxt = new std::string;
    std::string title;
    void createNoteFile();

private slots:
    void donePressed();
};

#endif // SAVEPOPUP_H
