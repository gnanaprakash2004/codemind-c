#include<stdio.h>
int main()
{
    int N,i,j,k;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
      for(i=0;i<N;i++)
		{
        for(j=i;j<N;j++)
				{
            if(i!=j)
					{
                if(a[i]==a[j])
							{
                    for( k=j;k<N;k++)
								{
                        a[k]=a[k+1];
                    }
                    N--;
                    j--;
                } 
            }
        }
    }
    int c=0;
    for(i=0;i<N;i++)
    {
        if(a[i]%2!=0)
        {
            c+=a[i];
        }
    }
    printf("%d",c);
}