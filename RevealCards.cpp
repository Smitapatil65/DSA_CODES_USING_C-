#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<queue>
using namespace std;
vector<int> deckk(vector<int>& deck)
{
    int n=deck.size();
    vector<int>ans(n,0);
    sort(deck.begin(),deck.end());
    queue<int>q;

    for(int i=0;i<n;i++)
        q.push(i);

    for(int i=0;i<n;i++)
    {
        ans[q.front()]=deck[i];
        q.pop();
        q.push(q.front());
        q.pop();
    }
    return ans;
}
int main()
{
    vector<int>v={17,13,11,2,3,5,7};
    vector<int>ans=deckk(v);
    for(auto v:ans)
    {
        cout<<v<<" ";
    }
    cout<<endl;

}



