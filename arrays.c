#include <stdio.h>
#include <stdlib.h>
int linearSearch(int arr[],int key,int size){
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            return i;
        }
    }
    return -1;
}
int binarySearch(int arr[],int size, int key){
    int left=0;
    int right=size-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<=key){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    return -1;
}
int recursiveBinSearch(int arr[],int left,int right,int key){
    if(left>right){
        return -1;
    }
    int mid=(left+right)/2;
    if(arr[mid]==key){
        return mid;
    }else if(arr[mid]<=key){
        return recursiveBinSearch(arr,mid+1,right,key);
    }else{
        return recursiveBinSearch(arr,left,mid-1,key);
    }
}
void insertElement(int array[], int key,int idx,int size,int newArray[]){
    for(int i=0;i<idx;i++){
        newArray[i]=array[i];//0 to idx-1
    }
    newArray[idx]=key;
    for(int i=idx+1;i<size+1;i++){
        newArray[i]=array[i-1];//idx to size-1 for array
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int arr1[5];
    arr1[0]=1;
    arr1[1]=2;
    arr1[2]=3;
    arr1[3]=4;
    arr1[4]=5;
    int sortedarry[]={2,3,5,7,11,13};
    //search in 1 d array
    //
    printf("%d\n",linearSearch(arr,3,5));
    printf("%d\n",binarySearch(sortedarry,6,11));
    int *array=malloc(10*sizeof(int));
    printf("%d\n",recursiveBinSearch(sortedarry,0,5,11));
    int newArr[6];
    insertElement(arr,8,3,5,newArr);
    for(int i=0;i<6;i++){
        printf("%d\t",newArr[i]);
    }
}