/*************************************************************************
	> File Name: 17-12-07-01.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月07日 星期四 20时55分53秒
 ************************************************************************/

 /******三个字符顺序输出*****/
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    char a,b,c,temp;
    while((a=getchar())!=EOF)
    {
       b=getchar();
        c=getchar();
        getchar();
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        if(a>c)
        {
            temp=a;
            a=c;
            c=temp;
        }
        if(b>c)
        {
            temp=b;
            b=c;
            c=temp;
        }
        printf("%c %c %c\n",a,b,c);
    }
}

