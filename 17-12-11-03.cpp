/*************************************************************************
	> File Name: 17-12-11-03.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年12月11日 星期一 14时42分38秒
 ************************************************************************/

#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>
int main()
{
    double sorce;
    while(scanf("%lf",&sorce)!=EOF)
    {
        if(sorce>=90&&sorce<=100)
        printf("A\n");
        else if(sorce>=80&&sorce<=89)
        printf("B\n");
        else if(sorce>=70&&sorce<=79)
        printf("C\n");
        else if(sorce>=60&&sorce<=69)
        printf("D\n");
        else if(sorce>=0&&sorce<=59)
        printf("E\n");
        else
        printf("Score is error!\n");
        
    }

}
