#include <stdio.h>
#include <stdbool.h>
int main(){
    int age=10;
    bool isCitizen=false;
    if(age>=18){
        if(isCitizen){
            printf("Eligible to vote");
        }
        else{
            printf("Not eligible to vote. Not a citizen");
        }
    }
    else{
        printf("Not eligible to vote. too young");
    }
}