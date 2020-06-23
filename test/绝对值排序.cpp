#pragma warning (disable:4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void absquicksort(int* r, int s, int t)
{
    int i = s, j = t;
    int tmp;
    if (s < t)
    {
        tmp = r[s];//1
        while (i != j)
        {
            while (j > i&& abs(r[j]) >= abs(tmp))
                j--;
            r[i] = r[j];//2
            while (i < j && abs(r[i]) <= abs(tmp))
                i++;
            r[j] = r[i];//3
        }
        r[i] = tmp;//4
        absquicksort(r, s, i - 1);
        absquicksort(r, i + 1, t);
    }
}
/*
int main()
{
    int n;
    scanf("%d", &n);
    int array[100];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    absquicksort(array, 0, n - 1);

    for (int i = n - 1; i>= 0; i--)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
*/