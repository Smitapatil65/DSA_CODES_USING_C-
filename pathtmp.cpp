#include<iostream>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;

int judge(int n,vector<vector<int>>&trust)
{
  vector<int>data(n+1,0);
  for(auto x:trust)
  {
      data[x[0]]++;
      data[x[1]]--;
  }
  for(int i=1;i<=n;i++)
  {
      if(data[i]==n-1)
        return i;
  }
    return -1;
}

int main()
{
    int n=4;
    vector<vector<int>>trust={{1,3},{1,4},{2,3},{2,4},{4,3}};
    cout<<"Town Judge is="<<judge(n,trust);
    return 0;
}
