#pragma warning (disable:4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*
int main()
{
    FILE* fp = fopen("spring.in", "r");
    int n;
    fscanf(fp, "%d", &n);

    int a[100001];
    for (int i = 0; i < n; i++)
    {
        fscanf(fp, "%d", &a[i]);
    }

    int times[100001] = { 0 };
    int max=0;

    for (int i = n - 1; i >= 0; i--)
    {
        int tmp = i,count=0;
        while (tmp < n)
        {
            tmp += a[tmp];
            count++;
            if (tmp < n && times[tmp])
            {
                count += times[tmp];
                break;
            }
        }
        times[i] = count;
        if (count > max)
            max = count;
    }

    FILE* fp2 = fopen("spring.out", "w");
    fprintf(fp2, "%d", max);
    fclose(fp2);

    return 0;


}*/