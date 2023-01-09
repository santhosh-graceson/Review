#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n;
    printf("Enter the value of n:\t");
    scanf("%d",&n);
    int *a= (int*)(malloc(n*(sizeof(int))));
    for (int i=0;i<n;i++)
    {
        a[i]=a[i+1];
    }
    for (int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}