#include "leveleditorwindow.h"
#include "ui_leveleditorwindow.h"

#include "levelview.h"

#include <QHBoxLayout>

LevelEditorWindow::LevelEditorWindow(QWidget *parent, Ctpk *testcrap) :
    QMainWindow(parent),
    ui(new Ui::LevelEditorWindow)
{
    ui->setupUi(this);

    crapshit = testcrap;

    levelView = new LevelView(this, crapshit->getTexture(0));
    /*levelView->setMinimumHeight(600);
    levelView->setMaximumWidth(800);*/
    QHBoxLayout* crappyshit = new QHBoxLayout(this);
    //this->setLayout(crappyshit);
    this->ui->widget->setLayout(crappyshit);
    crappyshit->addWidget(levelView);

    //this->ui->splitter->setStretchFactor(0, 0); // useless

    //this->ui->widget->layout()->addWidget(levelView);

}

LevelEditorWindow::~LevelEditorWindow()
{
    delete ui;
}