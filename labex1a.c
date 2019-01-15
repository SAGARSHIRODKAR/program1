#include<stdio.h>
void binary(int);
int i=0,bin[20];
int main()
{
 int n,j;
 printf("Enter the number : ");// taking number whose binary equivalent is to be found
 scanf("%d",&n);
 binary(n);//function call in the main function
 printf("\nThe binary equivalent of %d is : ",n);//displaying the binary eqwuivalent of the number
 for(j=0;j<i;j++)
  {
   printf("%d",bin[j]);
  }
 }
 void binary(int n)//recursive function to calculate binary equivalent of the number
  {
   if(n==0)//base condition
   {
    return;
   }
    binary(n/2);//recursive call
    bin[i]=n%2;
    i++;
  }
