/*************************************************************************
	> File Name: 17-12-11-04.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月11日 星期一 15时00分33秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m;
    int i;
    char x,y;
     int year;
    int temp[12]={31,28,31,30,31,30,31,30,30,30,31,31};
    int day,month;
    while(cin>>year>>x>>month>>y>>day)
    {
        m=0;
        temp[1]=28;
        if(year%4==0&&year%100!=0||year%400==0)
        temp[1]=29;
        for(i=1;i<month;i++)
        {
            m+=temp[i-1];

        }
        m+=day;
        printf("%d\n",m);

    }
}

