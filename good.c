#include<stdio.h>
int main()
{
    int n,i,j,m,count=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {count=0;
        for(j=1;j<=n;j++)
        {
            for(m=1;m<=n;m++)
            {
                if(i==(j*j)+(m*m))
                count++;
            }
        }
        if(count>2)
        printf("%d ",i);
    }
    return 0;
}
