#include<stdio.h>
void swap(int *x, int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void bubbleSort(int arr[],int size){
    int i=0;
    while(i<size-1){//n
        for(int j=0;j<size-i-1;j++){//n
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
        i++;
    }
}
int main(){
    int arr[]={8,3,1,2,4,0,7};
    bubbleSort(arr,7);
    for(int i=0;i<7;i++){
        printf("%d\t",arr[i]);
    }
}