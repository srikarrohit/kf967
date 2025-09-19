#include <stdio.h>
#include <limits.h>
void printEvenIndices(int arr[],int size){
    for(int i=0;i<size;i+=2){
        printf("%d\t",arr[i]);
    }
}
void printEvenNumbers(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            printf("%d\t",arr[i]);
        }
    }
}
int sumOfArray(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int max(int arr[],int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        swap(&arr[start],&arr[end]);
        start++;
        end--;
    }
}
void reverseRecurse(int arr[],int start,int end, int size){
    if(start>=end){
        return;
    }
    swap(&arr[start],&arr[end]);
    reverseRecurse(arr,start+1,end-1,size);
}
int main(){
    int arr[]={5,2,3,6,8,1};
    printEvenIndices(arr,6);
    printf("\n");
    printEvenNumbers(arr,6);
    printf("\n");
    printf("%d\n",sumOfArray(arr,6));
    printf("%d\n",max(arr,6));
    reverse(arr,6);
    for(int i=0;i<6;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
    reverseRecurse(arr,0,5,6);
    for(int i=0;i<6;i++){
        printf("%d\t",arr[i]);
    }
}