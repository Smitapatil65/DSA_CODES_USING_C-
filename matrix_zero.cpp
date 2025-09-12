#include <iostream>
#include <vector>
using namespace std;
void setzero(vector<vector<int>> &m)
{
    bool fr=false ,fc=false;
    int r=m.size();
    int c=m[0].size();
    for(int i=0;i<r;i++)
    {
         for(int j=0;j<c;j++)
        {
            if(m[i][j]==0)
            {
                if(i==0) fr=true;
                if(j==0) fc=true;
                m[0][j]=0;
                m[i][0]=0;
            }

        }

    }
     for(int i=1;i<r;i++)
    {
         for(int j=1;j<c;j++)
        {
           if(m[i][0]==0 || m[0][j]==0)
           {
               m[i][j]=0;
           }

        }
    }

    if(fr){
        for(int j=0;j<c;j++)
        {
            m[0][j]=0;

        }
    }
    if(fc){
        for(int i=0;i<r;i++)
        {
            m[i][0]=0;
        }
    }

}
int main()
{
    int r, c;
    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    vector<vector<int>> m(r,vector<int>(c));

    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> m[i][j];
        }
    }
     setzero(m);
    cout << "Matrix after setting zeroes:" << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

  return 0;

}













