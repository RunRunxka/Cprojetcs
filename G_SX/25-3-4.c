#include<stdio.h>
#include<stdlib.h>
int sum(){
    int sum=0;
    for(int i=1;i<=100;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    printf("%d\n",sum());
    system("pause");
    return 0;
}