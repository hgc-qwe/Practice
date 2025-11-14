#include<stdio.h>
void func1(int* a,int* b){
    int t=*a;
    *a=*b;
    *b=t;
}

//调整堆函数
void func2(int* nums,int n,int i){
    int largest=i;
    int left=i*2+1;
    int right=i*2+2;

    if(left<n&&nums[left]>nums[largest]){
        largest=left;
    }
    if(right<n&&nums[right]>nums[largest]){
        largest=right;
    }
    if(largest!=i){
        func1(&nums[i],&nums[largest]);
        func2(nums,n,largest);
    }
}

//构建最大堆
void func3(int* nums,int n){
    for(int i=n/2-1;i>=0;i--){
        func2(nums,n,i);
    }
    for(int i=n-1;i>0;i--){
        func1(&nums[0],&nums[i]);
        func2(nums,i,0);
    }
}

void func4(int* nums,int size){
    for(int i=0;i<size;i++){
        printf("%d ",nums[i]);
    }
    printf("\n");
}

int main(){
    int nums[5]={6,8,2,5,0};
    func3(nums,5);
    func4(nums,5);
    return 0;
}