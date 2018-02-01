/*************************************************************************
	> File Name: 18-02-01-01.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年02月01日 星期四 14时40分11秒
 ************************************************************************/
/*将字符串中的空格替换成%2018*/
#include<iostream>
using namespace std;
#define MAXSIZE 1024
class Solution{
    public:
    //length:总长度
    void replaceSpace(char *str,int length)
    {
        int i=0;
        //记录空格的数量
        int spacenumber = 0;
        //记录原字符串的长度
        int Oldlength = 0;
        //记录新字符串的长度
        int newlength = 0;
        while(str[i]!='\0')
        {
            Oldlength++;
            if(str[i]== ' ')
            spacenumber++;
            i++;
        }
        newlength = Oldlength+spacenumber*2;
        int tempnew = newlength;
        int tempold = Oldlength;

        while(tempold>=0&&tempnew>tempold)
        {
            if(str[tempold]==' ')
            {
                str[tempnew--]='0';
                str[tempnew--]='2';
                str[tempnew--]='%';
        //        cout<<"sssss"<<endl;
            }
            else
            {
      //          cout<<"yyyyy"<<' '<<tempold<<endl;
    //            cout<<"dddddd"<<' '<<str[tempold]<<endl;
            str[tempnew--]=str[tempold];

  //          cout<<"new"<<' '<<tempnew<<endl;
//            cout<<"old"<<' '<<tempold<<' '<<str[tempold]<<endl;

        }
            tempold--;
        }

    }
};
int main()
{
    int length =MAXSIZE;
    Solution s;
    char str[1024];
    cin.getline(str,20);
    s.replaceSpace(str,length);
    cout<<str<<endl;

}

