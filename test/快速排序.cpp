//���������ڶԱ����ַ�������������ʱ��1��2��3��4������ֱ�Ӹ�ֵ
/*
void quicksort(int* r, int s, int t)
{
    int i = s, j = t;
    int tmp;
    if (s < t)
    {
        tmp = r[s];//1
        while (i != j)
        {
            while (j > i&& r[j] >= tmp)
                j--;
            r[i] = r[j];//2
            while (i < j && r[i] <= tmp)
                i++;
            r[j] = r[i];//3
        }
        r[i] = tmp;//4
        quicksort(r, s, i - 1);
        quicksort(r, i + 1, t);
    }
}
*/