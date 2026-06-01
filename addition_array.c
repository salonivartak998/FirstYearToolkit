#include <stdio.h>

int main()
{
    int j,a[4]={1,2,3,4},b[4]={1,2,3,4},i,c[4];

    for(i=0;i<4;i++){
        c[i]=a[i]+b[i];
    }

    for(j=0;j<4;j++)
    {
        printf("%d\t",c[j]);
    }

    return 0;
}
