#include <stdio.h>
void func();//prototyping
int add(int *x,int *y){//200,300//pass by reference
    *x=*y;//dereferencing x,y
    return *x+*y;
}
int add1(int x, int y){//pass by value
    //copies of a and b are initialized
    x=y;
    return x+y;
}
int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
//fib(5)->fib(4)+fib(3)
//fib(4)->fib(3)+fib(2)
//fib(3)->fib(2)+fib(1)
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    func();
    int a=3;//200, 3->4
    int b=4;//300
    printf("%d\n",add1(a,b));
    printf("%d %d\n",a,b);
    printf("%d\n",add(&a,&b));
    printf("%d %d\n",a,b);
    printf("%d\n",fib(5));
    printf("%d",fact(5));
    return 0;
}
void func(){
    printf("I'm a function\n");
}

//fibanacci series
//0,1,1,2,3,5
//fib[n]=fib[n-1]+fib[n-2]

//fact(5)=5*4*3*2*1
//fact(5)=5*fact(4)
//fact(n)=n*fact(n-1)