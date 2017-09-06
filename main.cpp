//#include <QCoreApplication>
#include <stdio.h>
#include "wd_string.h"
// #include "wd_c_function.h"

void test(void);

int main(int argc, char* argv[])
{
//    QCoreApplication a(argc, argv);
//    return a.exec();
    printf("\n");
    // printf("Hello main method.\n");
    printf("The run result:\n");
    printf("---------------------------------------------------\n");
    test();
    printf("---------------------------------------------------\n");
    return 0;
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