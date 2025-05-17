#include<stdio.h>
#include<stdlib.h>
int mian1(){
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    system("pause");
    return 0;
}
int main2(){
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
    }
    system("pause");
    return 0;
}

int main3(){
    int a[30]={1,1};
    printf("%d\t%d\t",a[0],a[1]);
    for(int i=2,j=-2;i<30;i++,j++){
        a[i]=a[i-1]+a[i-2];
        printf("%d\t",a[i]);
        if(j%5==0){
            printf("\n");
        }
    }
    system("pause");
    return 0;
}
int max(int b[30]){
    int max=b[0];
    for(int i=0;i<30;i++){
        if(max<b[i]){
            max=b[i];
        }
        if(i%10==0){
            printf("\n");
        }
        printf("%d\t",b[i]);
    }
    return max;
}
int main(){
    int a[30];
    for(int i=0;i<30;i++){
        a[i]=rand();
    }
    printf("\nmax=%d\n",max(a));
    system("pause");
    return 0;
}