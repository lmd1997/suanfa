/*************************************************************************
	> File Name: zhijiecharu.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月18日 星期一 22时33分20秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int temp;
    int a[5]={32,1,6,23,2};
    int length = 5;
    int i,j;
    for(i=1;i<5;i++)
    {
        if(a[i]<a[i-1])
        {
            temp=a[i];
            for(j=i-1;a[j]>temp;j--)
            {
                a[j+1]=a[j];
            }
            a[j+1]=temp;
        }
    }

    for(i=0;i<5;i++)
    printf("%d ",a[i]);
    return 0;
}

