/*************************************************************************
	> File Name: 17-12-12-06.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月12日 星期二 22时16分03秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a,i,x,y,j;
    double total;
    scanf("%d",&n);
    while(n)
    {
            for(i=0;i<n;i++)
            {
                total=0;
                scanf("%d",&x);
                for(j=1;j<=x;j++)
                {
                    if(j%2==0)
                    j=-j;
                    total+=1/j;

                }
            }
        printf("%.2lf\n",total);
    }
    return 0;
}
