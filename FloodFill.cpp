#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<vector<int>>&image,int i,int j,int n,int m,int col)
{
    if(i>=0 && j>=0 && i<n && j<m && image[i][j]==col )
        return true;
    return false;
}

void floodfillrec(vector<vector<int>>&image,int i,int j,int n,int m,int col,int newcol)
{
    image[i][j]=newcol;
     if(isValid(image,i+1,j,n,m,col))
        floodfillrec(image,i+1,j,n,m,col,newcol);
     if(isValid(image,i-1,j,n,m,col))
        floodfillrec(image,i-1,j,n,m,col,newcol);
     if(isValid(image,i,j+1,n,m,col))
        floodfillrec(image,i,j+1,n,m,col,newcol);
     if(isValid(image,i,j-1,n,m,col))
        floodfillrec(image,i,j-1,n,m,col,newcol);

}
vector<vector<int>>floodfill(vector<vector<int>>&image,int sr,int sc,int newcol)
{
    int n=image.size();
    int m=image[0].size();
    int col=image[sr][sc];
    if(col==newcol)
        return image;
    floodfillrec(image,sr,sc,n,m,col,newcol);
    return image;

}
int main()
{
    vector<vector<int>>image={
    {1,1,1},
    {1,1,0},
    {1,0,1}
    };

    int sr=1,sc=1,newcol=2;
    vector<vector<int>>res=floodfill(image,sr,sc,newcol);
    for (auto r:res)
    {
        for(int v:r)
        {
            cout<<v<<" ";
        }
        cout<<endl;
    }
    return 0;
}








