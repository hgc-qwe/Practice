#include<stdio.h>
int func1(int a,int b){
    while(b!=0){
        int t=b;
        b=a%b;
        a=t;
    }
    return a;
}

int func2(int x,int y){
    if(x==0||y==0)return 0;
    return x/func1(x,y)*y;
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int result=func2(a,b);
    printf("%d\n",result);
    return 0;
}