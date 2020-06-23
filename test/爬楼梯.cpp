//why it works?
#pragma warning (disable:4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 10000000
#define mod 100007


int a[10101];
/*
int main()
{
    FILE* pf = fopen("stairs.in", "r");
    int n;
    fscanf(pf, "%d", &n);

    fclose(pf);

    a[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        a[i] = 0;
        for (int j = i - 1; j >= 0; j -= 2)
        {
            a[i] += a[j];
            a[i] %= mod;
        }
    }

    FILE* fp = fopen("stairs.out", "w");

    fprintf(fp, "%d", a[n]);

    fclose(fp);

    return 0;
}
*/