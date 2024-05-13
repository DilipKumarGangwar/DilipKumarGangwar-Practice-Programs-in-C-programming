//C Program to Check if CPU is little endian or Big Endian

#include<stdio.h>
int main()
{
    int a = 1;
    char x;
    char *p=(char *)&a;   //p will point to 1 byte data present at lowest address of the address range of data
    if(*p==1)
        printf("CPU is Little Endian");
    else
        printf("CPU is Big Endian");
    return 0;
}