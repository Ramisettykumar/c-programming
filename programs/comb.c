#include<stdio.h>
int c(int n,int r)
{
	if(r==0 ||n==r)
		return 1;
	else
		return(c(n-1,r-1)+c(n-1,r));
}
int main()
{
	int n=5,r=3;
	printf("%d\n",c(n,r));
}
