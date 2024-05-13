//C Program to find the sizes of Primitive Datatypes
//int,float,char,double,void,bool
#include<stdio.h>
#include<stdbool.h> //for bool datatype (Introduced in C99)
int main()
{
    int a;
    printf("size of int=%d\n",sizeof(a));
    printf("size of float=%d\n",sizeof(float));
    printf("size of char=%d\n",sizeof(char));
    printf("size of double=%d\n",sizeof(double));
    printf("size of void=%d\n",sizeof(void));
    printf("size of bool=%d",sizeof(bool));
    return 0;
}