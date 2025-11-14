#include<stdio.h>
int func(int a,int b){
    while(b!=0){
        int t=b;
        b=a%b;
        a=t;
    }
    return a;
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int result=func(a,b);
    printf("%d\n",result);
    return 0;
}
