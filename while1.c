#include<stdio.h>
int main()
{
  int id,sal,hr;
  printf("enter person id= \n");
  scanf("%d",&id);
  printf("enter person sallary= \n");
  scanf("%d",&sal);
  printf("enter person total hr= \n");
  scanf("%d",&hr);

while (hr>40)
{
  printf("%d\n",hr);
  sal=sal+(hr*12);
  /* code */
}
printf("total amnt=%d\n",sal );

  return 0;
}
