#include<iostream>
using namespace std;
class heap{
    public:
    int arr[100];
    int size;
    heap(){
        size = 0;
        arr[0] = -1;
    }
    void insert(int val){
        size += 1;
        int index = size;
        arr[index] = val;
        while(index > 1){
            int parent = index/2;
            if( arr[index]>arr[parent] ){
                swap(arr[index],arr[parent]);
                index = parent;
            }
            else{
                return;
            }
        }
    }
  
};
void heapify(int arr[],int n,int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;
    if(left <= n and arr[left]>arr[largest]){
        largest = left;
    }
    if(right <= n and arr[right]>arr[largest]){
        largest = right;
    }
    if(largest != i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
void heap_sort(int arr[],int size){
    //    for (int i = size / 2; i > 0; i--) {
    //     heapify(arr, size, i);
    // }
   int hold = size;
   while(hold >1){
        swap(arr[1],arr[hold]);
        hold--;
        heapify(arr,hold,1);
   }


}
int main(){
    cout<<"enter the element until negative: ";
    heap obj;
    while(true){
        int n;cin>>n;
        if(n<0) break;
        obj.insert(n);
    }
    // for(int i = (obj.size)/2;i>0;i++){

    //     heapify(obj.arr,obj.size,i);
    // }
    heap_sort(obj.arr,obj.size);
    cout<<"sorted heap: ";
    for(int i=1;i<=obj.size;i++){
        cout<<obj.arr[i]<<" ";
    }
    
}