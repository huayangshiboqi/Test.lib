#include<stdio.h>
#include<windows.h>
#pragma comment (lib,"User32.lib")        //加这个是因为下面用到了MessageBox函数，表示在链接时链接User32.lib

#include"test.h"                          //包含静态库.lib的头文件
#pragma comment(lib,"test.lib")           //导入该静态.lib库

int WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow)
{
	int i=0;
	i=add(3,4);                          //直接使用了.lib另一个项目中的函数、
	if(i==17)
		MessageBox(NULL,TEXT("RIGHT"),TEXT("RIGHT"),MB_OK);
	else
		MessageBox(NULL,TEXT("error"),TEXT("error"),MB_OK);

   return 0;
}

