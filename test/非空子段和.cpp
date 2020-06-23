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
	for (int i = 0; i < n; i++) ans = max(ans, a[i]);	//找寻最大的那个数 
	if (ans < 0) {
		
		fprintf(fp, "%lld", ans);	//如果最大的数都<0,那么肯定越加越小，直接输出最大的那个数。 

	}

	else {
		for (int i = 0; i < n; i++) {
			sum += a[i];
			if (sum < 0) sum = 0;	//加到这个数已经<0了，还不如不加前面的数，从这个数之和开始加 
			ans = max(ans, sum);	//挑选最大字段和 
		}
		fprintf(fp, "%lld", ans);
	}
	fclose(fp);
	return 0;
}
*/