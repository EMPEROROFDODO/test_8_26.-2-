#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//写代码将三个整数按从大到小输出 如：2 3 1
//自己敲得
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int A = 0;
//	int B = 0;
//	int ch[] = { a,b,c };
//	int i = 0;
//	int Max = ch[2];
//	int Min = ch[2];
//	for (i = 0; i < 3; i++)
//	{
//		if (Max <= ch[i])
//		{
//			Max = ch[i];
//			 A = i;
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		if (Min >= ch[i])
//		{
//			Min = ch[i];
//			 B = i;
//		}
//	}
//	int Mid = ch[3-A-B];
//	printf("%d %d %d", Max, Mid, Min);
//	return 0;
//}

//老师敲得初学者代码
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tem = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		tem = a;
//		a = b;
//		b = tem;
//	}
//	if (a < c)
//	{
//		tem = a;
//		a = c;
//		c = tem;
//	}
//	if (b < c)
//	{
//		tem = b;
//		b = c;
//		c = tem;
//	}
//		scanf("%d %d %d", &a, &b, &c);
//	return 0;
//}


//三目
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0; 
//	scanf("%d %d %d", &a, &b, &c);
//	int Max = a > b ? (a > c ? a : c) : (b > c ? b : c);
//	int Mid = a > b ? (a > c ? (b > c ? b : c) : a) : (a > c ? a : (b > c ? c : b));
//	int Min = a > b ? (b > c ? c : b) : (a > c ? c : a);
//	printf("%d %d %d", Max, Mid, Min);
//	return 0;
//}