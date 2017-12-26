/*************************************************************************
	> File Name: 17-12-11-01.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月11日 星期一 11时43分03秒
 ************************************************************************/
 #define PI 3.1415927
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
    double r,V;
    while((scanf("%lf",&r))!=EOF)
    {
    getchar();
    V=(PI*r*r*r*4)/3;
    printf("%.3lf\n",V);
}
}

