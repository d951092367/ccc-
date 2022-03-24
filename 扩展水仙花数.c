#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
 
int c_f(int x, int y)     //自定义的乘法
{
	int k = x;
	int i = 0;
	for (i = 0; i < y - 1; i++)
	{
		k *= x;
	}
	return k;
}
int q_w(int min,int w) //自定义取每位上的数   0代表个位 1代表十位 2代表百位
{

	if (w == 0)
	{
		return min % 10;
	}
    return (min / (c_f(10, w)) % 10);
}
void s_x(int N)      //实现水仙花数的主体
{
	int z_s = 0;
	int w = 0;
	int min = c_f(10, N-1);
	int max = c_f(10, N) - 1;
	while (min <= max)
	{
		for (w = 0; w < N; w++)
		{
			z_s += c_f(q_w(min,w), N);       //实现各个次方的相加
		}
		if (z_s == min)
		{
			printf("%d\n",z_s);
		}
		z_s = 0;      //一定要 归零 
		min += 1;
	}
	


}
int main()
{
	int i = 0;
	int T = 0;
	int N = 0;
	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		
		scanf("%d",&N);
		s_x(N);

	}
	return 0;
