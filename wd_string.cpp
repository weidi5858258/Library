#include <stdio.h>
#include <string.h>
#include "wd_string.h"
#include "wd_struct.h"

/***
 void* memcpy(void* destination, const void* source, size_t num);
 */
void wd_memcpy(void)
{
    char myname[] = "Pierre de fermat";
    printf("%zu\n", strlen (myname));
    printf("%d\n", sizeof (myname));
    // strlen(myname)不包括结束符，sizeof (myname)包括结束符
    //    memcpy(person.name, myname, strlen(myname)+1);
    memcpy(person.name, myname, sizeof (myname));
    person.age = 46;
    printf("person: %s, %d\n", person.name, person.age);
    memcpy(&person_copy, &person, sizeof(person));
    printf("person_copy: %s, %d\n",
           person_copy.name, person_copy.age);
}

/***
 void* memmove(void* destination, const void* source, size_t num);
 */
void wd_memmove(void)
{
    char str[] = "memmove can be very useful......";
    memmove(str + 20, str + 15, 11);
    puts(str);
}

/***
 const void* memchr(const void* ptr, int value, size_t num);
       void* memchr(      void* ptr, int value, size_t num);
 */
void wd_memchr(void)
{
    char* pch;
    char str[] = "Example string";
    pch = (char*)memchr(str, 'p', strlen(str));

    if (pch != NULL)
    {
        printf("'p' found at position %d.\n", pch - str + 1);
    }
    else
    {
        printf("'p' not found.\n");
    }
}

/***
 int memcmp(const void* ptr1, const void* ptr2, size_t num);
 Compares the first num bytes of the block of memory pointed by ptr1 to the first num bytes pointed by ptr2, returning zero if they all match or a value different form zero representing which is greater if they do not.
 Notice that, unlike strcmp, the function does not stop comparing after finding a null character.
 <0 the first byte that not match in both memory blocks has a lower value in ptr1 than in ptr2(if evaluated as unsigned char values)
 0 the contents of both memory blocks are equal
 >0 the first byte that does not match in both memory blocks has a greater value in ptr1 than in ptr2(if evaluated as unsigned char values)
 */
void wd_memcmp(void)
{
    char buffer1[] = "DWgaOtP12df0";
    char buffer2[] = "DWGAOTP12DF0";
    int n;
    n = memcmp(buffer1, buffer2, sizeof(buffer1));

    if (n > 0)
    {
        printf("'%s' is greater than '%s'.\n", buffer1, buffer2);
    }
    else if (n < 0)
    {
        printf("'%s' is less than '%s'.\n", buffer1, buffer2);
    }
    else
    {
        printf("'%s' is the same as '%s'.\n", buffer1, buffer2);
    }
}

/***
 void* memset(void* ptr, int value, size_t num);
 Sets the first num bytes of the block of memory pointed by ptr to  the specified value(interpreted as an unsigned char)
 */
void wd_memset(void)
{
    char str[] = "almost every programmer should know memset!";
    memset(str, '-', 6);
    puts(str);
}

/***
 char* strcat(char* destination, const char* source);
 */
void wd_strcat(void)
{
    char str[80];
    strcpy(str, "these ");
    strcpy(str, "strings ");
    strcpy(str, "are ");
    strcpy(str, "concatenated.");
    puts(str);
}

/***
 const char* strchr(const char* str, int character);
       char* strchr(      char* str, int character);
 */
void wd_strchr(void)
{
    char str[] = "This is a sample string.";
    char* pch;
    printf("Looking for the 's' character in \'%s\'...\n", str);
    // 在str这个字符串中找到字符‘s’后就返回找到后字符串
    pch = strchr(str, 's');

    if (pch == 0)
    {
        return;
    }

    // str: This is a sample string.
    // pch: s is a sample string.
    puts(pch);

    while (pch != NULL)
    {
        printf("pch = %d\n", pch);
        printf("str = %d\n", str);
        printf("found at %d\n", pch - str + 1);
        pch = strchr(pch + 1, 's');
    }
}

/***
 int strcmp(const char* str1, const char* str2);
 字符串比较，str1跟str2字母大小写都相同时返回0
 */
void wd_strcmp(void)
{
    char key[] = "apple";
    char buffer[80];

    do
    {
        printf("Guess my favorite fruit?\n");
        fflush(stdout);
        scanf("%79s", buffer);
    }
    while (strcmp(key, buffer) != 0);

    puts("Correct answer!");
}

/***
 int strcoll(const char* str1, const char* str2);
 */
void wd_strcoll(void)
{
    char key[] = "apple";
    char buffer[80];
    int result;

    do
    {
        printf("Guess my favorite fruit?\n");
        fflush(stdout);
        scanf("%79s", buffer);
        result = strcoll(key, buffer);
        printf("result = %d\n", result);
    }
    while (result != 0);

    puts("Correct answer!");
}

/***
 char* strcpy(char* destination, const char* source);
 */
void wd_strcpy(void)
{
    char str1[] = "Sample string";
    char str2[40];
    char str3[40];
    strcpy(str2, str1);
    strcpy(str3, "copy successful");
    printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
}

/***
 size_t strcspn(const char* str1, const char* str2);
 str1中的第一个字符在str2中出现，那么返回这个字符的位置，
 从“0”开始，如果没有出现，那么用str1中的第二个字符查找是否在str2
 中出现，依次类推。
 */
void wd_strcspn(void)
{
    char str[] = "fc9ba73";
    char keys[] = "d1234567890";
    int i;
    i = strcspn(str, keys);
    printf("The first number in str is at position %d.\n", i + 1);
}






























