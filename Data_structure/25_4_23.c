#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Max 50
typedef struct Strs{
    char c[Max];
    int len;
}Strs;

void Ins(Strs *a, Strs *b) {
    int pos;
    printf("请输入你想插入的位置：\n");
    scanf("%d",&pos);
    if (pos<0|| pos>a->len) {
        printf("插入位置无效！\n");
        return;
    }
    if (a->len+b->len<=Max) {
        for (int i=a->len-1; i>=pos;i--) {
            a->c[i+b->len]=a->c[i];
        }
        for (int i=0;i<b->len;i++) {
            a->c[i+pos]=b->c[i];
        }
        a->len=a->len+b->len;
    } else if (pos+b->len<=Max) {
        for (int i=Max-1;i>=pos;i--) {
            a->c[i+b->len]=a->c[i];
        }
        for (int i=0;i<b->len;i++) {
            a->c[i+pos]=b->c[i];
        }
        a->len=Max;
    } else {
        for (int i=0;i<Max-pos;i++){
            a->c[i+pos]=b->c[i];
        }
        a->len = Max;
    }
    a->c[a->len] ='\0';
    printf("插入完成！！！\n插入后的字符串 a 为：\n");
    printf("%s\n", a->c);
}

void del(Strs *a){
    int i,j;
    printf("请输入a串你想删除位置的起始位置：\n");
    scanf("%d",&i);
    for(j=a->len-1;j>=i-1;j--){
        a->c[j]=0;
    }
    a->c[j+1]='\0';
    printf("删除完成，删除后的a串为：\n");
    printf("%s\n",a->c);
}

void In(Strs *a,Strs *b){
    printf("请输入a串：\n");
    scanf(" %s",a->c);
    printf("请输入b串：\n");
    scanf(" %s",b->c);
    a->len=strlen(a->c);
    b->len=strlen(b->c);
}

int main(){
    Strs *a,*b;
    int select;
    In(a,b);
    printf("请输入选项：\n");
    printf("1.在a串i位置插入b串\n");
    printf("2.将a串i位置后的字符删除\n");
    printf("3.退出程序\n");
    scanf("%d",&select);
    switch(select){
        case 1:Ins(a,b);
        case 2:del(a);
        case 3:return 0;
        default:printf("没有该选项！！！");
    }
    system("pause");
    return 0;
}