#include<stdio.h>
#include<stdlib.h>
#define A 5
float max(float a[A]){
    float max=a[0];
    for(int i=0;i<A;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    return max;
}
int main(){
    float a[A];
    for(int i=0;i<A;i++){
        scanf("%f",&a[i]);
    }
    printf("max=%f",max(a));
    system("pause");
    return 0;
}
/*
int sum(int i){
    int x=1;
    x=i;
    if(i==1){
        return x;
    }
    return i*sum(i-1);
}
int main(){
    int x;
    scanf("%d",&x);
    printf("%d!=%d\n",x,sum(x));
    system("pause");
    return 0;    
}
/*
float sum(float a[100],int x){
    float n=0;
    for(int i=0;i<x;i++){
        n+=a[i];
    }
    return n;
}
int main(){
    int x;
    float c[100];
    printf("请输入数字个数：\n");
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        scanf("%f",&c[i]);
    }
    printf("sum==%.4f\n",sum(c,x));
    system("pause");
    return 0;
}*/
