#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
vector<vector<int>> insert(vector<vector<int>>&intervals,vector<int>newin)
{
    vector<vector<int>> ans;
    for(auto& ci:intervals)
    {
        if(ci[1]<newin[0])
        {
            ans.push_back(ci);
        }else if(newin[1]<ci[0])
        {
            ans.push_back(newin);
            newin=ci;
        }else{
        newin[0]=min(ci[0],newin[0]);
        newin[1]=max(ci[1],newin[1]);
        }

    }
    ans.push_back(newin);
    return ans;

}
int main()
{
    vector<vector<int>>a={{1,2},{3,5},{6,7},{8,10},{12,16}};
    vector<int>b={4,8};

    vector<vector<int>>c=insert(a,b);
    for(const auto&i:c)
    {
        cout<<"["<<i[0]<<","<<i[1]<<"]";

    }
    cout<<endl;
    return 0;
}







