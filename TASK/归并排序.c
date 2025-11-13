#include<stdio.h>
#include<stdlib.h>

void func1(int arr[],int left,int mid,int right){
    int i,j,k;
    int n1=mid-left+1;
    int n2=right-mid;

    int* L=(int*)malloc(n1*sizeof(int));
    int* R=(int*)malloc(n2*sizeof(int));

    for(i=0;i<n1;i++){
        L[i]=arr[left+i];
    }
    for(j=0;j<n2;j++){
        R[j]=arr[mid+1+j];
    }

    i=0;
    j=0;
    k=left;

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