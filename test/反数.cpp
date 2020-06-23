#pragma warning (disable:4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*
int main()
{
    char numbers[12];
    scanf("%s", numbers);
    int start = 0;

    if (numbers[0] == '-') 
    {
        printf("-");
        start++;
    }
       
    int n = strlen(numbers)-1;
    int zerofirst = 1;
    for (int i = n; i >= start; i--)
    {
        if (zerofirst && numbers[i] == '0')
            continue;
        zerofirst = 0;
        printf("%c", numbers[i]);
    }
    if (zerofirst)
        printf("0");

    return 0;
}
*/