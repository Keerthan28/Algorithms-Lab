#include<stdio.h>
int isPrime(int n)
{
	int i;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int min(int m,int n)
{
	if(m<n)
		return m;
	else
		return n;
}
int main()
{
	int m,n,a[100],b[100];
	printf("Enter the two integers: ");
	scanf("%d%d",&m,&n);
	int g=1,t=0,i=2;
	t=min(m,n);

	while(t!=0)
	{
		while(m%i==0 && n%i==0 && isPrime(i)==1)
		{
			m=m/i;
			n=n/i;
			g=g*i;
		}
		i++;
		t--;
	}
	printf("%d",g);
	printf("\n%d",i-2);
	return 0;
}