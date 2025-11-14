#include<stdio.h>

void func(int x){
    while(x%2==0){
        printf("2 ");
        x/=2;
    }

    for(int i=3;i*i<=x;i+=2){
        while(x%i==0){
            printf("%d ",i);
            x/=i;
        }
    }

    if(x>2){
        printf("%d ",x);
    }
    printf("\n");
}

int main(){
    int x;
    scanf("%d",&x);
    func(x);
    return 0;
}