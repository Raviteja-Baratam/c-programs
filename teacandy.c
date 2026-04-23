#include <stdio.h>
int main() 
{
    int tea,candy;
    printf("%d%d",&tea,&candy);
    if(tea<5||candy>5)
    {
        printf("bad=0");
    }
    else if(tea>=2*candy||candy>=2*tea)
    {
        printf("great=2");
    }
    else
    {
        printf("good");
    }
    return 0;