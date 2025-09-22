#include <stdio.h>
int primarydiagsum(int arr[4][4], int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i][i];
    }
    return sum;
}
int secdiagsum(int arr[4][4], int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i][size-1-i];
    }
    return sum;
}
void incrementrow(int arr[4][4],int row,int size){
    for(int j=0;j<size;j++){
        arr[row][j]++;
    }
}
int sumofelements(int arr[4][4], int size){
    int sum=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            sum+=arr[i][j];
        }
    }
    return sum;
}
int main(){
    int array2d[3][4];
    //we can scan and read the elements from io
    int array2d1[4][4]={{1,2,3,4},{5,6,7,10},{8,9,10,11},{8,9,10,11}};
    //2d matrix with 3 rows and 4 columns
    //diagonal sum--primary diagonal
    int size=sizeof(array2d1)/sizeof(array2d1[0]);
    printf("%d\n",size);
    printf("%d\n",primarydiagsum(array2d1,size));
    printf("%d\n",secdiagsum(array2d1,size));
    //row as input, increment by 1 that entire row
    int rowtobeincrement;
    //printf("Enter row to be incremented:");
    //scanf("%d",&rowtobeincrement);
    //incrementrow(array2d1,rowtobeincrement,size);
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("%d\t",array2d1[i][j]);
        }
        printf("\n");
    }
    //find sum of all elements in 2d array
    printf("%d\n",sumofelements(array2d1,size));
}