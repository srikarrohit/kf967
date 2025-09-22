#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>
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
typedef struct{
    int sum;
    double avg;
}output;
output calc(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    double avg=(double)sum/size;
    output out;
    out.sum=sum;
    out.avg=avg;
    return out;
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
struct Person{
    int age;
    char name[20];
};
typedef struct{
    int age;
    char name[20];
}Dog;
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
    struct Person person1;
    person1.age=20;
    strcpy(person1.name,"Srikar");
    printf("\n%s",person1.name);
    Dog dog1;
    dog1.age=3;
    strcpy(dog1.name,"Snoofy");
    printf("\n%s",dog1.name);
    int size=sizeof(arr)/sizeof(int);
    output ans=calc(arr,size);
    printf("\n%d %f",ans.sum,ans.avg);
    struct Person *structptr=&person1;
    printf("\n%s",structptr->name);
    struct Person *heapmem=malloc(sizeof(struct Person));
    strcpy(heapmem->name,"test");
    printf("\n%s",heapmem->name);
    struct Person *heapmemarr=malloc(5*sizeof(struct Person));
    strcpy(heapmem[0].name,"test1");
    printf("\n%s",heapmem[0].name);
    //0 0 0 1 1 2 3. build an array with these numbers as indices and
    // put the occurence in the array container
    //0 - 3
    //1 - 2
    //2 - 1
    //3 - 1
    int in_arr[]={0,0,0,1,1,2,3};
    int in_size=sizeof(in_arr)/sizeof(int);
    //printf("\n%d",in_size);
    int out_size=max(in_arr,in_size)+1;
    //printf("\n%d",out_size);
    int *out_arr=calloc(out_size+1,sizeof(int));
    for(int i=0;i<in_size;i++){
        out_arr[in_arr[i]]++;
    }
    printf("\n");
    for(int i=0;i<out_size;i++){
        printf("%d %d\n",i,out_arr[i]);
    }
}