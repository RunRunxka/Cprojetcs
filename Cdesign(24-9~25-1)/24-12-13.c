#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//第一题
/*int main(){
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float *t,*m,*p1=&a,*p2=&b,*p3=&c;
    if(*p2>*p1){
        t=p2;
        p2=p1;
        p1=t;
    }
    if(*p3>*p2){
        m=p2;
        p2=p3;
        p3=m;
    }
    if(*p2>*p1){
        m=p2;
        p2=p1;
        p1=m;
    }
    printf("%f  %f  %f",*p1,*p2,*p3);
    system("pause");
    return 0;
}
第二题
int main(){
    char a[80],*p;
    int len;
    gets(a);
    p=a;
    for(int i=0;*(p+i)!='\0';i++){
        len+=1;
    }
    printf("%d",len);
    system("pause");
}*/
int od(int *p,int *pp,int t){
    int len;
    for(int i=0,j=0;i<t;i++){
        if(*((p+i))%2!=0){
            *(pp+j)=*(p+i);
            len+=1;
            j++;
        }
    }
    return(len);
}
int main(){
    int a[100],b[100],t;
    printf("请输入数字个数：\n");
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&a[i]);
    }
    int len=od(a,b,t);
    for(int i=0;i<len;i++){
        printf("%d\t",b[i]);
    }
    printf("\n奇数个数为  %d\n",len);
    system("pause");
}