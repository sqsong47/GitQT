#include <QCoreApplication>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    cout << "QT git" << endl;


    // 新增一个branch
    cout << "Branch" << endl;

    // branch
    cout << "create Branch" << endl;

    return a.exec();
}
