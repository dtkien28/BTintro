#include <stdio.h>
int main()
{
	int n;
	printf ("\nNhap n=");
	scanf ("%d", &n);
	int s=0;
	for (int i=0; i<=n; i++)
	{
		s=s+i;
	}
	printf ("\nS=%d", s);	
}
