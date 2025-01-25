#include <stdio.h>
int f(int n){
    if(n==0){
    return 1;
    }
    return n*f(n-1);
}
int main(){
    int num=10;
    printf("result:%d\n",f(num));
    return 0;
}
