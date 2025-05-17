#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Node{
    char data;
    Node* next;
}Node;

Node* NewNode(){
    Node *ne;
    ne=(Node*)malloc(sizeof(Node));
    if(ne==NULL){
        printf("分配内存失败！！");
        exit(0);
    }
    ne->next=NULL;
    return ne;
}

//1.实现线性表（顺序结构或链式结构）任意位置上（在第i个元素之前）插入元素的操作。
void Ins(Node *Head,int count){
    int n;
    char k;
    Node *r=Head,*xu=Head->next;
    printf("插入节点位置：\n");
    scanf("%d",&n);
    if(n>0&&n<=count+1){
        Node *ins=NewNode();
        printf("输入值：\n");
        scanf(" %c",&k);
        ins->data=k;
        for(int i=0;r!=NULL&&i<n-1;i++){
            r=r->next;
        }
        ins->next=r->next;
        r->next=ins;
        printf("插入完成。\n");
    }
    else{
        printf("位置不合理！！");
        return;
    }
    printf("插入后的表为：\n");
    for(;xu!=NULL;){
        printf("%c",xu->data);
        xu=xu->next;
    }
}

void Del(Node *Head,int count){
    int n;
    Node *lip=Head,*curr=Head->next,*temp=NULL;
    printf("删除节点位置：");
    scanf("%d",&n);
    if(n<=0||n>count){
        printf("删除位置不合理！");
        return;
    }
    else if(n==count){//末尾位置
        for(int i=0;i<n-1;i++){
            lip=lip->next;
        }
        free(lip->next);
        lip->next=NULL;
    }
    else{
        for(int i=0;lip->next!=NULL&&i<n-1;i++){
            lip=lip->next;
        }
        temp=lip->next;
        lip->next=temp->next;
        free(temp);
    }
    printf("删除完成\n");
    printf("删除后的表为：\n");
    for(;curr!=NULL;){
        printf("%c",curr->data);
        curr=curr->next;
    }
}

void Find(Node *Head){
    Node *tmp=Head->next;
    char h;
    printf("请输入你要查找的值：\n");
    scanf(" %c",&h);
    for(int i=1;tmp!=NULL;i++){
        if(tmp->data==h){
            printf("查找到该值，在第\t%d\t个节点",i);
            break;
        }
        tmp=tmp->next;
    }
}




int main(){
    Node *Head=NewNode();
    Node *p=Head;
    char c;
    int flag=1,select,count=0;
    printf("请输入数据(输入$停止)：\n");
    while(flag){
        c=getchar();
        if(c=='\n'){
            continue;
        }
        if(c!='$'){
            Node *NewNod=NewNode();
            NewNod->data=c;
            p->next=NewNod;
            p=NewNod;
            count++;//统计有效节点个数
        }
        else{
            flag=0;
        }
    }
    printf("选择操作(输入相应数字)：\n");
    printf("1.在第i个节点前插入新节点\n");
    printf("2.删除第i个元素\n");
    printf("3.统计元素个数\n");
    printf("4.查找x元素\n");
    scanf("%d",&select);
    switch(select){
        case 1:Ins(Head,count);break;
        case 2:Del(Head,count);break;
        case 3:printf("元素个数为：%d\n",count);break;
        case 4:Find(Head);break;
        default:printf("没有该选项！");
    }
    system("pause");
    return 0;
}