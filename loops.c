#include <stdio.h>
int main(){
    for(int i=0;i<5;i++){//Known number of iterations
        printf("%d",i);
    }
    //initialization int i=0
    //condition checking i<5
    //running loop body
    //updating the variable i++
    printf("\n");
    int j=0;
    while(1){//Unkwown number of iterations
        printf("%d",j);
        j++;
        if(j==5){
            break;
        }
    }
    int num;
    printf("Enter a number between 1 and 10\n");
    scanf("%d",&num);
    while(num<1 || num>10){
        printf("Invalid input. Please try again\n");
        scanf("%d",&num);
    }
    int k=0;
    do{
       k++;
       printf("%d",k);
    }while(k<5);
    printf("\n");
    for(int i=0;i<10;i++){
        if(i==5){
            continue;
            printf("Im a boy");
        }
        printf("%d",i);
    }
    return 0;
}