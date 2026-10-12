/*how to print char aaray and string by diff means*/
#include<stdio.h>
int main()
{
    char x[] = {'D', 'e', 'v', 'y', 'a', 'n', 's','h','\0'};  //in character array in C it automatically defines its size 
    char *Str = "Devyansh"; 

    printf("size of char array is %ld\n", sizeof(x));
    int i = 0;
    while(i < 8){
        printf("using loop %d  %c \n", i, x[i]);
        i++;
    }
    printf("using char x = %s\n", x);
    printf("using pointer string = %s\n", Str);
    return 0;
}