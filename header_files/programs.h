#ifndef PROGRAMS_H
#define PROGRAMS_H

#include <QStackedWidget>

namespace Ui {
class programs;
}

class programs : public QStackedWidget
{
    Q_OBJECT

public:
    explicit programs(QWidget *parent = nullptr);
    ~programs();

private:
    Ui::programs *ui;
};

#endif // PROGRAMS_H
