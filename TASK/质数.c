#include<stdio.h>
int func(int x){
    if(x<2)return 0;
    for(int i=2;i*i<=x;i++){
        if(x%i==0)return 0;
    }
    return 1;
}

int main(){
    int x;
    scanf("%d",&x);
    printf("%d\n",func(x));
    return 0;
}