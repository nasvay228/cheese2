#ifndef WIDGET_H
#define WIDGET_H

#include <QTimer>
#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    QTimer timer;

public slots:
    void move();
    void move1();
    void move2();
    void back();
    void back1();
    void back2();
};
#endif // WIDGET_H
