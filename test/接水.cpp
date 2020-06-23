#pragma warning (disable:4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
typedef struct node {
    int order;
    int time;
} person;
void watersort(person* r, int s, int t)
{
    int i = s, j = t;
    person tmp;
    if (s < t)
    {
        tmp = r[s];//1
        while (i != j)
        {
            while (j > i&& (r[j].time > tmp.time||(r[j].time==tmp.time&&r[j].order>tmp.order)))
                j--;
            r[i] = r[j];//2
            while (i < j && (r[i].time < tmp.time||(r[i].time==tmp.time&&r[i].order<tmp.order)))
                i++;
            r[j] = r[i];//3
        }
        r[i] = tmp;//4
        watersort(r, s, i - 1);
        watersort(r, i + 1, t);
    }
}
/*
int main()
{
    int n;
    scanf("%d", &n);
    double sum=0;
    double av = 0;

    person* group = (person*)malloc(sizeof(person) * n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &group[i].time);
        group[i].order = i;
    }

    watersort(group, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", group[i].order);
        av += sum / n;
        sum += group[i].time;
    }
    printf("\n");
    printf("%.2lf", av);

    return 0;
}
*/
