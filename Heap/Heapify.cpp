//Heapify: this is used to convert the arr into heap..
#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i){
    int largest =i;
    int left = 2*i;
    int right = 2*i +1;
    if(left <= n and arr[left]>arr[largest]){
        
        largest = left;
    }
    if(right <= n and arr[right] > arr[largest]){
        
        largest = right;
    }
    if(largest != i){
        swap(arr[i],arr[largest]);
     
        heapify(arr,n,largest);
    }

}
int main(){
    int arr[7] = {-1,34,65,4,32,75,222};
    int n = 6; //wwe didnt considered the first value.
    for(int i = n/2;i>0;i--){
    heapify(arr,n,i);

    }

    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }

   
}