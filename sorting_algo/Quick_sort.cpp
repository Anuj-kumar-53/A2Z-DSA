#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr,int low,int high){
    int pivat= arr[low];
    int i= low;
    int j=high
    while(i<j){
            while (arr[i]<=pivat && i < high-1)
            {
                i++;
            }
            while(arr[j]>pivat && j>= low+1) j--;
                if(i<j) swap(arr[i],arr[j]);
    }
    swap(arrr[low],arr[j])
    return j
}
void qs(vector<int> &arr,int low,int high){
    if(low<high){
        int p_index= partition(arr,low,high);
        qs(arr,low,p_index-1);
        qs(arr,p_index+1,high);
    }
}
vector<int> quick_sort(vecotr<int> &arr){
    qs(arr,0,arr.size() - 1);
    return arr;
}
int main(){
vector<int> arr;
quick_sort(arr[1])

}