// we have to allote one book to atleast one student.
// we have to allote the min pages possible ..
// in contigious manner..
#include<bits/stdc++.h>
using namespace std;
int countstudent(int arr[],int pages,int n){
    int student =1,totalpage = 0;
    for(int i=0;i<n;i++){
        if(totalpage+arr[i]<=pages){
            totalpage += arr[i];
        }
        else{
            student++;
            totalpage = arr[i];
        }
    }
    return student;
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low = *max_element(arr,arr+n); // stores the max element in an array..
    int high = accumulate(arr,arr+n,0); // sum all the array n stores the value.
    int m;
    cout<<"no of student in which u want to allote books : ";
    cin>>m;
    while(low<=high){
        int mid = (low+high)/2;
        int totalstu = countstudent(arr,mid,n);
        if(totalstu> m) low = mid+1; 
        else{
            high = mid-1; //the conditions are <= or  we can directly use else..
        }
    }
    cout<<"total no of pages per student:" <<low; 
    return 0;
}