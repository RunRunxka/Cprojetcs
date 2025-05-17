#include<stdio.h>
int main1() {
	int a;
	printf("请输入一个整数");
	scanf("%d", &a);
	if (a % 2 == 0)
		printf("该数是偶数");
	else
		printf("该数是奇数");
	return 0;

}
int main() {
	double x, y;
	printf("请输入x的值：");
start:
	scanf("%lf", &x);
	if (-5 < x && x < 0)
		y = x;
	else {
		if (x == 0)
			y = x - 1;
		else {
			if (0 < x && x < 10)
				y = x + 1;
			else {
				printf("你输入的值不在范围内！！！\n请重新输入x的值:");
				goto start;
			}
		}
	}
	printf("y=%5.2f\n", y);
	return 0;
}
int main() {
	char a, t;
	printf("请输入一个字母：");
	scanf("%c", &a);
	if (65 <= a && a <= 90)
		t = a + 32;
	else {
		if (97 <= a && a <= 122)
			t = a - 32;
		else {
			printf("智障这不是字母！！！\n\n");
			return 0;
		}
	}
	printf("输出：%c", t);
	return 0;
}
int main() {
	int a, b, c, max;
	printf("输入3个整数：");
	scanf("%d %d %d", &a, &b, &c);
	max = a;//假设a是最大的
	if (b > max)
		max = b;
	else {
		if (c > max)
			max = c;
	}
	printf("最大值是：%d\n", max);
	return 0;
}