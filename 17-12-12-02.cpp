/*************************************************************************
	> File Name: 17-12-12-02.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月12日 星期二 21时11分27秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdlib.h>
#include<stdio.h>
int main()
{

    int m,n,a,b,temp,i;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        if(m>n)
        {
            temp=m;
            m=n;
            n=temp;

        }
        a=0,b=0;
        for(i=m;i<=n;i++)
        {
            if(i%2==0)
            a+=i*i;
            else
            b+=i*i*i;

        }
        printf("%d %d\n",a,b);
    }

    return 0;
}
