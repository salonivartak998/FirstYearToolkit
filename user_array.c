#include<stdio.h>

int main (){
    int a[4],i,j;

    for(i=0;i<4;i++){
        printf("enter the value of index %d:\t",i);
        scanf("%d",&a[i]);
    }

    for(j=0;j<4;j++){
        printf("%d\t",a[j]);
    }

    return 0;
}
