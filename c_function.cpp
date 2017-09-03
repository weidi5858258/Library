#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <sys/time.h>
#include <time.h>
#include <fcntl.h>
#include <math.h>
#include <grp.h>
#include <pwd.h>
#include <utmp.h>

#include "wd_c_function.h"

/***
 int isalnum(int c);
 测试字符是否为英文或数字，英文不区分大小写
 检查参数c是否为字母或阿拉伯数字，在标准c中相当于使用
 (isalpha(c)||isdigit(c))做测试。
 若参数c为字母或数字，则返回TRUE，否则返回NULL（0）。
 */
void wd_isalnum(void)
{
    char str[] = "123@#DFs.,;'}\":P[e?";
    int i;

    for (i = 0; str[i] != 0; ++i)
    {
        if (isalnum(str[i]))
        {
            printf("%c is alphanumeric character.\n", str[i]);
        }
    }
}

/***
 int isalpha(int c);
 测试字符是否为英文字母，不区分大小写
 检查参数以c是否为英文字母，在标准c中相当于使用
 (isupper(c)||islower(c))做测试。
 若参数c为英文字母，则返回TRUE，否则返回NULL（0）。
 */
void wd_isalpha(void)
{
    char str[] = "123@#DFs.,;'}\":P[e?";
    int i;

    for (i = 0; str[i] != 0; ++i)
    {
        if (isalpha(str[i]))
        {
            printf("%c is alphanumeric character.\n", str[i]);
        }
    }
}

/***
 int isascii(int c);
 测试字符是否为ASCII码字符
 检查参数c是否为ASCII码字符，也就是判断c的范围在0到127之间。
 若参数c为ASCII码字符，则返回TRUE，否则返回NULL（0）。
 */
void wd_isascii(void)
{
    int i;

    for (i = 125; i < 150; ++i)
    {
        if (isascii(i))
        {
            printf("%d is an ascii character: %c\n", i, i);
        }
    }
}

/***
 int iscntrl(int c);
 测试字符是否为ASCII码的控制字符
 检查参数c是否为ASCII控制码，也就是判断c的范围在0到30之间。
 若参数c为ASCII控制码，则返回TRUE，否则返回NULL（0）。
 */
void wd_iscntrl(void)
{
    int i;

    for (i = -20; i <= 100; ++i)
    {
        if (iscntrl(i))
        {
            printf("%d is an ascii control character: %c\n", i, i);
        }
    }
}

/***
 int isdigit(int c);
 检查参数c是否为阿拉伯数字0到9。
 若参数c为阿拉伯数字，则返回TRUE，否则返回NULL（0）。
 */
void wd_isdigit(void)
{
    char str[] = "123@#DFs.,;'}\":P[e?";
    int i;

    for (i = 0; str[i] != 0; ++i)
    {
        if (isdigit(str[i]))
        {
            printf("%c is an digit character\n", str[i]);
        }
    }
}

/***
 int isgraph(int c);
 测试字符是否为可打印字符
 检查参数c是否为可打印字符，若c所对应的ASCII码可打印，且非空格字符则TRUE。
 若参数c为可打印字符，则返回TRUE，否则返回NULL（0）。
 */
void wd_isgraph(void)
{
    char str[] = "123@ #DFs .,;'}\":P[e?";
    int i;

    for (i = 0; str[i] != 0; ++i)
    {
        if (isgraph(str[i]))
        {
            printf("str[%d] is printable character: %c\n", i, str[i]);
        }
    }
}

/***
 int isprint(int c);
 测试字符是否为可打印字符
 检查参数c是否为可打印字符，若c所对应的ASCII码可打印，
 其中包含空格字符，则返回TRUE。
 若参数c为可打印字符，则返回TRUE，否则返回NULL（0）。
 */
void wd_isprint(void)
{
    char str[] = "123@ #DFs .,;'}\":P[e?";
    int i;

    for (i = 0; str[i] != 0; ++i)
    {
        if (isprint(str[i]))
        {
            printf("str[%d] is printable character: %c\n", i, str[i]);
        }
    }
}

/***
 int isslower(int c);
 测试字符是否为小写字母。
 若参数c为小写字母，则返回TRUE，否则返回NULL（0）。
 */
void wd_islower(void)
{
    char str[] = "123@ #DFs .,;'}\":P[e?";
    int i;

    for (i = 0; str[i] != 0; ++i)
    {
        if (islower(str[i]))
        {
            printf("%c is a lower-case character\n", str[i]);
        }
    }
}

/***
 int isupper(int c);
 测试字符是否为大写字母
 检查参数c是否为大写英文字母。
 若参数c为大写英文字母，则返回TRUE，否则返回NULL（0）。
 */
void wd_isupper(void)
{
    char str[] = "123@ #DFs .,;'}\":P[e?";
    int i;

    for (i = 0; str[i] != 0; ++i)
    {
        if (isupper(str[i]))
        {
            printf("%c is a upper-case character\n", str[i]);
        }
    }
}

/***
 int isspace(int c);
 测试字符是否为空格字符
 检查参数c是否为空格字符，也就是判断是否为空格（‘’）、定位字符（‘\t’）、
 CR（‘\r’）、换行（‘\n’）、垂直定位字符（‘\v’）或翻页（‘\f’）的情况。
 若参数c为空格字符，则返回TRUE，否则返回NULL（0）。
 */
void wd_isspace(void)
{
    char str[] = "12\r3@ #    dFs .,\f;'}\":P[\ne?";
    int i;

    for (i = 0; str[i] != 0; ++i)
    {
        if (isspace(str[i]))
        {
            printf("str[%d] ：%c is a white-space character: %d\n", i, str[i], str[i]);
        }
    }
}

/***
 int ispunct(int c);
 测试字符是否为标点符号或特殊符号
 检查参数c是否为标点符号或特殊符号。返回true也就是
 代表参数c为非空格、非数字和非英文字母。
 若参数c为标点符号或特殊符号，则返回TRUE，否则返回NULL（0）。
 */
void wd_ispunct(void)
{
    char str[] = "12\r3@ #    dFs .,\f;'}\":P[\ne?";
    int i;
    puts(str);

    for (i = 0; str[i] != 0; ++i)
    {
        if (ispunct(str[i]))
        {
            printf("%c\n", str[i]);
        }
    }
}

/***
 int isxdigit(int c);
 测试字符是否为16进制数字
 检查参数c是否为16进制数字，只要c为下列其中一个情况则返回TRUE。
 16进制数字：01234567890ABCDEF
 若参数c为16进制数字，则返回TRUE，否则返回NULL（0）。
 */
void wd_isxdigit(void)
{
    char str[] = "12\r3@ #    dFs .,\f;'}\":P[\ne?";
    int i;
    puts(str);

    for (i = 0; str[i] != 0; ++i)
    {
        if (isxdigit(str[i]))
        {
            printf("%c is a hexadecimal digits\n", str[i]);
        }
    }
}

/***
 double atof(const char* nptr);
 将字符串转换成浮点型数
 atof()会扫描nptr字符串，跳过前面的空格字符，
 直到遇上数字或正负符号才开始做转换，而再遇到非数字
 或字符串结束时（‘\0’）才结束转换，并将结果返回。
 参数nptr字符串可包含正负号、小数点或E（e）来表示指数部分，
 如123.456或123e-2。
 返回转换后的浮点型数。
 atof()与使用strtod(nptr, (char**)NULL);结果相同。
 */
void wd_atof(void)
{
    // 将字符串a与字符串b转换成数字后想加
    char* a = "-100.23";
    char* b = "200e-2";
    float c;
    c = atof(a) + atof(b);
    printf("c = %.2f\n", c);
}

/***
 double strtod(const char* nptr, char** endptr);
 将字符串转换成浮点型数
 atof()会扫描nptr字符串，跳过前面的空格字符，
 直到遇上数字或正负符号才开始做转换，而再遇到非数字
 或字符串结束时（‘\0’）才结束转换，并将结果返回。
 若endptr不为NULL，则会将遇到不合条件而终止的nptr中的
 字符指针由endptr传回。参数nptr字符串可包含正负号、
 小数点或E（e）来表示指数部分。如123.456或123e-2。
 返回转换后的浮点型数。
 */
void wd_strtod(void)
{
    char a[] = "100000000000";
    char b[] = "100000000000";
    char c[] = "ffff";
    printf("a = %d\n", strtod(a, NULL));
    printf("b = %d\n", strtod(b, NULL));
    printf("c = %d\n", strtod(c, NULL));
}

/***
 int atoi(const char* nptr);
 将字符串转换成整型数
 atoi()会扫描nptr字符串，跳过前面的空格字符，
 直到遇上数字或正负符号才开始做转换，而再遇到非数字
 或字符串结束时（‘\0’）才结束转换，并将结果返回。
 返回转换后的整型数。
 atoi()与使用strtol(nptr, (char**)NULL, 10);结果相同。
 */
void wd_atoi(void)
{
    // 将字符串a与字符串b转换成数字后想加
    char a[] = "12hj1.10";
    char b[] = "456.50";
    int c;
    c = atoi(a) + atoi(b);
    printf("c = %d\n", c);
}

/***
 long atol(const char* nptr);
 将字符串转换成长整型数
 atol()会扫描nptr字符串，跳过前面的空格字符，
 直到遇上数字或正负符号才开始做转换，而再遇到非数字
 或字符串结束时（‘\0’）才结束转换，并将结果返回。
 返回转换后的长整型数。
 atol()与使用strtol(nptr, (char**)NULL, 10);结果相同。
 */
void wd_atol(void)
{
    // 将字符串a与字符串b转换成数字后想加
    char a[] = "10000000000";
    char b[] = "234567890";
    long c;
    c = atol(a) + atol(b);
    printf("c = %d\n", c);
}

/***
 long int strtol(const char* nptr, char** endptr, int base);
 将字符串转换成长整型数
 strtol()会将参数nptr字符串根据参数base来转换成长整型数。
 参数base范围从2至36，或0.参数base代表采用的进制方式，
 如base值为10则采用10进制，若base值为16则采用16进制等。
 当base值为0时则是采用10进制做转换，但遇到如‘0x’前置字符则会
 使用16进制做转换。一开始strtol()会扫描参数nptr字符串，跳过前面的空格字符，直到遇上数字或正负
 符号才开始做转换，再遇到非数字或字符串结束时('\0')结束转换，并将
 结果返回。若参数endptr不为NULL，则会将遇到不合条件而终止的nptr中的
 字符指针由endptr返回。
 返回转换后的长整型数，否则返回ERANGE并将错误代码存入errno中。
 ERANGE指定的转换字符串超出合法范围。
 */
void wd_strtol(void)
{
    // 将字符串a与字符串b转换成数字后想加
    char a[] = "1000000000";
    char b[] = "1000000000";
    char c[] = "ffff";
    printf("a = %d\n", strtol(a, NULL, 10));
    printf("b = %d\n", strtol(b, NULL, 2));
    printf("c = %d\n", strtol(c, NULL, 16));
}

/***
 unsigned long int strtoul(const char* nptr, char** endptr, int base);
 将字符串转换成长整型数
 strtoul()会将参数nptr字符串根据参数base来转换成无符号的长整型数。
 参数base范围从2至36，或0.参数base代表采用的进制方式，
 如base值为10则采用10进制，若base值为16则采用16进制等。
 当base值为0时则是采用10进制做转换，但遇到如‘0x’前置字符则会
 使用16进制做转换。一开始strtol()会扫描参数nptr字符串，跳过前面的空格字符，直到遇上数字或正负
 符号才开始做转换，再遇到非数字或字符串结束时('\0')结束转换，并将
 结果返回。若参数endptr不为NULL，则会将遇到不合条件而终止的nptr中的
 字符指针由endptr返回。
 返回转换后的长整型数，否则返回ERANGE并将错误代码存入errno中。
 ERANGE指定的转换字符串超出合法范围。
 */
void wd_strtoul(void)
{
    // 将字符串a与字符串b转换成数字后想加
    char a[] = "-1000000000";
    char b[] = "+1000000000";
    char c[] = "-ffff";
    char d[] = "+ffff";
    printf("a = %d\n", strtoul(a, NULL, 10));
    printf("b = %d\n", strtoul(b, NULL, 10));
    printf("c = %d\n", strtoul(c, NULL, 16));
    printf("d = %d\n", strtoul(d, NULL, 16));
}

/***
 char* gcvt(double number, size_t ndigits, char* buf);
 将浮点型数转换为字符串，取四舍五入
 gcvt()用来将参数number转换成ASCII码字符串，参数ndigits表示显示的
 位数，总共的位数，不包括负号。
 gcvt()与ecvt()和fcvt()不同的地方在于，gcvt()所转换后的字符串包含
 小数点或正负符号。若转换成功，转换后的字符串会放在参数buf指针
 所指的空间。
 返回一字符串指针，此地址即为buf指针。
 */
void wd_gcvt(void)
{
    double a = 123.4567890;
    double b = -1234.567890123;
    char* ptr;
    int decpt, sign;
    gcvt(a, 5, ptr);
    printf("a value = %s\n", ptr);
    gcvt(b, 6, ptr);
    printf("b value = %s\n", ptr);
}

/***
 int toascii(int c);
 将参数c转换成7位的unsigned char值，第八位则会被
 清除，此字符即会被转成ASCII码字符。
 将转换成功的ASCII码字符值返回。
 */
void wd_toascii(void)
{
    int a = 217;
    char b;
    printf("before toascii():a value = %d(%c)\n", a, a);
    b = toascii(a);
    printf("after toascii():a value = %d(%c)\n", b, b);
}

/***
 int tolower(int c);
 若参数c为大写字母则将该对应的小写字母返回。
 返回转换后的小写字母，若不须转换则将参数c值返回。
 */
void wd_tolower(void)
{
    char s[] = "aBcDeFgH12345;!#@%";;
    int i;
    printf("before tolower(): %s\n", s);

    for (i = 0; i < sizeof(s); ++i)
    {
        s[i] = tolower(s[i]);
    }

    printf("after  tolower(): %s\n", s);
}

/***
 int toupper(int c);
 若参数c为小写字母则将该对应的大写字母返回。
 返回转换后的大写字母，若不须转换则将参数c值返回。
 */
void wd_toupper(void)
{
    char s[] = "aBcDeFgH12345;!#@%";;
    int i;
    printf("before toupper(): %s\n", s);

    for (i = 0; i < sizeof(s); ++i)
    {
        s[i] = toupper(s[i]);
    }

    printf("after  toupper(): %s\n", s);
}

/***
 void* calloc(size_t nmemb, size_t size);
 calloc()用来配置nmemb个相邻的内存单位，每一单位的大小为size，
 并返回指向第一个元素的指针。这和使用下列的方式效果相同：
 malloc(nmemb* size);不过，在利用calloc()配置内存时会将内存
 内容初始化为0。
 若配置成功则返回一指针，失败则返回NULL。
 */
void wd_calloc(void)
{
    struct test
    {
        int a[10];
        char b[20];
    };
    struct test* ptr = (struct test*)calloc(sizeof(struct test), 10);

    if (ptr == NULL)
    {
        return;
    }

    free(ptr);
}

/***
 void* malloc(size_t size);
 malloc()用来配置内存空间，其大小由指定的size决定。
 若配置成功则返回一指针，失败则返回NULL。
 */
void wd_malloc(void)
{
    struct test
    {
        int a[10];
        char b[20];
    };
    struct test* ptr = (struct test*)malloc(sizeof(struct test));

    if (ptr == NULL)
    {
        return;
    }

    free(ptr);
}

/***
 void free(void* ptr);
 参数ptr为指向先前由malloc()、calloc()或realloc()所返回的内存指针。
 调用free()后ptr所指的内存空间便会被收回。假若参数ptr所指的内存空间已被收回
 或是未知的内存地址，则调用free()可能会有无法预期的情况发生。若参数ptr
 为NULL，则free()不会有任何作用。
 */
void wd_free(void)
{
    struct test
    {
        int a[10];
        char b[20];
    };
    struct test* ptr = (struct test*)calloc(sizeof(struct test), 10);

    if (ptr == NULL)
    {
        return;
    }

    free(ptr);
    ptr = NULL;
}

/***
 size_t getpagesize(void);
 返回一分页的大小，单位为字节（byte）。此为系统的分页大小，
 不一定会和硬件大小相同。
 内存分页大小。
 在Intel x86上其返回值应为4096bytes。
 */
void wd_getpagesize()
{
    printf("page size = %d\n", getpagesize());
}

/***
 void* mmap(void* start, size_t length, int port, int flags, int fd, off_t offsize);
 mmap()用来将某个文件内容映射到内存中，对该区域的存取即是直接
 对该文件内容的读写。
 参数start指向对应的内存起始地址，通常设为NULL，代表让系统
 自动选定地址，对应成功后该地址会返回。参数length代表将文件
 中多大的部分对应到内存。参数prot代表映射区域的保护方式，
 有下列组合：
 */
void wd_mmap()
{
    int fd;
    void* start;
    struct stat sb;
    fd = open("/etc/passwd", O_RDONLY);
    fstat(fd, &sb);
    start = mmap(NULL, sb.st_size, PROT_READ, MAP_PRIVATE, fd, 0);

    if (start == MAP_FAILED)
    {
        return;
    }

    printf("%s", start);
    munmap(start, sb.st_size);
    close(fd);
}

/***
 int munmap(void* start, size_t length);
 解除内存映射
 munmap()用来取消参数start所指的映射内存起始地址，
 参数length则是欲取消的内存大小。当进程结束或利用
 exec相关函数来执行其他程序时，映射内存会自动解除，
 但关闭对应的文件描述记事时不会解除映射。
 如果解除映射成功则返回0，否则返回-1，错误原因存于errno中。
 EINVAL参数start或length不合法。
 */
void wd_munmap(void)
{
    int fd;
    void* start;
    struct stat sb;
    fd = open("/etc/passwd", O_RDONLY);
    fstat(fd, &sb);
    start = mmap(NULL, sb.st_size, PROT_READ, MAP_PRIVATE, fd, 0);

    if (start == MAP_FAILED)
    {
        return;
    }

    printf("%s", start);
    munmap(start, sb.st_size);
    close(fd);
}

/***
 time_t time(time_t* timep);
 取得目前时间
 此函数会返回从公元1970年1月1日的UTC时间
 从0时0分0秒算起到现在所经过的秒数。
 如果timep并非空指针的话，此函数也会将返回值存到timep指针所指的内存。
 成功则返回秒数，失败返回-1，错误代码在于errno中。

 跟时间相关的函数有：
 time,asctime,ctime,ftime,gmtime,localtime,mktime,
 gettimeofday,settimeofday
 */
void wd_time(void)
{
    int seconds = time((time_t*)NULL);
    printf("%d\n", seconds);
}

/***
 char* asctime(const struct tm* timeptr);
 将时间和日期以字符串格式表示
 asctime()将参数timeptr所指的tm结构中的信息转换成真实世界所使用的
 时间日期表示方法，然后将结果以字符串形式返回。此函数已经由时区
 转换成当地时间，字符串格式为：“Wed Jun 30 21:49:08 1993”
 若再调用相关的时候日期函数，此字符串可能会被破坏。此函数与
 ctime不同处在于传入的参数是不同的结构。
 返回一字符串表示目前当地的时间日期。
 跟北京时间相比小8个小时。
 */
void wd_asctime(void)
{
    time_t timep;
    time(&timep);
    printf("%s", asctime(gmtime(&timep)));
}

/***
 char* ctime(const time_t* timeptr);
 将时间和日期以字符串格式表示
 ctime()将参数timeptr所指的time_t结构中的信息转换成真实世界所使用的
 时间日期表示方法，然后将结果以字符串形式返回。此函数已经由时区
 转换成当地时间，字符串格式为：“Wed Jun 30 21:49:08 1993”
 若再调用相关的时候日期函数，此字符串可能会被破坏。
 返回一字符串表示目前当地的时间日期。
 跟北京时间是一样的。
 */
void wd_ctime(void)
{
    time_t timep;
    time(&timep);
    printf("%s", ctime(&timep));
}

/***
 struct tm* gmtime(const time_t* timep);
 取得目前时间和日期
 gmtime()将参数timep所指的time_t结构中的信息转换成
 真实世界所使用的时间日期表示方法，然后将结果由结构体tm返回。
 结构体tm的定义为：
 struct tm{
    // 代表目前秒数，正常范围为0~59，但允许到61秒
    int tm_sec;
    // 代表目前分数，范围为0~59
    int tm_min;
    // 从午夜算起的时数，范围为0~23
    int tm_hour;
    // 代表目前月份的日数，范围为0~31
    int tm_mday;
    // 代表目前月份，从一月算起，范围为0~11
    int tm_mon;
    // 从1900年算起至今的年数
    int tm_year;
    // 一星期的日数，从星期一算起，范围为0~6
    int tm_wday;
    // 从今年1月1日算起至今的天数，范围为0~365
    int tm_yday;
    // 日光节约时间的旗杆
    int tm_isdst;
 }
 此函数返回的时间日期未经时区转换，而是UTC时间。
 */
void wd_gmtime(void)
{
    char* wday[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat",};
    time_t timep;
    time(&timep);
    struct tm* p;
    p = gmtime(&timep);
    // 年月日 星期 时分秒
    printf("%d/%d/%d %s %d:%d:%d\n",
           (1900 + p->tm_year), (1 + p->tm_mon), (p->tm_mday),
           wday[p->tm_wday], p->tm_hour, p->tm_min, p->tm_sec);
}

/***
 struct tm* localtime(const time_t* timep);
 取得当地目前的时间和日期
 localtime()将参数timep所指的time_t结构体中的信息转换成
 真实世界所使用的时间日期表示方法，然后将结果由结构体tm返回。
 此函数返回的时间日期已经转换成当地时区。
 返回结构体tm代表目前的当地时间。
 */
void wd_localtime(void)
{
    char* wday[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat",};
    time_t timep;
    time(&timep);
    struct tm* p;
    p = localtime(&timep);
    // 年月日 星期 时分秒
    printf("%d/%d/%d %s %d:%d:%d\n",
           (p->tm_year), (p->tm_mon), (p->tm_mday),
           wday[p->tm_wday], p->tm_hour, p->tm_min, p->tm_sec);
    // 还是需要用下面的方式才能得到正解的时间
    printf("%d/%d/%d %s %d:%d:%d\n",
           (1900 + p->tm_year), (1 + p->tm_mon), (p->tm_mday),
           wday[p->tm_wday], p->tm_hour, p->tm_min, p->tm_sec);
}

/***
 time_t mktime(struct tm* timeptr);
 将时间结构数据转换成经过的秒数
 mktime()用来将参数timeptr所指的tm结构数据转换成从
 公元1970年1月1日0时0分0秒算起至今的UTC时间所经过的
 秒数。
 返回经过的秒数。
 用time()取得时间（秒数），利用localtime()转换成
 struct tm再利用mktime()将struct tm转换成原来的秒数。
 下面两个结果是一样的
 */
void wd_mktime(void)
{
    time_t timep;
    time(&timep);
    printf("time(): %d\n", timep);
    struct tm* p;
    p = localtime(&timep);
    timep = mktime(p);
    printf("time()->localtime()->mktime(): %d\n", timep);
}

/***
 int gettimeofday(struct timeval* tv, struct timezone* tz);
 取得目前的时间
 gettimeofday()会把目前的时间由tv所指的结构返回，当地时区的信息则
 放到tz所指的结构中。timeval结构定义为：
 struct timeval{
    // 秒
    long tv_sec;
    // 微秒
    long tv_usec;
 };
 timezone结构定义为：
 struct timezone{
    // 和Greenwich时间差了多少分钟
    int tz_minuteswest;
    // 日光节约时间的状态
    int tz_dsttime;
 };
 上述两个结构都定义在/usr/include/sys/time.h。
 tz_dsttime所代表的状态如下：
 DST_NONE       // 不使用
 DST_USA        // 美国
 DST_AUST       // 澳洲
 DST_WET        // 西欧
 DST_MET        // 中欧
 DST_EET        // 东欧
 DST_CAN        // 加拿大
 DST_GB         // 大不列颠
 DST_RUM        // 罗马尼亚
 DST_TUR        // 土耳其
 DST_AUSTALT    // 澳洲（1986年以后）

 成功则返回0，失败则-1，错误代码存于errno。
 EFAULT指针tv和tz所指的内存空间超出存取权限。
 */
void wd_gettimeofday(void)
{
    struct timeval tv;
    struct timezone tz;
    gettimeofday(&tv, &tz);
    printf("tv_sec: %d\n", tv.tv_sec);
    printf("tv_usec: %d\n", tv.tv_usec);
    printf("tz_minuteswest: %d\n", tz.tz_minuteswest);
    printf("tz_dsttime: %d\n", tz.tz_dsttime);
}

/***
 int settimeofday(const struct timeval* tv, const struct timezone* tz);
 设置目前时间
 settimefoday()会把目前时间设成由tv所指的结构信息，
 当地时区信息则设成tz所指的结构。注意，只有root权限
 才能使用此函数修改时间。
 成功返回0，失败返回-1，错误代码在于errno。
 EPERM并非由root权限调用，settimeofday()权限不够。
 ELNVAL时区或某个数据是不正确的，无法正确设置时间。
 */
void wd_settimeofday(void)
{
}

/***
 int bcmp(const void* s1, const void* s2, int n);
 比较内存内容
 bcmp()用来比较s1和s2所指的内存区间前n个字节，
 若参数n为0，则返回0。
 若参数s1和s2所指的内存内容都完全相同则返回0，
 否则返回非零值。
 建议使用memcmp()取代。

 跟内存有关的函数有：

 */
void wd_bcmp(void)
{
}

/***
 int memcmp(const void* s1, const void* s2, size_t n);
 比较内存内容
 memcmp()用来比较s1和s2所指的内存区间前n个字节。字符串
 大小的比较是以ASCII码静止的顺序来决定，次顺序亦为字符
 的值。memcmp()首先将s1第一个字符值减去s2第一个字符的值，
 若差为0则再继续比较下个字符，若差值不为0则将差值返回。
 例如，字符串“Ac”和“ba”比较则会返回字符‘A’（65）和‘b’（98）
 的差值（-33）。
 若参数s1和s2所指的内存内容都完全相同则返回0值。s1若大于s2则返回
 大于0的值。s1若小于s2则返回小于0的值。
 */
void wd_memcmp(void)
{
    char* a = "aBcDeF";
    char* b = "AbCdEf";
    char* c = "aacdef";
    char* d = "aBcDeF";
    printf("memcmp(a,b): %d\n", memcmp((void*)a, (void*)b, 6));
    printf("memcmp(a,c): %d\n", memcmp((void*)a, (void*)c, 6));
    printf("memcmp(a,d): %d\n", memcmp((void*)a, (void*)d, 6));
}

/***
 int strcasecmp(const char* s1, const char* s2);
 忽略大小写比较字符串
 strcasecmp()用来比较参数s1和s2字符串，比较时会自动忽略大小写的差异。
 若参数s1和s2字符串相同则返回0，
 s1长度大于s2长度则返回大于0的值，
 s1长度小于s2长度则返回小于0的值。
 */
void wd_strcasecmp(void)
{
    char* a = "aBcDeF";
    char* b = "AbCdEf";

    if (!strcasecmp(a, b))
    {
        printf("%s = %s\n", a, b);
    }
}

/***
 int strcmp(const char* s1, const char* s2);
 比较字符串
 strcmp()用来比较参数s1和s2字符串。
 字符串大小的比较是以ASCII码表上的顺序来决定，此顺序亦为字符的值。
 strcmp()首先将s1第一个字符值减去s2第一个字符值，若差值为0则再继续
 比较下个字符，若差值不为0则将差值返回。
 若参数s1和s2字符串相同则返回0，
 s1大于s2则返回大于0的值，
 s1小于s2则返回小于0的值。
 */
void wd_strcmp(void)
{
    char* a = "aBcDeF";
    char* b = "AbCdEf";
    char* c = "aacdef";
    char* d = "aCdEdf";
    printf("strcmp(a,b): %d\n", strcmp(a, b));
    printf("strcmp(a,c): %d\n", strcmp(a, c));
    printf("strcmp(a,d): %d\n", strcmp(a, d));
}

/***
 int strncasecmp(const char* s1, const char* s2, size_t n);
 忽略大小写比较字符串
 strncasecmp()用来比较参数s1和s2字符串前n个字符，
 比较时会自动忽略大小写的差异。
 若参数s1和s2字符串相同则返回0，
 s1若大于s2则返回大于0的值，
 s1若小于s2则返回小于0的值。
 */
void wd_strncasecmp(void)
{
    char* a = "aBcDeF";
    char* b = "AbcDeF";

    if (!strncasecmp(a, b, sizeof(a)))
    {
        printf("%s = %s\n", a, b);
    }
}

/***
 int strcoll(const char* s1, const char* s2);
 采用目前区域的字符排列次序来比较字符串
 strcoll()会依环境变量LC_COLLATE所指定的文字排列
 次序来比较s1和s2字符串。
 若参数s1和s2字符串相同则返回0，
 s1大于s2则返回大于0的值，
 s1小于s2则返回小于0的值。
 若LC_COLLATE为“POSIX”或“C”，
 则strcoll()与strcmp()作用完全相同。
 */
void wd_strcoll(void)
{
}

/***
 void bcopy(const void* src, void* dest, int n);
 拷贝内存内容
 bcopy()与memcpy()一样都是用来拷贝src所指的内存内容
 前n个字节到dest所指的地址，不过参数src与dest在传给
 函数时是相反的位置。
 建议使用memcpy()取代。
 */
void wd_bcopy(void)
{
    char dest[30];
    char src[] = "string\0string\0string\0string\0string\0string";
    int i;
    bcopy(src, dest, 30);
    printf("bcopy(): ");

    for (i = 0; i < 30; ++i)
    {
        printf("%c", dest[i]);
    }

    memcpy(dest, src, 30);
    // string string string string st
    printf("\nmemcpy(): ");

    for (i = 0; i < 30; ++i)
    {
        printf("%c", dest[i]);
    }

    printf("\n");
    // 6
    printf("%d\n", strlen(dest));
    // 30
    printf("%d\n", sizeof(dest));
}

/***
 void memcpy(void* dest, const void* src, size_t n);
 拷贝内存内容
 memcpy()用来拷贝src所指的内存内容前n个字节到dest所指的
 内存地址上。与strcpy()不同的是，memcpy()会完整的复制
 n个字节，不会因为遇到字符串结束‘\0’而结束。
 返回指向dest的指针。
 指针src和dest所指的内存区域不可重叠。
 */
void wd_memcpy(void)
{
    char a[30] = "string(a)";
    char b[30] = "string\0string";
    int i;
    printf("a: %s\n", a);
    printf("b: %s\n", b);
    strcpy(a, b);
    printf("a: %s\n", a);
    printf("b: %s\n", b);
    printf("strcpy(): ");

    for (i = 0; i < 30; ++i)
    {
        printf("%c", a[i]);
    }

    memcpy(a, b, 30);
    printf("\nmemcpy(): ");

    for (i = 0; i < 30; ++i)
    {
        printf("%c", a[i]);
    }

    printf("\n");
}

/***
 char* strcpy(char* dest, const char* src);
 拷贝字符串
 strcpy()会将参数src字符串拷贝至参数dest所指的地址。
 返回参数dest的字符串起始地址。
 如果参数dest所指的内存空间不够大，可能会造成缓冲
 溢出(buffer Overflow)的错误情况，在编写程序时请特别留意，
 或者用strncpy()来取代。
 */
void wd_strcpy(void)
{
    char a[30] = "string(1)";
    char b[] = "string(2)string(3)";
    printf("before strcpy(): %s\n", a);
    printf("after strcpy(): %s\n", strcpy(a, b));
}

/***
 char* strncpy(char* dest, const char* src, size_t n);
 拷贝字符串
 strncpy()会将参数src字符串拷贝前n个字符至参数dest所指的地址。
 返回参数dest的字符串起始地址。
 */
void wd_strncpy(void)
{
    char a[30] = "string(1)";
    char b[] = "string(2)string (3)";
    printf("before strncpy(): %s\n", a);
    printf("after strncpy(): %s\n", strncpy(a, b, sizeof(b)));
}

/***
 void* memmove(void* dest, const void* src, size_t n);
 拷贝内存内容
 memmove()与memcpy()一样都是用来拷贝src所指的内存内容前n个
 字节到dest所指的地址上。不同的是，当src和dest所指的内存
 区域重叠时，memmove()仍然可以正确的处理，不过执行效率上会比
 使用memcpy()略慢些。
 返回指向dest的指针。
 指针src和dest所指的内存区域可以重叠。
 */
void wd_memmove(void)
{
}

/***
 void* memccpy(void* dest, const void* src, int c, size_t n);
 拷贝内存内容
 memccpy()用来拷贝src所指的内存内容前n个字节到dest所指的地址上。
 与memcpy()不同的是，memccpy()会在复制时检查参数c是否出现，若是
 则返回dest中值为c的下一个字节地址。
 返回指向dest中值为c的下一个字节指针。返回值为0表示在src所指内存
 前n个字节中没有值为c的字节。
 */
void wd_memccpy(void)
{
    char a[] = "string[a]";
    char b[] = "string(b)";
    memccpy(a, b, 'B', sizeof(b));
    printf("memccpy(): %s\n", a);
}

/***
 void bzero(void* s, int n);
 将一段内存内容全清为零
 bzero()会将参数s所指的内存区域前n个字节，全部设为零值。
 相当于调用memset((void*) s, 0, size_t n);
 建议使用memset()取代。
 */
void wd_bzero(void)
{
}

/***
 char* index(const char* s, int c);
 查找字符串中第一个出现的指定字符串
 index()用来找出参数s字符串中第一个出现的参数c地址，
 然后将该字符出现的地址返回。字符串结束字符（NULL）
 也视为字符串一部分。
 如果找到指定的字符则返回该字符所在地址，否则返回0。
 */
void wd_index(void)
{
    char* s = "0123456789012345678901234567890";
    char* p;
    p = index(s, '5');
    printf("%s\n", p);
}

/***
 char* rindex(const char* s, int c);
 查找字符串中最后一个出现的指定字符
 rindex()用来找出参数s字符串中最后一个出现的参数c地址，
 然后将该字符出现的地址返回。字符串结束字符（NULL）
 也视为字符串一部分。
 如果找到指定的字符则返回该字符所在地址，否则返回0。
 */
void wd_rindex(void)
{
    char* s = "0123456789012345678901234567890";
    char* p;
    p = rindex(s, '5');
    printf("%s\n", p);
}

/***
 void* memchr(const void* s, int c, size_t n);
 memchr()从头开始搜寻s所指的内存内容前n个字节，直到发现
 第一个值为c的字节，则返回指向该字节的指针。
 如果找到指定的字节则返回该字节的指针，否则返回0。
 */
void wd_memchr(void)
{
    char* s = "0123456789012345678901234567890";
    char* p;
    // 在字符串s中必须在前6个字节中找到‘5’这个字符才能不为NULL的结果，
    // 不然打不到就返回NULL，所以不要忘了判断是否为NULL的情况，
    // 不然程序会出现段错误。
    p = (char*)memchr(s, '5', 6);

    if (p == NULL)
    {
        return;
    }

    printf("%s\n", p);
}

/***
 char* strchr(const char* s, int c);
 查找字符串中第一个出现的指定字符串
 strchr()用来找出参数s字符串中第一个出现的参数c地址，
 然后将该字符出现的地址返回。
 如果找到指定的字符则返回该字符所在地址，否则返回0。
 */
void wd_strchr(void)
{
    char* s = "0123456789012345678901234567890";
    char* p;
    p = strchr(s, '5');
    printf("%s\n", p);
}

/***
 char* strrchr(const char* s, int n);
 查找字符串中最后出现的指定字符
 strrchr()用来找出参数s字符串中最后一个出现的参数c地址，
 然后将该字符出现的地址返回。
 如果找到指定的字符则返回该字符所在地址，否则返回0。
 */
void wd_strrchr(void)
{
    char* s = "0123456789012345678901234567890";
    char* p;
    p = strrchr(s, '5');
    printf("%s\n", p);
}

/***
 void* memset(void* s, int c, size_t n);
 将一段内存空间填入某值
 memset()会将参数s所指的内存区域前n个字节以参数c填入，
 然后返回指向s的指针。在编写程序时，若需要将某一数组
 作初始化，memset()会相当方便。
 返回指向s的指针。
 参数c虽声明为int，但必须是unsigned char,所以范围在
 0到255之间。
 */
void wd_memset(void)
{
    char s[30];
    memset(s, 'A', sizeof(s));
    s[30] = '\0';
    printf("%s\n", s);
}

/***
 1.磁盘达到85%时发送报警邮件
 2.发送邮件命令格式
 3.多个报警设置
 4.把分区的信息写入文件
 The /dev/svda1 has been used for more than 51%, please check.
 cat >email.txt <<EOF
 ------------------------------
 ------------------------------
 EOF
 echo -e "\033[32mI am testing.\033[0m" mail -s "good" weidi5858258@sina.com <email.txt
 echo -e "\033[32mI am testing.\033[0m" mail -s "good" weidi5858258@sina.com <ps.sh

 from_name="from@yanggang"
 from="yanggang@fruitsmobile.com"
 to="yanggang_2050@163.com"

 email_title="Test Mail"
 email_content="/home/barry/top800/test/output_email.html"
 email_subject="Top800_Games_Free_USA"

 echo -e "To: \"${email_title}\" <${to}>\nFrom: \"${from_name}\" <${from}>\nSubject: ${email_subject}\n\n`cat ${email_content}`" | /usr/sbin/sendmail -t
 */

/***
 char* strcat(char* dest, const char* src);
 连接两个字符串
 strcat()会将参数src字符串拷贝到参数dest所指的字符串末尾。
 第一个参数dest要有足够的空间来容纳要拷贝的字符串。
 返回参数dest的字符串起始地址。
 */
void wd_strcat(void)
{
    char a[30] = "string(1)";;
    char b[] = "string(2)";
    printf("before strcat(): %s\n", a);
    printf("after strcat(): %s\n", strcat(a, b));
}

/***
 char* strncat(char* dest, const char* src, size_t n);
 连接两个字符串
 strcat()会将参数src字符串拷贝n个字符到参数dest所指的字符串末尾。
 第一个参数dest要有足够的空间来容纳要拷贝的字符串。
 返回参数dest的字符串起始地址。
 */
void wd_strncat(void)
{
    char a[30] = "string(1)";;
    char b[] = "string(2) string(3)";
    printf("before strncat(): %s\n", a);
    printf("after strncat(): %s\n", strncat(a, b, sizeof(b)));
}

/***
 size_t strcspn(const char* s, const char* reject);
 返回字符串中连续不含指定字符串内容的字符数
 strcspn()从参数s字符串的开关计算连续的字符，而这些字符
 都完全不丰参数reject所指的字符串中。简单地说，若strcspn()
 返回的数值为n，则代表字符串s开头连续有n个字符都不含字符串
 reject内的字符。
 返回字符串s开头连续不含字符串reject内的字符数目。
 */
void wd_strcspn(void)
{
    char* str = "Linux was first developed for 386/486-based pcs.";
    // 计算到“ ”的出现，所以返回“Linux”的长度
    printf("%d\n", strcspn(str, " "));
    // 计算到出现“/”或“-”，所以返回到“6”的长度
    printf("%d\n", strcspn(str, "/-"));
    // 计算到出现数字字符为止，所以返回“3”出现前的长度
    printf("%d\n", strcspn(str, "1234567890"));
}

/***
 size_t strspn(const char* s, const char* accept);
 返回字符串中连续不含指定字符串内容的字符数
 strspn()从参数s字符串的开头计算连续的字符，而这些字符
 都完全是accept所指字符串的字符。简单的说，若strspn()
 返回的数值为n，则代表字符串s开头连续有n个字符都是
 属于字符串accept内的字符。
 返回字符串s开头连续包含字符串accept内的字符数目。
 */
void wd_strspn(void)
{
    char* str = "Linux was first developed for 386/486-based PCs";
    char* t1 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // 计算大小写字母。不包含“ ”，所以返回Linux的长度。
    printf("%d\n", strspn(str, t1));
}

/***
 char* strdup(const char* s);
 复制字符串
 strdup()会先用maolloc()配置与参数s字符串相同的空间大小，
 然后将参数s字符串的内容复制到该内存地址，然后把该地址返回。
 该地址最后可以利用free()来释放。
 返回一字符串指针，该指针指向复制后的新字符串地址。
 若返回NULL表示内存不足。
 */
void wd_strdup(void)
{
    char a[] = "strdup";
    char* b;
    b = strdup(a);
    printf("b[] = \"%s\"\n", b);
}

/***
 size_t strlen(const char* s);
 返回字符串长度
 strlen()用来计算指定的字符串s的长度，不包括结束字符“\0”。
 */
void wd_strlen(void)
{
    char* str = "wd_strlen";
    printf("str lenthg = %d\n", strlen(str));
}

/***
 char* strpbrk(const char* s, const char* accept);
 查找字符串中第一个出现的指定字符
 strpbrk()用来找出参数s字符串中最先出现在参数accept
 字符串中的任意字符。
 如果找到指定的字符则返回该字符所在地址，否则返回0。
 */
void wd_strpbrk(void)
{
    char* s = "0123456789012345678901234567890";
    char* p;
    // 1会最先在s字符串中找到
    p = strpbrk(s, "a1 839");
    printf("%s\n", p);
    // 3会最先在s字符串中找到
    p = strpbrk(s, "4398");
    printf("%s\n", p);
}

/***
 char* strstr(const char* haystack, const char* needle);
 在一字符串中查找指定的字符串
 strstr()会从字符串haystack中搜寻字符串needle，
 并将第一次出现的地址返回。
 返回指定字符串第一次出现的地址，否则返回0。
 */
void wd_strstr(void)
{
    char* s = "0123456789012345678901234567890";
    char* p;
    p = strstr(s, "902");

    // 必须要这样
    if (p == NULL)
    {
        return;
    }

    printf("%s\n", p);
}

/***
 char* strtok(char* s, const char* delim);
 分割字符串
 strtok()用来将字符串分割成一个个片段。参数s指向欲分割的字符串，
 参数delim则为分割字符串，当strtok()在参数s的字符串中发现参数
 delim的分割字符时则会将该字符改为\0字符。在第一次调用时，
 strtok()必需给予参数s字符串，往后的调用则将参数s设置成NULL。
 每次调用成功则返回下一个分割后的字符串指针。
 返回下一个分割后的字符串指针，如果已无从分割则返回NULL。
 */
void wd_strtok(void)
{
    char s[] = "ab-cd : ef;gh :i-jkl;;qrs-tu:vwx-y;z";
    char* delim = "-:";
    char* p;
    printf("%s\n", strtok(s, delim));

    while ((p = strtok(NULL, delim)))
    {
        printf("%s    ", p);
    }

    printf("\n");
}

/***
 int abs(int j);
 计算整型数的绝对值
 abs()用来计算参数j的绝对值，然后将结果返回。
 */
void wd_abs(void)
{
    int answer;
    answer = abs(-12);
    printf("|-12| = %d\n", answer);
}

/***
 double acos(double x);
 取反余弦函数数值
 acos()用来计算参数x的反余弦值，然后将结果返回。
 参数x范围为-1至1之间，超过此范围则会失败。
 返回0至PI之间的计算结果，单位为弧度，在函数中
 角度均以弧度来表示。
 EDOM参数x超出范围。
 使用GCC编译时请加入-lm。
 */
void wd_acos(void)
{
    double angle;
    angle = acos(0.5);
    printf("angle = %f\n", angle);
}

/***
 double asin(double x);
 取反正弦函数数值
 asin()用来计算参数x的反正弦值，然后将结果返回。
 参数x范围为-1到1之间，超过此范围则会失败。
 返回-PI/2到PI/2之间的计算结果。
 EDOM参数x超出范围。
 使用GCC编译时请加入-lm。
 */
void wd_asin(void)
{
    double angle;
    angle = asin(0.5);
    printf("angle = %f\n", angle);
}

/***
 double atan(double x);
 取反正切函数值
 atan()用来计算参数x的反正切值，然后将结果返回。
 EDOM参数x超出范围。
 使用GCC编译时请加入-lm。
 */
void wd_atan(void)
{
    double angle;
    angle = atan(1);
    printf("angle = %f\n", angle);
}

/***
 double atan2(double y, double x);
 取反正切函数值
 atan2()用来计算参数y/x的反正切值，然后将结果返回。
 EDOM参数x超出范围。
 使用GCC编译时请加入-lm。
 */
void wd_atan2(void)
{
    double angle;
    angle = atan2(1, 2);
    printf("angle = %f\n", angle);
}

/***
 double ceil(double x);
 取不小于参数的最小整型数
 ceil()会返回不小于参数x的最小整数值，结果以
 double形式返回。
 返回不小于参数x的最小整数值。
 使用GCC编译时请加入-lm。
 */
void wd_ceil(void)
{
    double value[] = {4.8, 1.12, -2.2, 0};
    int i;

    for (i = 0; value[i] != 0; ++i)
    {
        printf("%f => %f\n", value[i], ceil(value[i]));
    }
}

/***
 void endgrent(void);
 关闭组文件
 endgrent()用来关闭由getgrent()所打开的密码文件。
 */
void wd_endgrent(void)
{
}

/***
 void endpwent(void);
 关闭密码文件
 endpwent()用来关闭由getpwent()所打开的密码文件。
 */
void wd_endpwent(void)
{
}

/***
 void endutent(void);
 关闭utmp文件
 endutent()用来关闭由getutent()所打开的utmp文件。
 */
void wd_endutent(void)
{
}

/***
 struct group* fgetgrent(FILE* stream);
 从指定的文件读取组格式
 fgetgrent()会从参数stream指定的文件读取一行数据，
 然后以group结构将该数据返回。参数stream所指定的
 文件必须和/etc/group相同的格式。
 返回group结构数据，如果返回NULL则表示已无数据，
 或有错误发生。
 */
void wd_fgetgrent(void)
{
    struct group* data;
    FILE* stream;
    int i;
    stream = fopen("/etc/group", "r");

    while ((data = fgetgrent(stream)) != 0)
    {
        i = 0;
        printf("%s:%s:%d:",
               data->gr_name, data->gr_passwd, data->gr_gid);

        while (data->gr_mem[i])
        {
            printf("%s,", data->gr_mem[i++]);
        }

        printf("\n");
    }

    fclose(stream);
}

/***
 struct passwd* fgetpwent(FILE* stream);
 从指定的文件读取密码格式
 fgetpwent()会从参数stream指定的文件读取一行数据，
 然后以passwd结构将该数据返回。参数stream所指定的
 文件必须和/etc/passwd相同的格式。
 返回passwd结构数据，如果返回NULL则表示已无数据，
 或有错误发生。
 */
void wd_fgetpwent(void)
{
    struct passwd* user;
    FILE* stream;
    stream = fopen("/etc/passwd", "r");

    while ((user = fgetpwent(stream)) != 0)
    {
        printf("%s:%d:%d:%s:%s:%s\n",
               user->pw_name, user->pw_uid, user->pw_gid,
               user->pw_gecos, user->pw_dir, user->pw_shell);
    }
}

/***
 gid_t getegid(void);
 取得有效的组识别码
 getegid()用来取得执行目前进程有效组识别码。
 有效的组识别码用来决定进程执行时组的权限。
 返回有效和组识别码。
 */
void wd_getegid(void)
{
    // 0 当使用root身份执行程序时
    printf("egid is %d\n", getegid());
}

/***
 uid_t geteuid(void);
 取得有效的用户识别码
 geteuid()用来取得执行目前进程有效的用户识别码。
 有效的用户识别码用来决定进程执行的权限，
 借由此改变此值，进程可以获得额外的权限。
 倘若执行文件的setID位已被设置，该文件执行时，
 其进程的euid值便会设成该文件所有都的uid。
 例如，执行文件/usr/bin/passwd的权限为
 -r-s--x--x，其s位即为setID(SUID)位，
 而当任何用户在执行passwd时其有效的用户识别码会被
 设成passwd所有者的uid值，即root的uid值(0)。
 */
void wd_geteuid(void)
{
    // 0 当使用root身份执行程序时
    printf("euid is %d\n", geteuid());
}

/***
 gid_t getgid(void);
 取得真实的组识别码
 getgid()用来取得执行目前进程的组识别码。
 */
void wd_getgid(void)
{
    // 0 当使用root身份执行程序时
    printf("gid is %d\n", getgid());
}

/***
 uid_t getuid(void);
 取得真实的用户识别码
 getuid()用来取得执行目前进程的用户识别码。
 */
void wd_getuid(void)
{
    // 0 当使用root身份执行程序时
    printf("uid is %d\n", getuid());
}

/***
 struct group* getgrent(void);
 从组文件中取得账号的数据
 getgrent()用来从组文件（/etc/group）中读取一项数据，该数据以
 group结构返回。第一次调用时会取得第一项组数据，之后每调用一次
 就会返回下一项数据，直到已无任何数据时返回NULL。
 struct group{
    // 组名称
    char* gr_name;
    // 组密码
    char* gr_passwd;
    // 组识别码
    gid_t gr_gid;
    // 组成员账号
    char** gr_mem;
 }
 返回group结构数据，如果返回NULL则表示已无数据，或有错误发生。
 getgrent()在第一次调用时会打开组文件，读取数据完毕后可使用
 endgrent()来关闭该组文件。
 ENOMEM内存不足，无法配置group结构。
 */
void wd_getgrent(void)
{
    struct group* data;
    int i;

    while ((data = getgrent()) != 0)
    {
        i = 0;
        printf("%s:%s:%d:",
               data->gr_name, data->gr_passwd, data->gr_gid);

        while (data->gr_mem[i])
        {
            printf("%s,", data->gr_mem[i++]);
        }

        printf("\n");
    }
}

/***
 struct group* getgrgid(gid_t gid);
 从组文件中取得指定gid的数据
 getgrgid()用来依参数gid指定的组识别码逐一搜索组文件，
 找到时便将该组的数据以group结构返回。
 返回group结构数据，如果返回NULL则表示已无数据，或有错误发生。
 */
void wd_getgrgid(void)
{
    struct group* data;
    int i = 0;
    data = getgrgid(3);
    printf("%s:%s:%d:",
           data->gr_name, data->gr_passwd, data->gr_gid);

    while (data->gr_mem[i])
    {
        printf("%s,", data->gr_mem[i++]);
    }

    printf("\n");
}

/***
 struct group* getgrnam(const char* name);
 从组文件中取得指定组的数据
 getgrnam()用来逐一搜索参数name指定的组名称，
 找到时便将该组的数据以group结构返回。
 返回group结构数据，如果返回NULL则表示已无数据，或有错误发生。
 */
void wd_getgrnam(void)
{
    struct group* data;
    int i = 0;
    data = getgrnam("adm");
    printf("%s:%s:%d:",
           data->gr_name, data->gr_passwd, data->gr_gid);

    while (data->gr_mem[i])
    {
        printf("%s,", data->gr_mem[i++]);
    }

    printf("\n");
}

/***
 int getgroups(int size, gid_t list[]);
 取得组代码
 getgroups()用来取得目前用户所属的组代码。参数size为list()
 所能容纳的gid_t数目。如果参数size值为零，此函数仅会返回
 用户所属的组数。
 返回组识别码，如有错误则返回-1。
 EFAULT参数list数组地址不合法。
 EINVAL参数size值不足以容纳所有的组。
 */
void wd_getgroups(void)
{
    gid_t list[500];
    int x, i;
    x = getgroups(0, list);
    printf("%d\n", x);
    x = getgroups(x, list);
    printf("%d\n", x);

    for (i = 0; i < x; ++i)
    {
        printf("%d:%d\n", i, list[i]);
    }
}

/***
 int getpw(uid_t uid, char* buf);
 取得指定用户的密码文件数据
 getpw()会从/etc/passwd中查找符合参数uid所指定的用户账号数据，
 找不到相关数据就返回-1。所返回的buf字符串格式如下：
 账号：密码：用户识别码(uid)：组识别码(gid)：全名：根目录：shell
 返回0表示成功，有错误发生时返回-1。
 1.getpw()会有潜在的安全性问题，请尽量使用别的函数取代。
 2.使用shadow的系统已把用户密码抽出/etc/passwd，因此
 使用getpw()取得的密码将为“x”。
 */
void wd_getpw(void)
{
    char buffer[80];
    getpw(0, buffer);
    // root:x:0:0:root:/root:/bin/bash
    printf("%s\n", buffer);
}

/***
 struct passwd* getpwent(void);
 从密码文件中取得账号的数据
 getpwent()用来从密码文件（/etc/passwd）中读取一项用户数据，
 该用户的数据以passwd结构返回。第一次调用时会取得第一位用户数据，
 之后每调用一次就会返回下一项数据，直到已无任何数据时返回NULL。
 passwd结构定义如下：
 struct passwd{
    // 用户账号
    char* pw_name;
    // 用户密码
    char* pw_passwd;
    // 用户识别码
    uid_t pw_uid;
    // 组识别码
    gid_t pw_gid;
    // 用户全名
    char* pw_gecos;
    // 家目录
    char* pw_dir;
    // 所使用的shell路径
    char* pw_shell;
 }
 返回passwd结构数据，如果返回NULL则表示已无数据，或有错误发生。
 getpwent()在第一次调用时会打开密码文件，读取数据完毕后可
 使用endpwent()来关闭该密码文件。
 ENOMEM内存不足，无法配置passwd结构。
 */
void wd_getpwent(void)
{
    struct passwd* user;

    while ((user = getpwent()) != 0)
    {
        printf("%s:%d:%d:%s:%s:%s\n",
               user->pw_name, user->pw_uid, user->pw_gid,
               user->pw_gecos, user->pw_dir, user->pw_shell);
    }

    endpwent();
}

/***
 struct passwd* getpwnam(const char* name);
 从密码文件中取得指定账号的数据
 getpwnam()用来逐一搜索参数name指定的账号名称，找到时便将该
 用户的数据以passwd结构返回。
 返回passwd结构数据，如果返回NULL则表示已无数据，或有错误发生。
 */
void wd_getpwnam(void)
{
    struct passwd* user;
    user = getpwnam("root");
    printf("name: %s\n", user->pw_name);
    printf("uid: %d\n", user->pw_uid);
    printf("home: %s\n", user->pw_dir);
}

/***
 struct passwd* getpwuid(uid_t uid);
 从密码文件中取得指定uid的数据
 getpwuid()用来逐一搜索参数uid指定的用户识别码，找到时便将该
 用户的数据以passwd结构返回。
 返回passwd结构数据，如果返回NULL则表示已无，或有错误发生。
 */
void wd_getwuid(void)
{
    struct passwd* user;
    user = getpwuid(6);
    printf("name: %s\n", user->pw_name);
    printf("uid: %d\n", user->pw_uid);
    printf("home: %s\n", user->pw_dir);
}

/***
 struct utmp* getutent(void);
 从utmp文件中取得账号登录数据
 getutent()用来从utmp文件（/var/run/utmp）中读取一项登录数据，
 该数据以utmp结构返回。第一次调用时会取得第一位用户数据，
 之后每调用一次就会返回下一项数据，直到已无任何数据时返回NULL。
 utmp结构定义如下：
 struct utmp{
    // 登录类型
    short int ut_type;
    // login进程的pid
    pid_t ut_pid;
    // 登录装置名，省略了"/dev/"
    char ut_line[UT_LINESIZE];
    // Inittab ID
    char ut_id[4];
    // 登录账号
    char ut_user[UT_NAMESIZE];
    // 登录账号的远程主机名称
    char ut_host[UT_HOSTSIZE];
    // 当类型为DEAD_PROCESS时进程的结束状态
    struct exit_status ut_exit;
    // Session ID
    long int ut_session;
    // 时间记录
    struct timeval ut_tv;
    // 远程主机的网络地址
    int32_t ut_addr_v6[4];
    // 保留未使用
    char __unused[20];
 }
 ut_type有以下几种类型：
 EMPTY          此为空的记录
 RUN_LVL        记录系统run-level的改变
 ROOT_TIME      记录系统开机时间
 NEW_TIME       记录系统时间改变后的时间
 OLD_TINE       记录当改变系统时间时的时间
 INIT_PROCESS   记录一个由init衍生出来的进程
 LOGIN_PROCESS  记录login进程
 USER_PROCESS   记录一般进程
 DEAD_PROCESS   记录结束进程
 ACCOUNTING     目前尚未使用
 exit_status结构定义：
 struct exit_status{
    // 进程结束状态
    short int e_termination;
    // 进程退出状态
    short int e_exit;
 }
 UT_LINESIZE    32
 UT_NAMESIZE    32
 UT_HOSTSIZE    256
 返回utmp结构数据，如果返回NULL则表示已无数据，或有错误发生。
 getutent()在第一次调用时会打开utmp文件，读取数据
 完毕后可使用endutent()来关闭该utmp文件。
 */
void wd_getutent(void)
{
    struct utmp* u;

    while ((u = getutent()))
    {
        if (u->ut_type == USER_PROCESS)
        {
            printf("%d %s %s %s\n",
                   u->ut_type, u->ut_user, u->ut_line, u->ut_host);
        }
    }

    endutent();
}

/***
 struct utmp* getutid(struct utmp* ut);
 从utmp文件中查找特定的记录
 getutid()用来从目前utmp文件的读写位置逐一往后搜索参数ut指定的
 记录，如果ut->ut_type为RUN_LVL,BOOT_TIME,NEW_TIME,OLD_TIMEUT
 其中之一则查找与ut->ut_type相符的记录；
 若ut->ut_type为INIT_PROCESS,LOGIN_PROCESS,USER_PROCESS或
 DEAD_PROCESS其中之一，则查找ut->ut_id相符的记录。找到相符的
 记录便将该数据以utmp结构返回。
 返回utmp结构数据，如果返回NULL则表示已无数据，或有错误发生。
 */
void wd_getutid(void)
{
    struct utmp ut, *u;
    ut.ut_type = RUN_LVL;

    while ((u = getutid(&ut)))
    {
        printf("%d %s %s %s\n",
               u->ut_type, u->ut_user, u->ut_line, u->ut_host);
    }
}

/***
 struct utmp* getutline(struct utmp* ut);
 从utmp文件中查找特定的记录
 getutline()用来从目前utmp文件的读写位置逐一搜索ut_type为
 USER_PROCESS或LOGIN_PROCESS的记录，而且ut_line和ut->ut_line
 相符。找到相符的记录便将该数据以utmp结构返回。
 返回utmp结构数据，如果返回NULL则表示已无数据，或有错误发生。
 */
void wd_getutline(void)
{
    struct utmp ut, *u;
    strcpy(ut.ut_line, "pts/l");

    while ((u = getutline(&ut)))
    {
        printf("%d %s %s %s\n",
               u->ut_type, u->ut_user, u->ut_line, u->ut_host);
    }
}

/***
 int initgroups(const char* user, gid_t group);
 initgroups()
 */
void wd_initgroups(void)
{
    
}

/***
 void pututline(struct utmp* ut);
 pututline()
 */
void wd_pututline(void)
{
    
}

/***
 int seteuid(uid_t euid);
 seteuid()
 */
void wd_seteuid(void)
{
    
}

/***
 int setfsgid(uid_t fsgid);
 setfsgid()
 */
void wd_setfsgid(void)
{
    
}

/***
 int setfsuid(uid_t fsuid);
 setfsuid()
 */
void wd_setfsuid(void)
{
    
}

/***
 int setgid(gid_t gid);
 setgid()
 */
void wd_setgid(void)
{
    
}

/***
 void setgrent(void);
 setgrent()
 */
void wd_setgrent(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}

/***
 
 */
void wd_(void)
{
    
}
















































