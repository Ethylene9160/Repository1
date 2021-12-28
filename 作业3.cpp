//f(n)函数的定义为0~n中包含的1的个数
//f(13)是0~13中包含1的有 1，10，11，12，13，所以f(13)=6
//f(1) = 1。
//求另一个f(n)=n的n值 
//求另一个f(n)=n的n值
// 2021-11-04 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int f(int n)
{
	int x=0;
	char a[100];
	for(int i=0;i<=n;i++)
	{
		sprintf(a,"%d",i);
		for(int j=0;j<strlen(a);j++)
		  if(a[j]=='1')
		    x++;
	}
	return x;
}
int main()
{
	for(int i=2;;i++)
	{
	  if(i==f(i))
	  {
	  	printf("%d",i);
	  	break;
	  }
	}	  
}
