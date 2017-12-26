/*************************************************************************
	> File Name: 17-12-12-03.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月12日 星期二 16时54分03秒
 ************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
    int i;
    int n,big,small,zero;
    double temp;
    while((scanf("%d",&n))!=0&&n!=0)
    {
        big=0,small=0,zero=0;
        for(i=0;i<n;i++)
        {
            scanf("%lf",&temp);
            if(temp>0)
            big++;
            else if(temp==0)
            zero++;
            else
            small++;
        }
        printf("%d %d %d\n",small,zero,big);
        
    }
    return 0;
}
