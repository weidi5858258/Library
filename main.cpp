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
    int* p = 0;
    p = &i;
    cout << "i: 		" << i << endl;
    cout << "&i: 		" << &i << endl;
    /***
    如果一个变量存放的是内存地址,那么在这个变量前面加"*"后的操作
    就是读取这块内存地址处的值.
    */
    cout << "*(&i): 		" << *(&i) << endl;
    cout << "p: 		" << p << endl;
    cout << "*(p): 		" << *(p) << endl;// *p = i;
    cout << "&p: 		" << &p << endl;
    int** addr = &p;
    /***
    addr保存的是p的地址,那么*(addr)的操作就是读取p的地址处的值,
    而p的地址处的值是i的地址,那么*(addr)就是读取到了i的地址,
    所以*(*addr)的操作就是读取到了i的地址处的值.
    */
    cout << "addr: 		" << addr << endl;
    cout << "*(&p): 		" << *(&p) << endl;
    cout << "*(addr): 	" << *(addr) << endl;// *addr = p;
    cout << "*(*addr): 	" << *(*addr) << endl;
    /***
    总结:
    如果能得到一块内存,那么用"*"操作后就能读取到这块内存处的值.
    二级指针就是用来保存一个指针变量的指针.
    */
    // 下面是引用部分
    cout << endl;
    int a;
    int& ra = a;
    cout << "a = 		" << a << endl;
    cout << "ra = 		" << ra << endl;
    a = 100;
    cout << "a = 		" << a << endl;
    cout << "ra = 		" << ra << endl;
    /***
    引用变量的内存地址跟它相关联的普通变量的内存地址是一样的.
    */
    cout << "&a = 		" << &a << endl;
    cout << "&ra = 		" << &ra << endl;
    int* pa = 0;
    pa = &ra;
    cout << "pa = 		" << pa << endl;
    *pa = 101;
    cout << "a = 		" << a << endl;
    cout << "ra = 		" << ra << endl;
    cout << "*pa = 		" << *pa << endl;
    cout << endl;
    int b;
    int& rb = b;
    b = 999;
    cout << "&b = 		" << &b << endl;
    cout << "&rb = 		" << &rb << endl;
    int c = 888;
    rb = c;
    cout << "b = 		" << b << endl;
    cout << "c = 		" << c << endl;
    cout << "rb = 		" << rb << endl;
    cout << "&b = 		" << &b << endl;
    cout << "&c = 		" << &c << endl;
    cout << "&rb = 		" << &rb << endl;
    rb = 1;
    cout << "b = 		" << b << endl;
    cout << "c = 		" << c << endl;
    cout << "rb = 		" << rb << endl;
    cout << "&b = 		" << &b << endl;
    cout << "&c = 		" << &c << endl;
    cout << "&rb = 		" << &rb << endl;
    c = 2;
    cout << "b = 		" << b << endl;
    cout << "c = 		" << c << endl;
    cout << "rb = 		" << rb << endl;
    cout << "&b = 		" << &b << endl;
    cout << "&c = 		" << &c << endl;
    cout << "&rb = 		" << &rb << endl;
    /***
    总结:
    1.决定一个引用变量的内存地址是它第一次跟某个普通变量建立关系时
    的那个普通变量的内存地址,以后这个内存地址就不会再改变.
    2.等到引用变量第一次跟普通变量建立关系后,由于两者的内存地址相同,
    那么以后不管谁的值改变了,另一方也跟着改变.
    3.第一次创建引用变量时,必须对其进行初始化,不能先创建引用变量,
    然后在下一行进行赋值.
    */
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
    int e;
    cout << "e = " << e << endl;
}