#include<stdio.h>
#include<windows.h>
#pragma comment (lib,"User32.lib")        //���������Ϊ�����õ���MessageBox��������ʾ������ʱ����User32.lib

#include"test.h"                          //������̬��.lib��ͷ�ļ�
#pragma comment(lib,"test.lib")           //����þ�̬.lib��

int WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow)
{
	int i=0;
	i=add(3,4);                          //ֱ��ʹ����.lib��һ����Ŀ�еĺ�����
	if(i==17)
		MessageBox(NULL,TEXT("RIGHT"),TEXT("RIGHT"),MB_OK);
	else
		MessageBox(NULL,TEXT("error"),TEXT("error"),MB_OK);

   return 0;
}

