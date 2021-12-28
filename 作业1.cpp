#include <stdio.h>
int is_prime(int n)
{
	int divisor;
	
	if(n<=1)
	  return 0;
	for(divisor=2;divisor*divisor<=n;divisor++)
	  if(n%divisor==0)
	    return 0;
	return 1;    
}

int sum_of_weights(int n)
{
	int lastweight;
	lastweight = n%10;
	n = n / 10;
	
	if(n==0)
	  return lastweight;
	else
	  return lastweight + sum_of_weights(n);
}

int sum_of_square_of_weights(int n)
{
	int lastweight;
	lastweight = n%10;
	n = n / 10;
	
	if(n==0)
	  return lastweight*lastweight;
	else
	  return lastweight*lastweight + sum_of_square_of_weights(n);
}

int main()
{
	int sum,n=0;
	float average;
	printf("Superprime:\n");
	
	for(int i = 100;i<=10000;i++)
	  if(is_prime(i)&&is_prime(sum_of_weights(i))&&
	     is_prime(sum_of_square_of_weights(i)))
	    {
		 sum += i;
		 n++;
	     printf("%d\n",i);
	    }
	    
	 average = (float) sum / n;   
	 printf("Average of them:%f\n",average);   
	 return 0;  
}
