#include<stdio.h>
#include<stdlib.h>

typedef struct Node{//��ɼ�
    float a[3];//����ÿ��������
    struct Node* next;
}Node;

typedef struct Node1{//��ƽ���ɼ�
    float data;
    struct Node1* next;
}Node1;

Node* creatNew(){//�����ڵ�
    Node *s;
    s=(Node*)malloc(sizeof(Node));
    if(s==NULL){
        printf("�����ڴ�ʧ�ܣ�����");
        exit(1);
    }
    s->next=NULL;
    return s;
}


Node1 *wap(){//����ƽ���ɼ��ڵ�
    Node1 *t;
    t=(Node1*)malloc(sizeof(Node1));
    if(t==NULL){
        printf("�����ڴ�ʧ�ܣ�����");
        exit(1);
    }
    t->next=NULL;
    return t;
}


float avg(int i,Node* s){//��ƽ���ɼ�
    Node* k;
    k=s->next;
    for(int n=0;k!=NULL;k=k->next,n++){
        if(n==i){//Ŀ���ǵ�n���ܵ��ڵ�n
            float sum=0;
            for(int j=0;j<3;j++){
                sum+=k->a[j];
            }
            float avg=sum/3;
            printf("ѧ��%d��ƽ���ɼ��ǣ�%.2f\n",i+1,avg);
            return avg;
        }
    }
    return 0;
}

void com(Node1* Head,FILE *fp){//ð������
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
    printf("ƽ�����ɸߵ���Ϊ:\n");
    fprintf(fp,"ƽ�����ɸߵ���Ϊ:\n");
    for(Y=Head->next; Y!=NULL; Y=Y->next){
        printf("%.2f\n", Y->data);
        fprintf(fp,"%.2f\n",Y->data);
    }
}
int main(){
    int b,flat=1;
    Node *s=creatNew(),*k=s;
    Node1 *Head=wap(),*list=Head;

    printf("ѧ��������\n");
    scanf("%d",&b);

    FILE *fp=fopen("�ɼ�.txt","w");
    if (fp==NULL) {
        printf("�޷������ļ���\n");
        exit(1);
    }

    printf("������ɼ�(����):\n");
    for(int i=0;i<b;i++){
        printf("������ѧ��%d\n",i+1);
        float x[3];
        for(int j=0;j<3;j++){
            scanf("%f",&x[j]);
        }
        Node *r=creatNew();
        for(int h=0;h<3;h++){
            r->a[h]=x[h];
        }
        r->next=NULL;
        k->next=r;
        k=r;
    }
    for(int y=0;y<b;y++){
        Node1* post=wap();
        post->next=NULL;
        list->next=post;
        post->data=avg(y,s);
        fprintf(fp,"ѧ��%d��ƽ���ɼ��ǣ�%.2f\n", y+1,post->data);
        list=post;
    }
    com(Head,fp);
    fclose(fp);
    printf("�ɼ�.txt�ѱ���\n");
    system("pause");
    return 0;
}
/*main����//ʾ��
������ Node�����洢ԭʼ�ɼ���
��   ������ ͷ�ڵ�: s (Node*)
��   ��   ������ next �� ѧ��1�ڵ�
��   ������ ѧ��1�ڵ�
��   ��   ������ a[3]: [80, 85, 90]
��   ��   ������ next �� ѧ��2�ڵ�
��   ������ ѧ��2�ڵ�
��   ��   ������ a[3]: [70, 75, 80]
��   ��   ������ next �� ѧ��3�ڵ�
��   ������ ѧ��3�ڵ�
��       ������ a[3]: [90, 95, 85]
��       ������ next �� NULL
��
������ Node1�����洢ƽ���֣�
    ������ ͷ�ڵ�: Head (Node1*)
    ��   ������ next �� ƽ���ֽڵ�1
    ������ ƽ���ֽڵ�1
    ��   ������ data: 85.00��ѧ��1��
    ��   ������ next �� ƽ���ֽڵ�2
    ������ ƽ���ֽڵ�2
    ��   ������ data: 75.00��ѧ��2��
    ��   ������ next �� ƽ���ֽڵ�3
    ������ ƽ���ֽڵ�3
        ������ data: 90.00��ѧ��3��
        ������ next �� NULL*/