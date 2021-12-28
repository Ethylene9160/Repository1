#include <stdio.h>
int is_prime(long long n)
{
	if(n<=1)
	  return 0;
	for(int i=2;i*i<=n;i++)
	  if(n%i==0)
	    return 0;
	return 1;  
}
long long power(long long x,long long n)
{
  return n == 0 ? 1 : x * power(x,n-1); 	
}
int main()
{
	for(long long p=2;p<=100;p++)
	  for(long long q=2;q<=100;q++)
	    if(is_prime(power(p,q)+power(q,p)))
	      printf("p=%lld q=%lld\n",p,q);
}
