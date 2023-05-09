#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
	int i,j,l,n,m,sum=0;
	printf("Please enter the matrix size 2D:\n");
	scanf("%d%d",&n,&m);

	int a[n][m];

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n matrix is ----------------------->>>>>>>>>>>>>>>>\n");
	for(i=0;i<n;i++)
        {
                for(j=0;j<m;j++)
                {
                        printf("%d ",a[i][j]);
                }
		printf("\n");
        }
	
	for(i=0;i<n;i++)
        {
                for(j=0;j<m;j++)
                {
                        sum+=a[i][j];
                }
        }
		printf("Sum is %d",sum);
		
	return 0;
}
