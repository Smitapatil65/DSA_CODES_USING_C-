#include<iostream>
#include<vector>
using namespace std;

class Heapp
{
    int *arr;
    int size;
    int cap;

public:
     Heapp(int  c)
     {
         size=0;
         cap=c;
         arr=new int[cap];

     }

    int left(int i){return (2*i+1);}
    int right(int i){return (2*i+2);}
    int parent(int i){return ((i-1)/2);}

    void insert(int x)
    {
        if(size==cap)
        {
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
    void MinHeapify(int i)
    {
       int li=left(i),ri=right(i);
       int small=i;
       if(li<size && arr[li]<arr[small])
       {
           small=li;
       }
       if(ri<size && arr[ri]<arr[small])
       {
           small=ri;
       }
       if(small!=i)
       {
           swap(arr[i],arr[small]);
           MinHeapify(small);
       }
    }
    int extractMin()
    {
        if(size==0)return INT_MAX;
        if(size==1){
            size--;
            return arr[0];
        }
        int root=arr[0];
        arr[0]=arr[size-1];
        size--;
        MinHeapify(0);
        return root;

    }
    void decreaseKey(int i,int x)
    {
      arr[i]=x;
      while(i!=0 && arr[parent(i)]>arr[i])
      {
          swap(arr[i],arr[parent(i)]);
          i=parent(i);
      }

    }
    void buildHeap(int ip[],int n)
    {
        if(n>cap)
        {
            cout<<"Too many elements";
            return;
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=ip[i];
        }
        size=n;
        for(int i=(size/2)-1;i>=0;i--)
            MinHeapify(i);
    }
    void heapSort(int arr[],int n)
    {
        for(int i=n-1;i>=1;i--)
        {
            swap(arr[0],arr[i]);
            heapify(arr,i,0);
        }
    }

    ~Heapp()
    {
        delete[]arr;
    }
};

int main()
{
    Heapp h(10);
    h.insert(5);
    h.insert(3);
    h.insert(8);
    h.insert(1);
    h.insert(6);

    cout<<"Heap element:";
    h.printH();
    h.printBH();

    cout << "\nExtracting min: " << h.extractMin() << endl;
    cout << "After extraction: ";
    h.printH();

    h.decreaseKey(2,0);
    cout<<"After:";
    h.printH();

    int d[]={15,15,20,17,25};
    int n=sizeof(d)/sizeof(d[0]);
    Heapp h2(10);
    h2.buildHeap(d,n);
     cout << "\nHeap built from array: ";
    h2.printH();








}







