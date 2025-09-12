#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> pas(int n)
{
    vector<vector<int>>ans;

    for(int i=0;i<n;i++)
    {
         long long v=1;
         vector<int> row;
         row.push_back(1);

         for(int c=1;c<=i;c++)
         {
             v=v*(i-c+1)/c;
             row.push_back(v);
         }
        ans.push_back(row);
    }
    return ans;
}
int main()
{
    int n=6;
    vector<vector<int>> ans=pas(n);
    cout<<"[";
    for(size_t i=0;i<ans.size();i++)
    {
         cout<<"[";
         for(size_t j=0;j<ans[i].size();j++)
         {
             cout<<ans[i][j];
             if(j<ans[i].size()-1)cout<<",";
         }
         cout<<"]";
         if(i<ans.size()-1)cout<<",";

    }
   cout << "]" << endl;


    return 0;

}
