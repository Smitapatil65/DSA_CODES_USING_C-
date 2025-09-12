#include<iostream>
#include<vector>
using namespace std;
struct p{
  char nm[20];
  int sal;
};
int main()
{
  p p1;
  cout<<"enter nm=";
  cin>>p1.nm;
  cout<<"enter sal=";
  cin>>p1.sal;
  cout<<"emp deatils";
  cout<<p1.nm<<" "<<p1.sal;
  return 0;
}
