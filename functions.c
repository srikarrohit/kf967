#include <stdio.h>
void func();//prototyping
int add(int y,int x){
    return x+y;
}
int main(){
    func();
    printf("%d",add(3,4));
    return 0;
}
void func(){
    printf("I'm a function\n");
}