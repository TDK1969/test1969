#include<stdio.h>
#include<stdlib.h>
#pragma warning (disable:4996)
#define MAX 1000005
#define NIL 1e9
typedef long long LL;
LL a[MAX];
LL max(LL x, LL y)
{
	return (x > y) ? x : y;
}
/*
int main()
{
	LL n, sum = 0, ans = -NIL;
	FILE* fp = fopen("max.in", "r");
	fscanf(fp, "%lld", &n);
	for (int i = 0; i < n; i++)
		fscanf(fp, "%lld", &a[i]);
	fclose(fp);
	FILE* fp2 = fopen("max.out", "w");
	for (int i = 0; i < n; i++) ans = max(ans, a[i]);	//��Ѱ�����Ǹ��� 
	if (ans < 0) {
		
		fprintf(fp, "%lld", ans);	//�����������<0,��ô�϶�Խ��ԽС��ֱ����������Ǹ����� 

	}

	else {
		for (int i = 0; i < n; i++) {
			sum += a[i];
			if (sum < 0) sum = 0;	//�ӵ�������Ѿ�<0�ˣ������粻��ǰ��������������֮�Ϳ�ʼ�� 
			ans = max(ans, sum);	//��ѡ����ֶκ� 
		}
		fprintf(fp, "%lld", ans);
	}
	fclose(fp);
	return 0;
}
*/