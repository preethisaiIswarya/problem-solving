
#include <stdio.h>

void decToBinary(int n)
{
    
    int binaryNum[32];
 
    
    int i = 0;
    while (n > 0) {
      
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
   
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}
 

int main()
{
    int n;
   printf("enter decimal number:");
   scanf("%d",&n);
    decToBinary(n);
    return 0;
}







