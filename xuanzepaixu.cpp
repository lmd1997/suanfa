/*************************************************************************
	> File Name: xuanzepaixu.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月18日 星期一 20时16分47秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int temp;
    int i,j,m,length;
    int a[5]={2,34,56,32,1};
    length=5;
    for(i=0;i<length-1;i++)
    {
        m=i;
        for(j=i+1;j<length;j++)
        {
            if(a[j]<a[m])
            m=j;
        }
        if(m!=i)
        {
            temp=a[i];
            a[i]=a[m];
            a[m]=temp;


    }
    }

    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);

    }
    return 0;
}
