#include "testgrap.h"
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QMessageBox>

testGrap::testGrap(QWidget *parent)
    : QWidget(parent)
{
    QGraphicsScene scene;
    QGraphicsRectItem *gItem = new QGraphicsRectItem(0,0,100,100);
    scene.addItem(gItem);

    QGraphicsView view(&scene);

    view.setForegroundBrush(QColor(255,38,91));
    view.resize(400,400);
    //view.show();
    setWindowTitle("主窗口");
    QMessageBox::information(this,"提示","测试主窗体");
}

testGrap::~testGrap()
{
}

