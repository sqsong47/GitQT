#include <QCoreApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    cout << "QT git" << endl;


    //    新增一个branch
    cout << "Branch" << endl;
    return a.exec();
}
