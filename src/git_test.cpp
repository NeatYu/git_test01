
#include "git_test.h"
#include <iostream>

using namespace std;
GitTest::GitTest()
{
    cout << "this is GitTest类构造函数" << endl;
    count_ = 0;
    ptr = new (cout * sizeof(int));
}


GitTest::~GitTest()
{
    cout_ = 0;
    cout << "这是GitTest 类的析构函数" << endl;
}

void GitTest::GitPrint()
{
    cout << "打印出想要打印的信息" << endl;
    return;
}
