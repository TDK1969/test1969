#pragma warning (disable:4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct node {
    char* name;
    int month;
    int day;
    int match;
} student;

typedef struct spday {
    student share[180];
    int month;
    int day;
    int amount;
} birthday;

void namesort(student* r, int s, int t)
{
    int i = s, j = t;
    student tmp;
    if (s < t)
    {
        tmp = r[s];//1
        while (i != j)
        {
            while (j > i && (strlen(r[j].name)> strlen(tmp.name)|| (strlen(r[j].name) == strlen(tmp.name)&&strcmp(r[j].name,tmp.name))))
                j--;
            r[i] = r[j];//2
            while (i < j && (strlen(tmp.name) > strlen(r[i].name)||(strlen(r[i].name) == strlen(tmp.name)&&strcmp(tmp.name, r[i].name))))
                i++;
            r[j] = r[i];//3
        }
        r[i] = tmp;//4
        namesort(r, s, i - 1);
        namesort(r, i + 1, t);
    }
}
void daysort(birthday* r, int s, int t)
{
    int i = s, j = t;
    birthday tmp;
    if (s < t)
    {
        tmp = r[s];//1
        while (i != j)
        {
            while (j > i&& (r[j].month>=tmp.month&&r[j].day>=tmp.day))
                j--;
            r[i] = r[j];//2
            while (i < j && (tmp.month>=r[i].month&&tmp.day>=r[i].day))
                i++;
            r[j] = r[i];//3
        }
        r[i] = tmp;//4
        daysort(r, s, i - 1);
        daysort(r, i + 1, t);
    }
}
int main()
{
    student myclass[180];
    birthday happy[90];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        myclass[i].name = (char*)malloc(sizeof(char)*20);
        scanf("%s", myclass[i].name);
        scanf("%d%d", &myclass[i].month, &myclass[i].day);
        myclass[i].match = 0;
    }

    int count,group=0,has=0;

    for (int i = 0; i < n; i++)
    {
        if (myclass[i].match)
            continue;
        count = 0;
        happy[group].share[count++] = myclass[i];
        for (int x = i+1; x < n; x++)//
        {
            if (myclass[i].month == myclass[x].month && myclass[i].day == myclass[x].day)
            {
                has = 1;
                happy[group].share[count++] = myclass[x];
                myclass[i].match = myclass[x].match = 1;
            }
        }
        
        if (count == 1)
            continue;
        happy[group].amount = count;
        happy[group].month = myclass[i].month;
        happy[group].day = myclass[i].day;
        namesort(happy[group].share, 0, count-1);
        group++;
    }

    daysort(happy, 0, group - 1);
    for (int x = 0; x < group; x++)
    {
        printf("%d %d", happy[x].month, happy[x].day);
        for (int i = 0; i < happy[x].amount; i++)
        {
            printf(" %s", happy[x].share[i].name);
        }
        printf("\n");
    }
    if (has == 0)
        printf("None");

    return 0;

}