/*************************************************************************
	> File Name: 17-12-11-02.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月11日 星期一 14时35分04秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
int main()
{
    double a;
    while(scanf("%lf",&a)!=EOF)
    {
        getchar();
        if(a>0)
        printf("%.2lf\n",a);
        else
        {
            a=-a;
        printf("%.2lf\n",a);

        }
    }
}

