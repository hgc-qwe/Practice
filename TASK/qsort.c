#include<stdio.h>
#include<stdlib.h>

int compare(const void* a,const void* b){
    return *(int*)a-*(int*)b;   //a和b交换则为降序
}

int main(){
    int arr[10]={3,5,6,2,8,0,1,7,9,4};

    qsort(arr,10,sizeof(int),compare);

    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
/*
int compare(const void* a, const void* b) {
    int ia = *(const int*)a;
    int ib = *(const int*)b;
    if (ia < ib) return -1;
    if (ia > ib) return 1;
    return 0;
}
*/

/*
int compare_float(const void* a, const void* b) {
    float fa = *(const float*)a;
    float fb = *(const float*)b;
    if (fa < fb) return -1;
    if (fa > fb) return 1;
    return 0;
}
*/

/*
int compare_string(const void* a, const void* b) {
    return strcmp(*(const char**)a, *(const char**)b);
}
*/