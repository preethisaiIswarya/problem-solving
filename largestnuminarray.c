
#include <stdio.h>

int main()
{
    int n;
    printf("enter size:");
    scanf("%d",&n);
    int array[n];
    printf("enter %d elements\n",n);
    for(int i=0;i<n;i++){
    scanf("%d",& array[i]);
    }
    int large=array[0];
    for(int i=0;i<n;i++){
    if(array[i]>large){
        large=array[i];
    }
        
    }
    printf("the largest element of a array is%d",large);
    return 0;

 
}
