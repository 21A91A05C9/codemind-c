#include<stdio.h>
int main()
{
    int i,n,arr[100],ep=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            ep=ep+arr[i];
        }
    }
    printf("%d",ep);
}