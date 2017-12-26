/*************************************************************************
	> File Name: maopao.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月18日 星期一 22时22分31秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,temp;
    int a[5]={9,12,8,15,1};
    int length = 5;
    for(i=0;i<5-1;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
