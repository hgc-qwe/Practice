#include<stdio.h>

//交换两数
void func1(int* a,int* b){
    int t=*a;
    *a=*b;
    *b=t;
}

//分区函数
int func2(int arr[],int low,int high){
    int pivot=arr[high];  //最后一个元素为基准
    int i=(low-1);

    for(int j=low;j<=high-1;j++){
        if(arr[j]<=pivot){
            i++;
            func1(&arr[i],&arr[j]);  //将小于基准的元素左移
        }
    }

    func1(&arr[i+1],&arr[high]);
    return (i+1);
}

/*
假设数组为 [10, 80, 30, 90, 40, 50, 70]，基准是70：

    i从-1开始，j从0开始遍历

    10≤70：i=0，交换arr[0]和arr[0] → [10, 80, 30, 90, 40, 50, 70]

    80>70：不交换

    30≤70：i=1，交换arr[1]和arr[2] → [10, 30, 80, 90, 40, 50, 70]

    90>70：不交换

    40≤70：i=2，交换arr[2]和arr[4] → [10, 30, 40, 90, 80, 50, 70]

    50≤70：i=3，交换arr[3]和arr[5] → [10, 30, 40, 50, 80, 90, 70]

    最后交换arr[4]和arr[6] → [10, 30, 40, 50, 70, 90, 80]


*/

void func3(int arr[],int low,int high){
    if(low<high){
        int pi=func2(arr,low,high);  //分区，获取基准

        func3(arr,low,pi-1);  //递归排序左边
        func3(arr,pi+1,high); //递归排序右边
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