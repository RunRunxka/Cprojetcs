#include<stdio.h>
int main1() {
	int a;
	printf("������һ������");
	scanf("%d", &a);
	if (a % 2 == 0)
		printf("������ż��");
	else
		printf("����������");
	return 0;

}
int main() {
	double x, y;
	printf("������x��ֵ��");
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
				printf("�������ֵ���ڷ�Χ�ڣ�����\n����������x��ֵ:");
				goto start;
			}
		}
	}
	printf("y=%5.2f\n", y);
	return 0;
}
int main() {
	char a, t;
	printf("������һ����ĸ��");
	scanf("%c", &a);
	if (65 <= a && a <= 90)
		t = a + 32;
	else {
		if (97 <= a && a <= 122)
			t = a - 32;
		else {
			printf("�����ⲻ����ĸ������\n\n");
			return 0;
		}
	}
	printf("�����%c", t);
	return 0;
}
int main() {
	int a, b, c, max;
	printf("����3��������");
	scanf("%d %d %d", &a, &b, &c);
	max = a;//����a������
	if (b > max)
		max = b;
	else {
		if (c > max)
			max = c;
	}
	printf("���ֵ�ǣ�%d\n", max);
	return 0;
}