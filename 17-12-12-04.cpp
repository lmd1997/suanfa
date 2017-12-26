/*************************************************************************
	> File Name: 17-12-12-04.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月12日 星期二 17时05分52秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i,m;
    double a,n;
    while(scanf("%lf",&n)==1)
    {
        a=n;
        scanf("%d",&m);
        for(i=1;i<m;i++)
        {
            n=sqrt(n);
            a+=n;
            
        }
        printf("%.2lf\n",a);
    }
    return 0;
}
