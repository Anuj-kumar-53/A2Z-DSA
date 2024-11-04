//HEAP IS COMPLETE NINARY TREE THAT FOLLOWS HEAP ORDER PROPERTY THAT IS:MIN_HEAP OR MAX_HEAP...
//all the below if we implement heap with array....
//THE NODE INDEX IS 1;
//THE LEFT INDEX IS ALWAYS 2*i;
//the right index is always 2*i+1;
//the parent of any node will be (i/2);

// the complexcity of insertion and deletion from a heap is o(logn)......
// INSERTION: .......................
#include<iostream>
using namespace std;
class heap{
    public:
    // int *arr[100];
    // int size;
    // heap(int val){
    //     *arr = new int(val);
    //     size =0;
    // }
    // or we can also do
    int arr[100];
    int size;
    heap(){
        arr[0] = -1;
        size = 0;
    }
    void insert(int val){
        size += 1;
        int index = size;
        arr[index] = val;
        while(index > 1){
            int parent = index/2;
            if(arr[index] > arr[parent]){
                swap(arr[index],arr[parent]);
                index = parent;
            }else
                return;
        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

//deletion has three major steps..here we only delete the starting node..
//step 1: swap the first element with the last and decrease the size..
//step 2: then run the while loop checking with the childers to set in its position in a max heap...
    void deletion(){
        if(size == 0) return;
        arr[1] = arr[size];
        size--;
        int i=1;
        while(i<size){
            int leftchild = 2*i;
            int rightchild =2*i+1;
            if(leftchild<= size and arr[leftchild]>arr[i]){
                swap(arr[leftchild],arr[i]);
                i = leftchild;
            }
            else if(rightchild <= size and arr[rightchild] > arr[i]){
                swap(arr[rightchild],arr[i]);
                i = rightchild;
            }
            else return;
        }
    }
};
int main(){
    heap obj;
    cout<<"Enter the elements until negative: ";
    while(true){
        int n;cin>>n;
        if(n<0){
            break;
        }
        obj.insert(n);
    }
    //inserting externally..
    obj.insert(1000); //making this the topmost element;
    obj.print();
    obj.deletion();
    obj.print();
    return 0;
}
