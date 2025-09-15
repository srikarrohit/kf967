// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main() {
    int x=3;
    double y=x;//implicit
    printf("%f\n",y);
    printf("%f\n",(float)x);//explicit
    int arr[5];//i want to resize
    int *ptrint=arr;//stack memory
    //ptrint=realloc(ptrint,10*sizeof(int));//heap memory only
    printf("%p\n",(void*)&arr[0]);
    printf("%p\n",ptrint);
    int *ptr=calloc(10,sizeof(int));//dynamic memory on heap
    //calloc is used for initializing the memory=0
    printf("%p\n",ptr);
    printf("%d\n",*ptr);
    ptr=realloc(ptr,20*sizeof(int));
    
    

    return 0;
}