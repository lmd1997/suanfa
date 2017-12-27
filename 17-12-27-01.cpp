/*************************************************************************
	> File Name: 17-12-27-01.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月27日 星期三 20时22分48秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100];
    int n,i,Min,Max;
    double sum;
    while(~scanf("%d",&n))
    {
        Min=10000;
        Max=0;
        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
            if(a[i]<Min)
            Min=a[i];
            if(a[i]>Max)
            Max=a[i];            
        }
        sum=sum-Max-Min;
        sum=sum/(n-2);
        printf("%.2lf\n",sum);

    }
    return 0;
}
