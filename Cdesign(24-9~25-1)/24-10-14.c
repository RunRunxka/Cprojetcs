#include<stdio.h>
int main1() {
	char a;
	printf("������һ��Сд��ĸ:");
	scanf("%c\n",&a);
	char out = a - 32;
	printf("��д��:%c\n", out);
	printf("ASCLL����:%d\n", out);
	return 0;
}
int main2() {
	int a, b, c, d;
	printf("����������������");
	scanf("%d %d", &a, &b);
	c = a % b;
	d = a / b;
	printf("�����ǣ�%d", c);
	printf("�����ǣ�%d", d);
	return 0;
}
int main3() {
	int x, y, jiaohuan1, jiaohuan2;
	printf("������x��");
	scanf("%d", &x);
	printf("������y��");
	scanf("%d", &y);
	jiaohuan1 = x;
	jiaohuan2 = y;
	printf("������xΪ��%d\n", y);
	printf("������yΪ��%d\n", x);
	return 0;
}
int main4() {
	int a, b, c, a1, b1, c1;
	printf("������a��ֵ��");
	scanf("%d", &a);
	printf("������b��ֵ��");
	scanf("%d", &b);
	printf("������c��ֵ��");
	scanf("%d", &c);
	a1 = c;
	b1 = a;
	c1 = b;
	printf("������a=%d\n������b=%d\n������c=%d\n", a1, b1, c1);
	return 0;
}
int main5() {
	int a, b, c, d;
	printf("������һ����λ����");
	scanf("%d", &a);
	b = a % 10;
	c = (a / 10) % 10;
	d = a / 100;
	printf("��λ��Ϊ��%d\nʮλ��Ϊ��%d\n��λ��Ϊ��%d\n", b, c, d);
	return 0;
}
int main6() {
	double a, b, c, d, e, Average, All;
	printf("��һһ�������ſεĳɼ���");
	scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
	Average = (a + b + c + d + e) / 5;
	All = a + b + c + d + e;
	printf("�ܳɼ�Ϊ��%f\nƽ���ɼ�Ϊ��%f\n", Average, All);
	return 0;
}