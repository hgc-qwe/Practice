#include<stdio.h>
#include<stdlib.h>

long long func1(int x1,int y1,int x2,int y2){
    long long dx=x1-x2;
    long long dy=y1-y2;
    return dx*dx+dy*dy;
}

//比较函数
int func2(const void *a,const void *b){
    long long x=*(long long*)a;
    long long y=*(long long*)b;
    if(x>y)return 1;
    if(x<y)return -1;
    return 0;
}

int main(){
    int x[4],y[4];
    for(int i=0;i<4;i++){
        scanf("%d",&x[i]);
    }
    for(int i=0;i<4;i++){
        scanf("%d",&y[i]);
    }

    long long d[6];
    int count=0;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            d[count++]=func1(x[i],y[i],x[j],y[j]);
        }
    }
    
    //快速排序
    qsort(d,6,sizeof(long long),func2);

    if(d[0]>0&&d[0]==d[1]&&d[0]==d[2]&&d[0]==d[3]&&d[4]==d[5]){
        printf("It's a square.\n");
    }
    else printf("Not a square.\n");
}