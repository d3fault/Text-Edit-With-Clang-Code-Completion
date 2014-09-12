#include "texteditwithclangcodecompletion.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    TextEditWithClangCodeCompletion w;
    w.show();

    return a.exec();
}
