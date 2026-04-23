#include <stdio.h>

int main() {
    int n;
    printf("enter totat number of handshakes");
    scanf("%d",&n);
    int sum=0;
    for(int i=(n-1);i>=1;i--)
    {
        sum=sum+i;
    }
    printf("total handshakes are %d\n",sum);
    return 0;
}