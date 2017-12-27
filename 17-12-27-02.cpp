/*************************************************************************
	> File Name: 17-12-27-02.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月27日 星期三 20时37分15秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int sum,temp;
    int n,m,a,b,i,j;
    while(scanf("%d %d",&n,&m)==2)
    {
        temp=2;
        a=n/m;
        b=n%m;
        for(i=0;i<a;i++)
        {
            sum=0;
            for(j=0;j<m;j++)
            {
                sum+=temp;
                temp+=2;
            }
            if(i!=0)
                printf(" ");
                printf("%d",sum/m);
            if(b!=0)
            {
                sum=0;
                for(i=0;i<b;i++)
                {
                    sum+=temp;
                    temp=temp+2;
                }
                printf(" ");
                printf("%d",sum/b);
            }
        }
        printf("\n");
    }
}
