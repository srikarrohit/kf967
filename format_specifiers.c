#include<stdio.h>
int main(){
    printf("%x",100);//0-9A-F:16 characters
    //zwyx 16^0*x+16^1*y+16^2*w+16^3*z
    printf("%10.5f",3.14);
    //  3.14000
    char str[5];
    fgets(str,sizeof(str),stdin);
    puts(str);
}

//stack--local variables
//heap--dynamic memory
//global and static -- 2 types of memory, initialized and uninitialized
//program code