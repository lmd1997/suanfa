/*************************************************************************
	> File Name: 18-01-02-01.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月02日 星期二 21时57分44秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    int temp,i,n,j,b;
    int a[200];
    while(scanf("%d",&n)&&(n!=0))
    {
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
            temp=0;
            for(j=1;j<n;j++)
            {
                if(a[j]<a[temp])
                temp=j;
            }
            if(temp!=0)
            {
                b=a[0];
                a[0]=a[temp];
                a[temp]=b;
            }
        for(i=0;i<n;i++)
        {
            if(i==0)
            printf("%d",a[i]);
            else
            printf(" %d",a[i]);
        }
        printf("\n");
    }
    return 0;
}
