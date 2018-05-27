/*#include<stdio.h>
int main()
{
  int num=10;

  int * ptr;
  ptr = &num;


printf("%d\n",num);
printf("%d\n",&num);
printf("%d\n",*ptr);
printf("%d\n",*(&ptr));


return 0;
}*/

#include<stdio.h>
void swap(int *num1,int *num2);
int main()
{
  int num1,num2;
  printf("\nEnter the first number:-");
  scanf("%d",&num1);
  printf("\nEnter the second number:-");
  scanf("%d",&num2);

  printf("before swaping\n");
  printf("first number is%d\n",num1 );
  printf("second number is%d\n",num2 );

  swap(&num1,&num2);
  printf("After swaping in main function\n");
  printf("first number is%d\n",num1 );
  printf("second number is%d\n",num2 );


  return 0;
}
void swap(int *num1 ,int *num2)
{
  int temp;
  temp=*num1;
  *num1=*num2;
  *num2=temp;

  printf("After swaping in swap function\n");
  printf("first number is%d\n",*num1 );
  printf("second number is%d\n",*num2 );
}
