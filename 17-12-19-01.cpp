/*************************************************************************
	> File Name: 17-12-19-01.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月19日 星期二 16时29分55秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    float sub;
    int n,i,times;
    float j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sub=0;
        scanf("%d",&times);
        for(j=1;j<=times;j++)
        {
            sub+=1/(pow((-1),(j+1))*j);
        }
        printf("%.2lf\n",sub);
    }
    return 0;
}
