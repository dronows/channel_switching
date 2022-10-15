#include "channel_switching.h"
#include <QApplication>


int main(int argc, char* argv[])
{
  QApplication a(argc, argv);
  Switch swith (nullptr);
  swith.resize(240, 680);
  swith.show();
  return a.exec();
}
#include <main.moc>