/*************************************************************************
	> File Name: 17-12-12-05.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月12日 星期二 19时39分16秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdlib.h>
#include<stdio.h>
int main()
{
    int waterflour[100];
    int m,n,i,a,b,c,temp,x;
    while(scanf("%d %d",&m,&n)!=EOF)
    {       
        x=0;
        temp=0;
        for(i=m;i<=n;i++)
        {
            a=i/100;
            b=i%100/10;
            c=i%10;
            if(i==a*a*a+b*b*b+c*c*c)
            {
                if(temp==0)
                {
                    printf("%d",i);
                }
                else{
                    printf(" ");
                    printf("%d",i);
                }
                temp=1;
            }        
        }
        if(temp==0)
        cout<<"no";
        cout<<endl;
    }
    return 0;
}
