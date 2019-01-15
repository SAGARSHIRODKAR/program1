#include<stdio.h>
#include<math.h>
void binary(int);
int decimal(int);
int bin[20],dec[20],count=0,count2=0;
const int max=20;
int main()
{
 int n,i,c,h;
 printf("Choose the conversion \n1) Decimal to binary\n2)binary to decimal\n");
 printf("Enter your choice");
 scanf("%d",&c);
 switch(c)
 {
  case 1 :
          printf("Enter the number whose binary equivalent is to be found : ");
          scanf("%d",&n);
          binary(n);
          printf("\nThe binary equivqlent is : ");
          for(i=0;i<count;i++)
          {
           printf("%d",bin[i]);
          }
          break;
  case 2 :
          printf("Enter the Binary number : ");
          scanf("%d",&n);
          h=decimal(n);
          printf("\nThe decimal equivalent of %d",n);
          printf("\tis %d",h);
          break;
 default : printf("Enter a valid option");
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


int decimal(int num)
{
 int n,num2=0,sum=1,rem;
 n=num;
 while(n>0)
 {
  rem=n%10;
  num2=num2+rem*sum;
  n=n/10;
  sum=sum*2;
 }
return num2;
}

