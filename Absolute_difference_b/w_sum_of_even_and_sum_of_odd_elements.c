#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,arr[100],e=0,o=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            e=e+arr[i];        
        }
        else
        {
            o=o+arr[i];
        }
    }
    sum=abs(o-e);
    printf("%d",sum);
}