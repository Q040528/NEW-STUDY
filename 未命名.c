# include <stdio.h>
int main()
{
	int n=1,m=1,i=1,sum=0;
	while(n<11)
	{
		 while(i<=n)
		{
			m=m*i;
			i++;
		}
		printf("n�Ľ׳�Ϊ��%d\n",m);
		sum+=m;
		n++;	 
	} 
        printf("10�Ľ׳˺�Ϊ��%d\n",sum);   
}
