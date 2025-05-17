/*#include<stdio.h>
int main() {
	int a=0,i,c;
	printf("请输入你的范围：");
	scanf("%d", &c);
	printf("能被2整除的有：\n\n");
	for (i = 1; i <= c; i++) {
		if (i % 2 == 0) {
			a = a + 1;
			printf(" % -5.d",i);
		}
		else
			a = a;
	}
		printf("\n\n%d以内能被2整除的个数为：%d\n", c, a);
	return 0;
}

#include<stdio.h>
int main() {
	int a = 0,i = 1,b = 1,c;
	printf("请输入你想要计算到的值：");
	scanf("%d", &c);
	while (i <= c) {
		a = a + (b * i);
		b = -b;
		i = i+2;
	}
	printf("最后的值为：%d\n", a);
	return 0;
}
*/
#include<stdio.h>
int main() {
	int i = 1000,c,n = 0;
	printf("请输入1000以上的年份：");
	scanf("%d", &c);
	printf("闰年为:\n");
	do {
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
			i = i;
			printf("%-5.d", i);
			n = n + 1;
		}
		i = i++;
	} while (i <= c);
	printf("\n\n一共有    %d    年\n\n ", n);
	return 0;
}
/*
#include<stdio.h>
int main() {
	int n = 0;
	double b = 0, c;
	do {
		double jiecheng = 1;
		for (int i = 1; i <= n; i++) {
			jiecheng = jiecheng * i;
		}
		c = 1 / jiecheng;
		b = b + c;
		n++;
	} while (c >= 1e-4);
	printf("e的值为：%lf\n", b);
	return 0;
}
*/