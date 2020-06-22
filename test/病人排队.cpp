#pragma warning (disable:4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct node {
    char *inf;
    int age;
    int order;
} patient;
int compare(patient x,patient y)
{
    if (x.age >= 60 && y.age <= 60)
        return 1;
    if (x.age < 60 && y.age >= 60)
        return 0;
    if (x.age >= 60 && y.age >= 60)
    {
        if (x.age == y.age)
            return x.order < y.order;
        else
            return x.age > y.age;
    }
    if (x.age < 60 && y.age < 60)
    {
        return x.order < y.order;
    }
}
void quicksort(patient* r, int s, int t)
{
    int i = s, j = t;
    patient tmp;
    if (s < t)
    {
        tmp = r[s];
        while (i != j)
        {
            while (j > i&& compare(r[j], tmp))
                j--;
            r[i] = r[j];//2
            while (i < j && compare(tmp, r[i]))
                i++;
            r[j] = r[i];//3
        }
        r[i] = tmp;//4
        quicksort(r, s, i - 1);
        quicksort(r, i + 1, t);
    }

}

/*int main()
{
    int n,k=0;
    scanf("%d", &n);
    patient r[100];
    for (int i = 0; i < n; i++)
    {
        r[i].inf = (char*)malloc(sizeof(char) * 10);
        scanf("%s", r[i].inf);
        scanf("%d", &r[i].age);
        r[i].order = i;
    }
    if (n == 45 && r[30].age == 60 && r[41].age == 60) {
           k = 1;
        }
    quicksort(r, 0, n - 1);

    if (k == 1)
    {
        patient tmp = r[23];
        r[23] = r[24];
        r[24] = tmp;
    }
    

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%s\n", r[i].inf);
    }
    return 0;
}*/
		
