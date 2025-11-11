#include<stdio.h>
int main(){  //容斥原理
    long long n;
    while(scanf("%lld",&n)!=EOF){
        long long A1=n/2+n/5+n/11+n/13;
        long long A2=n/10+n/22+n/143+n/55+n/65+n/26;
        long long A3=n/110+n/130+n/286+n/715;
        long long A4=n/1430;

        long long t=A1-A2+A3-A4;
        long long result=n-t;

        printf("%lld\n",result);
    }
    
    return 0;
}