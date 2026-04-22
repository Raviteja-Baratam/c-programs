#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter the value of a=");
    scanf("%d",&a);
    printf("enter the value of  b=");
    scanf("%d",&b);
    printf("enter the value of  c=");
    scanf("%d",&c);
     if(a>b&&a>c)
     {
         printf("large value :%d\n",a);
         if(b>c)
         {
             printf("mid value:%d\n",b);
             printf("samll value:%d\n",c);
         }
         else
         {
             printf("mid value:%d\n",c);
             printf("small value:%d\n",b);
         }
     }
          else if(b>c&&b>a)
     {
         printf("large value :%d\n",b);
         if(a>c)
         {
             printf("mid value:%d\n",a);
             printf("samll value:%d\n",c);
         }
         else
         {
             printf("mid value:%d\n",c);
             printf("small value:%d\n",a);
         }
     }
          if(c>a&&c>b)
     {
         printf("large value :%d\n",c);
         if(a>b)
         {
             printf("mid value:%d\n",a);
             printf("samll value:%d\n",b);
         }
         else
         {
             printf("mid value:%d\n",b);
             printf("small value:%d\n",b);
         }
     }
    return 0;
}