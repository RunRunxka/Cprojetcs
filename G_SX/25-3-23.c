#include "stdio.h"
#include "stdlib.h"
/*int main(){
    int a,b,c,t;
    int *p1,*p2,*p3;
    p1=&a,p2=&b,p3=&c;
    scanf("%d %d %d",p1,p2,p3);
    if(*p1>*p2){
        t=*p1;
        *p1=*p2;
        *p2=t; 
    }
   if(*p2>*p3){
        t=*p2;
        *p2=*p3;
        *p3=t;
    }
    if(*p2<*p1){
        t=*p2;
        *p2=*p1;
        *p1=t;
    }
   printf("%d,%d,%d\n",a,b,c);
    system("pause");
    return 0;
}
void swap(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int main(){
    int a,b,*c,*d;
    scanf("%d %d",&a,&b);
    c=&a,d=&b;
    swap(c,d);
    printf("a=%d b=%d\n",a,b);
    system("pause");
    return 0;
}*/
typedef struct Node{//存成绩
    float a[3];//假设每个人三科
    struct Node* next;
}Node;

typedef struct Node1{
    float data;
    struct Node1* next;
}Node1;

Node* creatNew(){//创建节点
    Node *s;
    s=(Node*)malloc(sizeof(Node));
    if(s==NULL){
        printf("分配内存失败！！！");
        exit(1);
    }
    s->next=NULL;
    return s;
}


Node1* wap(){
    Node1 *t;
    t=(Node1*)malloc(sizeof(Node1));
    if(t==NULL){
        printf("分配内存失败！！！");
        exit(1);
    }
    t->next=NULL;
    return t;
}


float avg(int i,Node* s){//求平均成绩
    Node* k;
    k=s->next;
    for(int n=0;k!=NULL;k=k->next,n++){
        if(n+1==i){//目的是第n次能到节点n+1
            float sum=0;
            for(int j=0;j<3;j++){
                sum+=k->a[j];
            }
            float avg=sum/3;
            printf("学生%d的平均成绩是：%.2f\n",i,avg);
            return avg;
        }
    }
    return 0;
}

void com(Node1* Head){
    if(!Head||!Head->next){
        return;
    }
    int swap;
    Node1* Y;
    do{
        Y=Head->next;
        swap=0;
        while(Y->next){
            if(Y->data<Y->next->data){
                float a=Y->data;
                Y->data=Y->next->data;
                Y->next->data=a;
                swap=1;
            }
            Y=Y->next;
        }
    }while(swap);
    printf("平均分由高到低为\n");
    for(Y=Head->next; Y!=NULL; Y=Y->next){
        printf("%.2f\n", Y->data);
    }
}
int main(){
    int b,flat=1;
    Node* s=creatNew();
    Node1* Head=wap();
    Node* k=s;
    Node1* list=Head;

    printf("学生人数：\n");
    scanf("%d",&b);

    printf("请输入成绩(三科):\n");
    for(int i=0;i<b;i++){
        printf("现在是学生%d\n",i+1);
        float x[3];
        for(int j=0;j<3;j++){
            scanf("%f",&x[j]);
        }
        Node* r=(Node*)malloc(sizeof(Node));
        if(r==NULL){
            printf("分配内存失败！");
            exit(1);
        }
        for(int h=0;h<3;h++){
            r->a[h]=x[h];
        }
        r->next=NULL;
        k->next=r;
        k=r;
    }
    for(int y=0;y<b;y++){
        Node1* post=(Node1*)malloc(sizeof(Node1));
        if(post==NULL){
            printf("分配排序空间失败");
            free(post);
            exit(1);
        }
        post->next=NULL;
        list->next=post;
        post->data=avg(y+1,s);
        list=post;
    }
    com(Head);
    system("pause");
    return 0;
}