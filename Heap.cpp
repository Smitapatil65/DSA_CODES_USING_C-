#include<iostream>
#include<vector>
using namespace std;
class MinHeap
{
    int *arr;
    int size;
    int capacity;
    public:
    MinHeap(int c)
    {

        size=0;
        capacity=c;
        arr=new int[capacity];
    }

    int left(int i){return (2*i+1);}
    int right(int i){return (2*i+2);}
    int parent(int i) {return ((i-1)/2);}

    void insert(int x)
    {
        if(size==capacity){
            cout<<"Full";
            return;
        }
        size++;
        int i=size-1;
        arr[i]=x;
        while(i!=0 && arr[parent(i)]>arr[i])
        {
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
         }

    }

    void printH()
    {
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void printBH()
    {
        cout<<"Heap in Tree form:\n";
        int level=0;
        int iol=1;
        int i=0;
        while(i<size)
        {
            for(int j=0;j<iol && i<size;j++,i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
            level++;
            iol*=2;
        }

    }
    ~MinHeap()
    {
        delete[]arr;
    }

};

int main()
{
    MinHeap h(10);
    h.insert(5);
    h.insert(3);
    h.insert(8);
    h.insert(1);
    h.insert(6);

    cout<<"Heap element:";
    h.printH();
    h.printBH();


}







