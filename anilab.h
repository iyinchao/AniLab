#ifndef ANILAB_H
#define ANILAB_H

#include <QMainWindow>

namespace Ui {
class AniLab;
}

class AniLab : public QMainWindow
{
    Q_OBJECT

public:
    explicit AniLab(QWidget *parent = 0);
    ~AniLab();

private:
    Ui::AniLab *ui;
};

#endif // ANILAB_H
