#define _CRT_SECURE_NO_WARINGS 1
#include<stdio.h>
int main()//转义字符-\,\x后面分别跟着八进制，十六进制数转义对应ASCII中的字符
{//字符 1、2、3、a、b、c 对应的 ASCII 码的八进制形式分别是 61、62、63、141、142、143，
 //十六进制形式分别是 31、32、33、61、62、63
	char a = '\61';
	char b = '\x32';
	char *c = "\61\62\63\x61\x62\x63";//可以连续运用形成字符串
	printf("%c","%c","%s" ,a, b,c);
	return 0;
}