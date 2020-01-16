#include<stdio.h>
int min(int m,int n)
{
	if(m<n)
		return m;
	else
		return n;
}
int main()
{
	int m,n,t,count=0;
	printf("Enter the numbers to find the gcd: ");
	scanf("%d%d",&m,&n);
	t=min(m,n);
	while(t!=0)
	{
		if(m%t==0 && n%t==0)
		{
			printf("%d is the gcd of two numbers",t);
			count++;
			printf("\n%d is the counter value\n",count);
			return 0;
		}
		count++;
		t--;
	}
	return 0;
}