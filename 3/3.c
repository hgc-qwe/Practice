#include<stdio.h>
#include<string.h>
#include<ctype.h>

int func1(char* s){  //判断回文
    int len=strlen(s);
    for(int i=0;i<len/2;i++){
        if(s[i]!=s[len-1-i])return 0;
    }
    return 1;
}

int func2(char c){  //字符到数字
    if(isdigit(c))return c-'0';
    return c-'A'+10;  //'A'在16进制表示10
}

char func3(int x){  //数字到字符
    if(x<10)return x+'0';
    return x-10+'A';
}

//N进制加法
void func4(char* a,char* b,int base,char* res){
    int len=strlen(a);
    int carry=0;
    int sum;
    res[len]='\0';

    for(int i=len-1;i>=0;i--){
        sum=func2(a[i])+func2(b[i])+carry;
        carry=sum/base;
        res[i]=func3(sum%base);
    }
}

void func5(char* s){
    int len=strlen(s);
    for(int i=0;i<len/2;i++){
        char t=s[i];
        s[i]=s[len-1-i];
        s[len-1-i]=t;
    }
}

int main(){
    int N;
    char M[105],revM[105],sum[105];

    scanf("%d %s",&N,M);

    int step=0;
    while(step<=30){
        if(func1(M)){
            printf("STEP=%d\n",step);
            return 0;
        }

        strcpy(revM,M);
        func5(revM);

        func4(M,revM,N,sum);
        strcpy(M,sum);

        step++;
    }

    printf("Impossible!\n");
    return 0;
}