//选作题
//输入一个字符串，形如
//3072x1728,2720x1536,2560x1600,2560x1440,2304x1728,2048x1536,1920x1200,1920x1080,1440x900,1280x800,1280x720,1024x768,1024x640,800x600,800x500,800x450,640x480,640x400,640x360,480x360,480x300,480x270,320x240,320x200,320x180,240x180,176x144,160x120,160x100,160x90
//这是一个显示器支持的分辨率清单，中间逗号分隔。
//现在输入画面的宽和高，然后在上述清单中挑选一个最接近的分辨率输出
//比如输入2000，1000，输出的分辨率应该是1920x1080，因为其它分辨率的误差更大。
//完成如下程序
// 2021-11-14
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ress[2048][2];
    int x, y,error_value[2048],min=0;
    for(int i=0;i<30;i++)
      scanf("%dx%d,",&ress[i][0],&ress[i][1]);
    scanf("%d %d", &x, &y);
	for(int i=0;i<30;i++)
	  error_value[i]=abs(x*y-ress[i][0]*ress[i][1]);
	for(int i=1;i<30;i++)
	{
	  int u=0;	
      for(int j=0;j<i;j++)
      	if(error_value[i]>error_value[j])
      	  u=1; 
	  if(u==0)
	    min=i;
    }
    printf("选中的分辨率是%dx%d\n",ress[min][0],ress[min][1]);
    return 0;
}
