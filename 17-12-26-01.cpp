                 /*************************************************************************
	> File Name: 17-12-26-01.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月26日 星期二 20时26分38秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,sum;
    while(~scanf("%d",&n))
    {
        sum = 1;
        for(i=1;i<n;i++)
        {
            sum = (sum+1)*2;
        }

    printf("%d\n",sum);
    }
    return 0;
}
