#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr[3];
    int a=1, b=2, c=3;
    arr[0]=&a;
    arr[1]=&b;
    arr[2]=&c;
    int arr1[3]={2,3,4};
    int *ptr=arr1;
    //&arr[0]
    //&arr[2]
    printf("%d\n",ptr[2]);
    int **ptr1=&ptr;//allocate size and assign
    printf("%d\n",*ptr1[0]);
    int arr2[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int (*ptr2)[3][4]=&arr2;
    printf("%d\n",(*ptr2)[0][1]);
    int rows=3;
    int cols=4;
    int **ptr3=malloc(rows*sizeof(int *));
    for(int i=0;i<rows;i++){
        ptr3[i]=malloc(cols*sizeof(int));
    }
    int *ptr4=malloc(10*sizeof(int));//define a pointer. it doesn't work for arrays
    *(ptr4+0)=1;
    printf("%d\n",ptr4[0]);
}
//search in a 2d array.
//int arr[2][2]={{0,1},{2,3}}. key=2. Return true/false