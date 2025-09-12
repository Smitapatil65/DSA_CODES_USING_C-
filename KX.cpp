#include<iostream>
#include<climits>
#include<queue>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;


vector<int> fn(vector<int>arr,int k,int x)
{
    priority_queue<pair<int,int>>pq;
    for(auto ele:arr)
    {
      pq.push(make_pair(abs(x-ele),ele));
      if(pq.size()>k)
            pq.pop();
    }
    vector<int>v;
    while(!pq.empty())
    {
        v.push_back(pq.top().second);
        pq.pop();
    }
    sort(v.begin(),v.end());
    return v;

}

int main()
{
    vector<int>v={1, 2, 3, 4, 5};
    int k=4 ,x=3;
    vector<int>n=fn(v,k,x);
    for(auto i:n)
        cout<<i<<" ";
    return 0;

}


