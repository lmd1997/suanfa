/*************************************************************************
	> File Name: 17-12-07-02.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月07日 星期四 21时10分36秒
 ************************************************************************/
/******计算两点间的距离****/
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    double a,b,c,d;
    double distance;
    while(scanf("%lf%lf%lf%lf",&a,&b,&c,&d)!=EOF)
    {
        getchar();
        distance=sqrt(pow(a-c,2)+pow(b-d,2));
        printf("%.2f\n",distance);

    }
}

