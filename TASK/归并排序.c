#include<stdio.h>
#include<stdlib.h>

void func1(int arr[],int left,int mid,int right){
    int i,j,k;
    int n1=mid-left+1;  //左子数组大小
    int n2=right-mid;   //右子数组大小

    int* L=(int*)malloc(n1*sizeof(int));
    int* R=(int*)malloc(n2*sizeof(int));
    
    //拷贝
    for(i=0;i<n1;i++){
        L[i]=arr[left+i];
    }
    for(j=0;j<n2;j++){
        R[j]=arr[mid+1+j];
    }
    
    //合并回原数组
    i=0;
    j=0;
    k=left;
    
    //比较两子数组，取小的
    while(i<n1&&j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    
    //拷贝剩余元素
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }

    free(L);
    free(R);
}

void func2(int arr[],int left,int right){
    if(left<right){
        int mid=left+(right-left)/2;

        func2(arr,left,mid);
        func2(arr,mid+1,right);

        func1(arr,left,mid,right);
    }
}

void func3(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[10]={4,2,5,6,8,9,1,7,3,0};
    int size=10;

    func2(arr,0,size-1);

    func3(arr,size);
    return 0;
}

/*
初始: [4,2,5,6,8,9,1,7,3,0]
第一次拆分: [4,2,5,6,8] 和 [9,1,7,3,0]
继续拆分:
  [4,2,5] 和 [6,8]
  [4,2] 和 [5]
  [4] 和 [2] ← 最小单元

  
1. 合并 [4] 和 [2] → [2,4]
2. 合并 [2,4] 和 [5] → [2,4,5]
3. 合并 [6] 和 [8] → [6,8]
4. 合并 [2,4,5] 和 [6,8] → [2,4,5,6,8]

右半部分同样过程:
5. 合并 [9,1,7,3,0] → [0,1,3,7,9]

最后:
6. 合并 [2,4,5,6,8] 和 [0,1,3,7,9] → [0,1,2,3,4,5,6,7,8,9]
*/