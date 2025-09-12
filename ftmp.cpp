#include<iostream>
#include<climits>
#include<queue>
#include<vector>
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
    vector<int>y;
    while(!pq.empty())
    {
        y.push_back(pq.top().second);
        pq.pop();
    }
    sort(y.begin(),y.end());
    return y;

}

int main()
{
    vector<int>v={4,3,2,6};
    cout<<"Minimum cost of ropes:"<<cost(v);
    return 0;
}
