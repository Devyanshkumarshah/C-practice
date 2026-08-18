#include <string.h>
#include <stdio.h>

char non_repeating(char str[], int n)
{
    int freq[256] = {0};
    
    int i = 0;
    while(str[i] != '\0')
    {
        freq[str[i]]++;
        i++;
    }
    for(int i = 0; i < n; i++)
    {
        if(freq[str[i]] == 1)
        {
            return str[i];
        }
    }
}

int main()
{
    char str[] = "SWISS";
    int n = strlen(str);
    char result = non_repeating(str, n);
    printf("%c", result);

    return 0;
}
