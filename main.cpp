//#include <QCoreApplication>
#include <stdio.h>
#include "wd_string.h"
#include "wd_c_function.h"

int main(int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);
//    return a.exec();

    printf("\n");
    // printf("Hello main method.\n");
    printf("The run result:\n");
    printf("---------------------------------------------------\n");

    wd_getutline();

    printf("---------------------------------------------------\n");
    return 0;
}
