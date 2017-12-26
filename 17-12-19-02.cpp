/*************************************************************************
	> File Name: 17-12-19-02.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月19日 星期二 16时52分07秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,sub;
    int x,y,temp,flag=0;
    while(scanf("%d %d",&x,&y))
{
    if(x==0&&y==0)
    break;

        flag=0;
        if(x>y)
        {
            temp=x;
            x=y;
            y=temp;
        }
        sub=0;
        for(i=x;i<=y;i++)
        {
            sub=i*i+i+41;
            for(j=2;j<sub;j++)
            {
                if(sub%j==0)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        printf("OK\n");
        else
        printf("Sorry\n");
    }
    return 0;
}

