/*************************************************************************
	> File Name: 18-02-05-01.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年02月05日 星期一 20时16分50秒
 ************************************************************************/
 #include<malloc.h>
#include<stdio.h>
#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};

struct Node *phead;

void createlist(int n)
{
    struct Node *temp=NULL;
    int i;
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            struct Node *a = new Node;
            scanf("%d",&a->data);
            phead=a;
            a->next=NULL;
            temp=phead;
        }
        else
        {
            struct Node *a=new Node();
            scanf("%d",&a->data);
            temp->next=a;
            temp=a;
            a->next=NULL;

        }
    }
}
    

int show()
{
    struct Node *temp=NULL;
    temp=phead;
    
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    
    }
    return 0;
    
}

int main()
{
  //  struct Node *phead;
    int n;
    scanf("%d",&n);
    createlist(n);
    show();
}
