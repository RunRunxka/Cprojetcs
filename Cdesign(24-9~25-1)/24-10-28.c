/*#include<stdio.h>
int main() {
	int a=0,i,c;
	printf("��������ķ�Χ��");
	scanf("%d", &c);
	printf("�ܱ�2�������У�\n\n");
	for (i = 1; i <= c; i++) {
		if (i % 2 == 0) {
			a = a + 1;
			printf(" % -5.d",i);
		}
		else
			a = a;
	}
		printf("\n\n%d�����ܱ�2�����ĸ���Ϊ��%d\n", c, a);
	return 0;
}

#include<stdio.h>
int main() {
	int a = 0,i = 1,b = 1,c;
	printf("����������Ҫ���㵽��ֵ��");
	scanf("%d", &c);
	while (i <= c) {
		a = a + (b * i);
		b = -b;
		i = i+2;
	}
	printf("����ֵΪ��%d\n", a);
	return 0;
}
*/
#include<stdio.h>
int main() {
	int i = 1000,c,n = 0;
	printf("������1000���ϵ���ݣ�");
	scanf("%d", &c);
	printf("����Ϊ:\n");
	do {
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
			i = i;
			printf("%-5.d", i);
			n = n + 1;
		}
		i = i++;
	} while (i <= c);
	printf("\n\nһ����    %d    ��\n\n ", n);
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
	printf("e��ֵΪ��%lf\n", b);
	return 0;
}
*/