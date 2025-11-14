#include<stdio.h>
int func(int x){
    if(x<=1)return x;

    return func(x-1)+func(x-2);
}

int main(){
    int x;
    scanf("%d",&x);
    int result=func(x);
    printf("%d\n",result);
    return 0;
}