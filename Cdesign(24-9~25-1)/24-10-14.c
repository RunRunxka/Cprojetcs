#include<stdio.h>
int main1() {
	char a;
	printf("请输入一个小写字母:");
	scanf("%c\n",&a);
	char out = a - 32;
	printf("大写是:%c\n", out);
	printf("ASCLL码是:%d\n", out);
	return 0;
}
int main2() {
	int a, b, c, d;
	printf("请输入两个整数：");
	scanf("%d %d", &a, &b);
	c = a % b;
	d = a / b;
	printf("余数是：%d", c);
	printf("商数是：%d", d);
	return 0;
}
int main3() {
	int x, y, jiaohuan1, jiaohuan2;
	printf("请输入x：");
	scanf("%d", &x);
	printf("请输入y：");
	scanf("%d", &y);
	jiaohuan1 = x;
	jiaohuan2 = y;
	printf("交换后x为：%d\n", y);
	printf("交换后y为：%d\n", x);
	return 0;
}
int main4() {
	int a, b, c, a1, b1, c1;
	printf("请输入a的值：");
	scanf("%d", &a);
	printf("请输入b的值：");
	scanf("%d", &b);
	printf("请输入c的值：");
	scanf("%d", &c);
	a1 = c;
	b1 = a;
	c1 = b;
	printf("交换后a=%d\n交换后b=%d\n交换后c=%d\n", a1, b1, c1);
	return 0;
}
int main5() {
	int a, b, c, d;
	printf("请输入一个三位数：");
	scanf("%d", &a);
	b = a % 10;
	c = (a / 10) % 10;
	d = a / 100;
	printf("个位上为：%d\n十位上为：%d\n百位上为：%d\n", b, c, d);
	return 0;
}
int main6() {
	double a, b, c, d, e, Average, All;
	printf("请一一输入五门课的成绩：");
	scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
	Average = (a + b + c + d + e) / 5;
	All = a + b + c + d + e;
	printf("总成绩为：%f\n平均成绩为：%f\n", Average, All);
	return 0;
}