#include <stdio.h>
int func(){
    return 1;
}
int main(){
    func();
    int i=0;
    loop:
        printf("%d",i);
        i++;
        if(i<5){
            goto loop;
        }
    return 0;
}
//break
//continue
//goto