#include<stdio.h>
int step=0;
void func(int n,char from,char to,char temp){
    if(n==1){
        step++;
        return ;
    }

    func(n-1,from,temp,to);

    step++;
    func(n-1,temp,to,from);
}

int main(){
    int n;
    scanf("%d",&n);
    step=0;
    func(n,'A','C','B');
    printf("%d\n",step);
    return 0;
}