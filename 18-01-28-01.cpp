/*************************************************************************
	> File Name: 18-01-28-01.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年01月28日 星期日 22时09分45秒
 ************************************************************************/
#include<vector>
#include<iostream>
using namespace std;
class Solution{
    public:
    bool Find(int target,vector<vector<int> > array)
    {
        int Iffind = 0;
        int m = array.size();
        int n = array[0].size();
        int i=0,j=n-1;
      //  while(i>=0&&i<m&&j>=0&&j<n)
        while(i>=0&&j>=0&&i<m)
        {
            if(target==array[i][j])
            {
                return 1;
            }
            if(target<array[i][j])
            j--;
            if(target>array[i][j])
            i++;
        }
        return Iffind;
    }
};
int main()
{
    vector<vector<int> > array = {{1,2,3},{2,3,4},{3,4,5}}; 
    Solution s;
    s.Find(6,array);
    return 0;

}
