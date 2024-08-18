#ifndef OPENNOTE_H
#define OPENNOTE_H

#include <QWidget>

namespace Ui {
class OpenNote;
}

class OpenNote : public QWidget
{
    Q_OBJECT

public:
    explicit OpenNote(QWidget *parent = nullptr);
    ~OpenNote();

private:
    Ui::OpenNote *ui;
};

#endif // OPENNOTE_H
