#include<stdio.h>
//第一题
void fun(){
    float x,y,z;
    printf("现在是第一题（计算两个数差的绝对值）\n请输入两个值：\n");
    scanf("%f %f",&x,&y);
    z=x-y;
    if(z<0){
        z=-z;
    }else{
        z=z;
    }
    printf("结果为：%f\n",z);
}
//第二题
void mpow(){
    float x,y,m=1.0;
    printf("现在是第二题（求a的n次方）\n请输入底数：\n");
    scanf("%f",&x);
    printf("请输入指数：\n");
    scanf("%f",&y);
    if(y==0){
        m=m;
    }
    if(y>0){
        for(int i=0;i<y;i++){
            m*=x;
        }
    }
    if(y<0){
        for(int i=0;i<-y;i++){
            m*=1.0/x;
        }
    }
    printf("结果为：%f\n",m);
}
//第三题
void fu(){
    float a[3],t;
    printf("现在是第三题（分别求三个数中的最大数和最小数并给出值）\n请输入三个值：\n");
    for(int i=0;i<3;i++){
        scanf("%f",&a[i]);
    }
    for(int j=0;j<2;j++){
        for(int i=0;i<2-j;i++){
            if(a[i]>a[i+1]){
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    for(int i=0;i<3;i++){
        printf("%f\t",a[i]);
    }
    printf("\n最大值为：%f\n最小值为：%f\n",a[2],a[0]);
}
int main(){
    int tihao;
    char ch;
    printf("请输入你要执行的题的序号：\n");
    scanf("%d",&tihao);
    if(tihao==1){
        fun();
    }
    if(tihao==2){
        mpow();
    }
    if(tihao==3){
        fu();
    }
    printf("你是否要运行其他题（输入Y继续，输入N退出）：\n");
    scanf(" %c",&ch);
    if(ch=='Y'||ch=='y'){
        main();
    }else{
        if(ch=='N'||ch=='n'){
        printf("谢谢使用！\n");
        }else{
            printf("输入错误！\n");
        }
    }
}