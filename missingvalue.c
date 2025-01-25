#include <stdio.h>
int findm(int arr[],int size){
int n=size-1;
int totalsum=n*(n+1)/2;
int arraysum=0;
for(int i=1;i<n;i++){
    
arraysum+=arr[i];

}
return totalsum-arraysum;}
int main()
{
int arr[]={4,1,3,7,8,9,2,5,6};
int n=10;

int missingnumber=findm(arr,n);
printf("the missing number is :%d\n",missingnumber);
    return 0;
}
