#include<iostream>
#include<queue>
#include<unordered_map>
#include<vector>

using namespace std;

vector<int> che(vector<int>&arr ,int k)
{
    int n=arr.size();
    deque<int>dq;
    vector<int>res;

    for(int i=0;i<k;i++)
    {
        while(!dq.empty() && arr[dq.back()]<=arr[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    for(int i=k;i<n;i++)
    {
        res.push_back(arr[dq.front()]);

        while(!dq.empty() && dq.front()<=i-k)
        {
            dq.pop_front();
        }
        while(!dq.empty() && arr[dq.back()]<=arr[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    res.push_back(arr[dq.front()]);
    return res;
}
int main()
{
    vector<int> a={1,3,-1,-3,5,3,6,7};
    int k=3;
    vector<int>res=che(a,k);
    for(int i:res)
    {
        cout<<i<<" ";
    }
    return 0;

}
