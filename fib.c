#include <stdio.h>
int fib(int n){
if (n==0){
    return 0;
    
}
else if(n==1){
    return 1;}
    else{
    return fib(n-1)+(n-2);
    
    }
}
int main()
{
    int n=5;
    printf("%d",fib(n));
    printf("\n");
    return 0;
}
