//f(n)�����Ķ���Ϊ0~n�а�����1�ĸ���
//f(13)��0~13�а���1���� 1��10��11��12��13������f(13)=6
//f(1) = 1��
//����һ��f(n)=n��nֵ 
//����һ��f(n)=n��nֵ
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
	for(int i=2;i<100000000;i++)
	{
	  if(i==f(i))
	  {
	  	printf("%d",i);
	  	break;
	  }
	}	  
}
