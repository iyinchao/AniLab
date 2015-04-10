#include "anilab.h"
#include "ui_anilab.h"

AniLab::AniLab(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AniLab)
{
    ui->setupUi(this);
}

AniLab::~AniLab()
{
    delete ui;
}
