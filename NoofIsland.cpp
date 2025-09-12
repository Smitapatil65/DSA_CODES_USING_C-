#include<iostream>
#include<vector>
using namespace std;

bool isvalid(int i,int j,int n,int m,vector<vector<char>>&grid)
{
    if(i>=0 && i<n&&j>=0&&j<m&&grid[i][j]=='1')
        return true;
    return false;
}

void numislandrec(int i,int j,int n,int m,vector<vector<char>>& grid)
{
    grid[i][j]='0';
    if(isvalid(i+1,j,n,m,grid))
        numislandrec(i+1,j,n,m,grid);

    if(isvalid(i-1,j,n,m,grid))
        numislandrec(i-1,j,n,m,grid);

    if(isvalid(i,j+1,n,m,grid))
        numislandrec(i,j+1,n,m,grid);

    if(isvalid(i,j-1,n,m,grid))
        numislandrec(i,j-1,n,m,grid);
}

int numisland(vector<vector<char>>& grid)
{
    int n=grid.size();
    int m=grid[0].size();
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {   if(grid[i][j]=='1')
            {
              ans++;
              numislandrec(i,j,n,m,grid);
            }
        }
    }
    return ans;
}
int main()
{
    vector<vector<char>>grid={
    {'1','1','0','0','0'},
    {'1','1','0','0','0'},
    {'0','0','1','0','0'},
    {'0','0','0','1','1'}
    };
    int res=numisland(grid);
    cout<<"Number of island:"<<res<<endl;
    return 0;
}








