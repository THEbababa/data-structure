#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100

typedef struct sq 
{
	int data[MAXSIZE];
	int last;
}Seqlist; 
 
int main()
{
	int m,n=0;
	printf("请输入人数:"); 
	scanf("%d", &m);
	printf("请输入第几个人扔下去:");
	scanf("%d", &n);

	int arr[100]={0};
	for(int i=0;i<=m-1;i++)
	{
		arr[i]=1;
	}
	int a=0;
	int b=0;
		for(int j=0;j<=m-1;j++)
		{
			if(arr[j]==1)
			{
				a++;
			}
			if(a==n)
			{
				arr[j]=0;
				b++;
				a=0; 
			}
			if(b==m-n+1)
			{
				break;
			}
			if(j==m-1)
			{
				j=-1;
			}
		}
	
	for(int k=0;k<=m-1;k++)
	{
		if(arr[k]==1)
		{
			printf("%d\n",k+1);
		}
	}
	return 0;
}

