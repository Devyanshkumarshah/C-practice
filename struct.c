#include<stdio.h>

struct complex_num               //this is like creating a blue print or template 
{
    float a ;                   //no memory allocated for a and b 
    float b ;                    //so inside a struct in C one cannot store value into a element of the field 
};

int main()
{
    struct complex_num devyansh;   //created a variable devyansh of data_type complex_num
    
    //struct complex_num devansh = {10 , 6};   *this another way to initialise a stuct variable like a and b 

    devyansh.a = 10;
    devyansh.b = 6;

    printf("sizeof(struct complex_num) = %ld\n", sizeof(struct complex_num));
    printf("a = %f, b = %f\n", devyansh.a, devyansh.b);


    return 0;
}