#include<stdio.h>
int main()
{
    int i,n,arr[100],es=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            es=es+arr[i];
        }
    }
    printf("%d",es);
}