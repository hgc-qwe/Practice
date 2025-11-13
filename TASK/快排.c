#include<stdio.h>

//交换两数
void func1(int* a,int* b){
    int t=*a;
    *a=*b;
    *b=t;
}

//
int func2(int arr[],int low,int high){
    int pivot=arr[high];  //最后一个元素为基准
    int i=(low-1);

    for(int j=low;j<=high-1;j++){
        if(arr[j]<=pivot){
            i++;
            func1(&arr[i],&arr[j]);
        }
    }

    func1(&arr[i+1],&arr[high]);
    return (i+1);
}

void func3(int arr[],int low,int high){
    if(low<high){
        int pi=func2(arr,low,high);

        func3(arr,low,pi-1);
        func3(arr,pi+1,high);
    }
}

void func4(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    func3(arr,0,size-1);

    func4(arr,size);

    return 0;
}

/*
qsort(arr, n, sizeof(int), compare);

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);  升序
}
*/