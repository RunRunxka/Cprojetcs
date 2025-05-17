#include<stdio.h>
#include<stdlib.h>
int main(){
    int x;
    a:
    printf("请输入0-12:\n");
    scanf("%d",&x);
    switch(x){
        case 12:
        case 0:
        case 1:
        case 2:
        printf("冬季\n");break;
        case 3:
        case 4:
        case 5:
        printf("春季\n");break;
        case 6:
        case 7:
        case 8:
        printf("夏季\n");break;
        case 9:
        case 10:
        case 11:
        printf("秋季\n");break;
        default:
        printf("请重新输入\n");goto a;
    }
    system("pause");
    return 0;
}