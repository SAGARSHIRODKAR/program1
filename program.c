#include<stdio.h>
void binary(int);
int bin[20],count=0;
const int max=20;
int main()
{
int n,i;
printf("Enter the number whose binary equivalent is to be found : ");
scanf("%d",&n);
binary(n);
printf("\nThe binary equivqlent is : ");
for(i=0;i<count;i++)
{
printf("%d",bin[i]);
}
}
void binary(int n)
{
if(n==0)
{
return;
}
binary(n/2);
bin[count]=n%2;
count++;
}
