#include<iostream>
#include<vector>
using namespace std;
int rot(vector<int>arr,int t)
{
    int n=arr.size();
    int l=0,h=n-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(arr[mid]==t) return mid;

        if(arr[l]<=arr[mid])
        {
            if(arr[l]<=t && t<arr[mid])
            {
                h=mid+1;
            }else{
            l=mid-1;
            }

        }else{
        if(arr[mid]<t && t<=arr[h]){
            l=mid+1;
        }else{
        h=mid-1;
        }
        }
    }
    return -1;
}
int main()
{
    vector<int> arr={7,8,9,1,2,3,4,5,6};
    int t=0;
    int r=rot(arr,t);
    if(r!=-1){
        cout<<"ele at index"<<r<<endl;
    }else{
    cout<<"not found";
    }
    return 0;
}
