//(1)求任意方阵每行元素之和
#include<stdio.h>
#include<string.h>
int main(){
	int i,r,c,a[100][100];
    printf("请输入方阵行数(100行以内):\n");
    scanf("%d",&r);
    printf("请输入方阵列数(100列以内):\n");
    scanf("%d",&c);
    printf("请输入矩阵元素；\n");
    for(i=0;i<r;i++){
        printf("第%d行:",i+1);
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        int sum1=0;
        for(int j=0;j<c;j++){
            sum1+=a[i][j];
        }
        printf("第%d行的和为:%d\n",i+1,sum1);
    }
    return 0;
}

//(2)求二维数组每行元素中的最大值
int main(){
    int i,a[100][100],r,c;
    printf("请输入方阵行数(100行以内):\n");
    scanf("%d",&r);
    printf("请输入方阵列数(100列以内):\n");
    scanf("%d",&c);
    printf("请输入矩阵元素:\n");
    for(i=0;i<r;i++){
        printf("第%d行:",i+1);
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        int max=a[i][0];
        for(int j=0;j<c;j++){
            if(max<a[i][j]){
                max=a[i][j];
            }
        }
        printf("第%d行的最大值为:%d\n",i+1,max);
    }
    return 0;
}

//(3)连接两个字符串，即实现strcat()函数的功能
int main(){
    char a[100],b[100];
    printf("请输入字符串a:\n");
    scanf("%s",a);
    printf("请输入字符串b:\n");
    scanf("%s",b);
    strcat(a,b);
    printf("连接后的字符串为:%s\n",a);
    return 0;
}

//(4)输入一个字符串，要求转换成大写输出
int main(){
    char a[100];
    printf("请输入字符串:\n");
    scanf("%s",a);
    strupr(a);
    printf("转换后的字符串为:%s\n",a);
    return 0;
}

//(5)有M个学生，N门课，通过键盘输入成绩，求每个学生的平均成绩
int main(){
    int i,m,n,a[100][100];
    printf("请输入学生人数:\n");
    scanf("%d",&m);
    printf("请输入课程数:\n");
    scanf("%d",&n);
    printf("请输入成绩:\n");
    for(i=0;i<m;i++){
        printf("第%d个学生:",i+1);
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=a[i][j];
        }
        printf("第%d个学生的平均成绩为:%d\n",i+1,sum/n);
    }
    return 0;
}

//(6)求矩阵对角线元素之和
int main(){
    int i,r,a[100][100];
    printf("请输入方阵行数(100行以内默认r*r):\n");
    scanf("%d",&r);
    printf("请输入矩阵元素:\n");
    for(i=0;i<r;i++){
        printf("第%d行:",i+1);
        for(int j=0;j<r;j++){
            scanf("%d",&a[i][j]);
        }
    }//给二维数组赋值套路
    int sum1=0,sum2=0;
    for(i=0;i<r;i++){
        sum1+=a[i][i];
        sum2+=a[i][r-i-1];
    }
    printf("对角线元素之和为:%d\n",sum1+sum2);
    return 0;
}

//(7)输入一行字符统计包含字母，数字空格和其他字符的个数
int main(){
    char a[100];
    printf("请输入字符串:\n");
    gets(a); //不能用scanf，输入空格无法识别
    printf("%d\n",strlen(a));
    return 0;
}