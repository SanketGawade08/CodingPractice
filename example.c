/*#include<stdio.h>
int main()
{
  printf("hello");
return 0;
}*/

/*#include<stdio.h>
int main()
{
    while('a'>'b')
    printf("malyalam is palindrome\n" );
return 0;
}*/

// #include <stdio.h>
// int main()
// {
//   int i;
//   while (i=10) {
//     printf("%d\n",i);
//     i=i+1;
//
//   }
//   return 0;
// }

#include <stdio.h>
int main()
{
  int x=4,y=0,z;
  while (x>=0)
  {
    x--;
    y++;
    if(x==y)
    continue;
    else
    printf("\n%d %d",x,y);
    /* code */
  }

  return 0;
}
