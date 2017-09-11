//#include <QCoreApplication>
#include <stdio.h>
#include <iostream>
#include "wd_string.h"
// #include "wd_c_function.h"

using namespace std;

void point(void);
void test(void);

int main(int argc, char* argv[])
{
//    QCoreApplication a(argc, argv);
//    return a.exec();
    printf("\n");
    // printf("Hello main method.\n");
    printf("The run result:\n");
    printf("---------------------------------------------------\n");
    point();
    printf("---------------------------------------------------\n");
    return 0;
}

void point(void)
{
    int i = 1;
    int* p;
    p = &i;
    cout << "i: 		" << i << endl;
    cout << "&i: 		" << &i << endl;
    // 如果一个变量存放的是内存地址,那么在这个变量前面加"*"后的操作
    // 就是读取这块内存地址处的值.
    cout << "*(&i): 		" << *(&i) << endl;
    cout << "p: 		" << p << endl;
    cout << "*(p): 		" << *(p) << endl;// *p = i;
    cout << "&p: 		" << &p << endl;
    int** addr = &p;
    // addr保存的是p的地址,那么*(addr)的操作就是读取p的地址处的值,
    // 而p的地址处的值是i的地址,那么*(addr)就是读取到了i的地址,
    // 所以*(*addr)的操作就是读取到了i的地址处的值.
    cout << "addr: 		" << addr << endl;
    cout << "*(&p): 		" << *(&p) << endl;
    cout << "*(addr): 	" << *(addr) << endl;// *addr = p;
    cout << "*(*addr): 	" << *(*addr) << endl;
    // 总结: 如果能得到一块内存,那么用"*"操作后就能读取到这块内存处的值.
}

void test(void)
{
    const int a = 100;
    int b = a;
    int c = 100;
    const int d = c;
    // const int* pa = &a;
    // int* pb = pa;
    // int* pa = &a;
    // const int* pb = pa;
}