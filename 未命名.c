# include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6,8,9,10,7};
	int x,k,n=0;
	scanf("%d",&k);
	while(n<10)
	{
		if (arr[n]==k)
		{
			printf("%d\n找到了目的数组下标为：%d\n",arr[n],n);
			break;
		}		
		n++;
	}
} 
