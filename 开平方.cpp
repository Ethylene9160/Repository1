#include <stdio.h>
int main()
{
	double n,a,m;
	int b;
	printf("Enter a number:");
	scanf("%lf",&m);
	for(n=0.0f;;n=n+0.0001f){
	a=n*n-m;
	if(a>=0.0f)
	break;}
	b=n*10000;
	if (b%10!=5)
	printf("sqrt of it is: %.3f\n",n);
    else printf("sqrt of it is: %.3f\n",n-0.0001f);
	return 0;
}
