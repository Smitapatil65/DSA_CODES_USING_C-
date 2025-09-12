#include <iostream>
#include <vector>

using namespace std;

void setze(vector<vector<int>> &a)
{
    bool fr=false,fc=false;
    int r=a.size();
    int c=a[0].size();
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]==0)
            {
                if(i==0) fr=true;
                if(j==0) fc=true;
                a[0][j]=0;
                a[i][0]=0;
            }
        }
    }






}
