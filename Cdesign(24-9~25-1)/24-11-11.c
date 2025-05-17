//（1）定义一个含有30个元素的int类型数组。依次给数组赋奇数1，3，5...；先正序后反序.
#include<stdio.h>
/*int main() {
	auto a[30], i, n;
	for (i = 0, n = 1; i <= 29; i++,n++) {
		a[i] = 2*n - 1;
		printf("%d\t", a[i]);
		if (n % 5 == 0) {
			printf("\n");
		}
	}
	printf("\n\n");
	for (i = 29, n = 1; i >= 0; i--, n++) {
		printf("%d\t", a[i]);
		if (n % 5 == 0) {
			printf("\n");
		}
	}
	return 0;
}

//（2）一个一维数组中已存放8个整数，先按原来顺序的相反顺序排列，然后顺序输出
int main() {
	auto a[8], i = 0, n = 1;
	printf("请存放8个整数\n");
	while (i < 8) {
		scanf("%d", &a[i]);
		i++;
	}
	i -= 1;
	printf("\n相反顺序为：\n\n");
	while (i >= 0) {
		printf("%d\t", a[i]);
		if (n % 4 == 0) {
			printf("\n");
		}
		n++;
		i--;
	}
	return 0;
}*/
//(3)查找最大值并打印该值及其下标。
int main() {
	auto a[100], i, n, xiabiao, max;
	printf("请输入数据个数（100个以内）：\n");
	scanf("%d", &n);
	printf("请输入数据：\n");
	for (i = 0; i <= n - 1; i++) {
		scanf("%d", &a[i]);
	}
	max = a[0];
	for (i = 0; i <= n - 1; i++) {
		if (a[i] > max) {
			max = a[i];
			xiabiao = i;
		}
	}
	printf("数组中最大值为：%d\n下标为：%d\n", max, xiabiao);
	return 0;
}
