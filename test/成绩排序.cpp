#pragma warning (disable:4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct node {
    char name[25];
    int score;
} student;

int n;
student** input(void)
{
    scanf("%d", &n);
    student** our = (student**)malloc(sizeof(student)*n);
    for (int i = 0; i < n; i++)
    {
        student* tmp = (student*)malloc(sizeof(student));
        scanf("%s", tmp->name);
        scanf("%d", &tmp->score);
        our[i] = tmp;
    }
    return our;
}
int compare(student* x,student *y)
{
    return x->score > y->score || (x->score == y->score) && (strcmp(x->name, y->name)<=0);
}
void stucpy(student* des, student* sou)
{
    des->score = sou->score;
    strcpy(des->name, sou->name);
}
void insertsort(student** our,int s,int t)
{
    int i=s, j=t;
    student* tmp = (student*)malloc(sizeof(student));
    if (s < t)
    {
        stucpy(tmp, our[s]);
        while (i != j)
        {
            while (j > i&& compare(our[j], tmp))
                j--;
            stucpy(our[i], our[j]);
            while (i < j && compare(tmp, our[i]))
                i++;
            stucpy(our[j], our[i]);
        }
        stucpy(our[i], tmp);
        insertsort(our, s, i - 1);
        insertsort(our, i + 1, t);
    }
}
/*int main()
{
    student** our = input();
    insertsort(our,0,n-1);
    for (int i = n-1; i >= 0; i--)
    {
        printf("%s", our[i]->name);
        printf(" %d\n", our[i]->score);
    }
    return 0;
}*/
