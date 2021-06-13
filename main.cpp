#include "testgrap.h"
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QGraphicsScene>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QGraphicsScene scene;
    QGraphicsRectItem *gItem = new QGraphicsRectItem(0,0,100,100);
    scene.addItem(gItem);

    QGraphicsView view(&scene);

    view.resize(400,400);
    view.setForegroundBrush(QColor(55,155,200,100));
    view.setBackgroundBrush(QPixmap("cm.png"));
    view.show();
    view.setDragMode(QGraphicsView::ScrollHandDrag);
    view.setWindowTitle("Graphics");
    return a.exec();
}
