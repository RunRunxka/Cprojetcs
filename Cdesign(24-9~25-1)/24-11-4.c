#include<stdio.h>
//c范围以内不能被2整除的数，每5个为一行
int main() {
	int n, i = -8,num = 0,c;
	printf("请输入范围：");
	scanf("%d", &c);
	for (n = 1; n <= c; n++,i++) {
		if (n % 2 == 0) 
			continue;
			printf("%d\t", n);
			num++;
			if (i % 5 == 0)
				printf("\n");
		
	}
	printf("\n一共有%d个。\n", num);
		return 0;
}

int main() {
	double sum = 0, i = 0, c;
	int n;
	printf("请输入你想输入的个数：");
	scanf("%d", &n);
	printf("请输入 %d 个数", n);
	while (i < n) {
		scanf("%lf", &c);
		if (c <= 0) {
			i++;
			continue;
		}
		sum =sum + c;
		i++;
	}
	printf("正数的和为：%lf", sum);
	return 0;
}
int main() {
	char ch;
	int c = 0;
	printf("请输入一行字符：\n\n");
	while ((ch = getchar()) != '\n') {
		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
			c++;
		}
	}
	printf("\n\n字母的个数为：%d\n", c);
	return 0;
}
int main() {
	int i = 1, b;
	while (i <= 3) {
		b = 1;
		while (b <= 3 - i) {
			printf(" ");
			b++;
		}
		b = 1;
		while (b <= 2 * i - 1) {
			printf("*");
			b++;
		}
		printf("\n");
		i++;
	}
	return 0;
}

int main() {
	int i = 1, j;
	while (i <= 3) {
		j = 1;
		while (j <= 3 - i) {
			printf(" ");
			j++;
		}
		j = 1;
		while (j <= 2 * i - 1) {
			printf("%c", 'A' + i - 1);
			j++;
		}
		printf("\n");
		i++;
	}
	i = 3 - 1;
	while (i >= 1) {
		j = 1;
		while (j <= 3 - i) {
			printf(" ");
			j++;
		}
		j = 1;
		while (j <= 2 * i - 1) {
			printf("%c", 'A' + i - 1);
			j++;
		}
		printf("\n");
		i--;
	}
	return 0;
}
