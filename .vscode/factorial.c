#include<stdio.h>
int fact(int n);
int main(){
   int n;
   printf("Enter a number :");
   scanf("%d",&n);
   printf("factorial of n is = %d ",fact(n));
}
int fact (int n){
   if(n==1){                                             
      return 1;
   }
    int factNM1=fact(n-1);
    int factN = factNM1*n;
    return factN;
}
