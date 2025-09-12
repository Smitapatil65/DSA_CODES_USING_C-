#include<iostream>
#include<vector>
using namespace std;
vector<int> so(vector<vector<int>>& mat)
{
    int n=mat.size();
    int m=mat[0].size();
    int l=0,r=m-1,t=0,b=n-1;
    vector<int>ans;
    while(l<=r && t<=b)
    {
        for(int i=l;i<=r;i++)
        {
            ans.push_back(mat[t][i]);
        }
        t++;
        for(int i=t;i<=b;i++)
        {
            ans.push_back(mat[i][r]);
        }
        r--;
        if(t<=b)
        {
            for(int i=r;i>=l;i--)
            {
                ans.push_back(mat[b][i]);
            }
            b--;
        }
        if(l<=r)
        {
            for(int i=b;i>=t;i--)
            {
                ans.push_back(mat[i][l]);
            }
            l++;
        }

    }
    return ans;
}
int main()
{
     int n, m;
    cout << "Enter the number of rows and columns: ";
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m));
    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    vector<int> result = so(mat);
    cout << "Spiral order traversal of the matrix: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;

}
