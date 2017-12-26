/*************************************************************************
	> File Name: 17-12-12-01.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月12日 星期二 16时28分59秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,a,temp;
    while(scanf("%d",&n)==1)
    {
        a=1;

        for(i=0;i<n;i++)
        {
            scanf("%d",&temp);
            if(temp%2!=0)
            a*=temp;
        }
        printf("%d\n",a);
    }

    return 0;
}
