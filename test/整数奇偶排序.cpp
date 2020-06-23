#pragma warning (disable:4996)
#include<stdio.h>
#include<stdlib.h>

void aquicksort(int* r, int s, int t)
{
    int i = s, j = t;
    int tmp;
    if (s < t)
    {
        tmp = r[s];
        while (i != j)
        {
            while (j > i&& r[j] >= tmp)
                j--;
            r[i] = r[j];
            while (i < j && r[i] <= tmp)
                i++;
            r[j] = r[i];
        }
        r[i] = tmp;
        aquicksort(r, s, i - 1);
        aquicksort(r, i + 1, t);
    }
}

/*int main()
{
    int input;
    int odd[10];
    int even[10];
    int OddCount = 0, EvenCount = 0;
    
    for (int i = 0; i < 10; i++)//
    {
        int tmp;
        scanf("%d", &tmp);
        if (tmp % 2 == 0)
            even[EvenCount++] = tmp;
        else
            odd[OddCount++] = tmp;
    }

    quicksort(odd, 0, OddCount - 1);
    quicksort(even, 0, EvenCount-1);

    for (int i = OddCount-1; i >=0; i--)
    {
        printf("%d ", odd[i]);
    }

    for (int i = 0; i < EvenCount; i++)
    {
        printf("%d ", even[i]);
    }

    return 0;
}*/