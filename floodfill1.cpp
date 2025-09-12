#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<vector<int>>&img,int i,int j,int n,int m,int cl)
{
    if(i>=0 && j>=0 && i<n && j<m && img[i][j]==cl)
        return true;
    return false;

}

void floodfillrec(vector<vector<int>>&img,int i,int j,int n,int m,int cl,int nc)
{
    img[i][j]=nc;
    if(isValid(img,i+1,j,n,m,cl))
        floodfillrec(img,i+1,j,n,m,cl,nc);
    if(isValid(img,i-1,j,n,m,cl))
        floodfillrec(img,i-1,j,n,m,cl,nc);
    if(isValid(img,i,j+1,n,m,cl))
        floodfillrec(img,i,j+1,n,m,cl,nc);
    if(isValid(img,i,j-1,n,m,cl))
        floodfillrec(img,i,j-1,n,m,cl,nc);
}

vector<vector<int>> floodfill(vector<vector<int>>&img,int s,int d,int nc)
{
    int n=img.size();
    int m=img[0].size();
    int cl=img[s][d];

    if(cl==nc)
        return img;

    floodfillrec(img,s,d,n,m,cl,nc);
    return img;

}
int main()
{

    vector<vector<int>>img={
    {1,1,0},
    {1,0,1},
    {1,0,0},
    {1,1,1}
    };
    int s=0,d=0,nc=2;

    vector<vector<int>>ans=floodfill(img,s,d,nc);
    for(auto x :ans)
    {
        for(int i:x)
        {
            cout<<i<<"";
        }
        cout<<endl;
    }
    return 0;

}



