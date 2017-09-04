#include <stdio.h>
#include <string.h>
#include "wd_string.h"
#include "wd_struct.h"

/***
 void* memcpy(void* destination, const void* source, size_t num);
 */
void wd_memcpy2(void){
    char myname[] = "Pierre de fermat";
    printf("%zu\n", strlen (myname));
    printf("%d\n", sizeof (myname));
    // strlen(myname)不包括结束符，sizeof (myname)包括结束符
//    memcpy(person.name, myname, strlen(myname)+1);
    memcpy(person.name, myname, sizeof (myname));
    person.age = 46;
    printf("person: %s, %d\n", person.name, person.age);

    memcpy(&person_copy, &person, sizeof(person));

    printf("person_copy: %s, %d\n", person_copy.name, person_copy.age);
}

/***
 void* memmove(void* destination, const void* source, size_t num);
 */
void wd_memmove2(void){
    char str[] = "memmove can be very useful......";
    memmove(str+20, str+15, 11);
    puts(str);
}

/***
 const void* memchr(const void* ptr, int value, size_t num);
       void* memchr(      void* ptr, int value, size_t num);
 */
void wd_memchr2(void){
    char* pch;
    char str[] = "Example string";
    pch = (char*)memchr(str, 'p', strlen(str));
    if(pch != NULL){
        printf("'p' found at position %d.\n", pch-str+1);
    }else{
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
void wd_memcmp2(void){
    char buffer1[] = "DWgaOtP12df0";
    char buffer2[] = "DWGAOTP12DF0";
    int n;
    n = memcmp(buffer1, buffer2, sizeof(buffer1));
    if(n > 0){
        printf("'%s' is greater than '%s'.\n", buffer1, buffer2);
    }else if(n < 0){
        printf("'%s' is less than '%s'.\n", buffer1, buffer2);
    }else{
        printf("'%s' is the same as '%s'.\n", buffer1, buffer2);
    }
}

/***
 void* memset(void* ptr, int value, size_t num);
 Sets the first num bytes of the block of memory pointed by ptr to  the specified value(interpreted as an unsigned char)
 */
void wd_memset2(void){
    char str[] = "almost every programmer should know memset!";
    memset(str, '-', 6);
    puts(str);
}