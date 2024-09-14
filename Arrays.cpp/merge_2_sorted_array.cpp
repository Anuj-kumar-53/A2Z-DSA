#include<bits/stdc++.h>
using namespace std;
int main(){
      int n;cin>>n;
    int m;cin>>m;
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"array2 now";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
     }
     int left = n-1;
     int right = 0;
     while (left>0 && right<m)
     {
        if(arr1[left] > arr2[right]){
        swap(arr1[left],arr2[right]);
        left--;right++;}
        else{
            break;
        }
        
     }
     //sort both the array
     sort(arr1,arr1+n);
     sort(arr2,arr2+n);
      for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";

    }
    cout<<endl;
      for(int i=0;i<m;i++){
        cout<<arr2[i]<<" ";

    }
     

}


// merging two sorted array with the help of third element...
// this code include extra space so will go for the optimal..
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;cin>>n;
//     int m;cin>>m;
//     int arr1[n];
//     int arr2[m];
//     for(int i=0;i<n;i++){
//         cin>>arr1[i];
//     }
//     cout<<"array2 now";
//     for(int i=0;i<m;i++){
//         cin>>arr2[i];
//     }
//     int arr3[n+m];
//     int left = 0;
//     int right = 0;
//     int index =0;
//     while(left<n && right<m){
//         if(arr1[left] <= arr2[right]){
//             arr3[index] = arr1[left];
//             left++;index++;
//         }
//         else{
//             arr3[index] = arr2[right];
//             right++;index++;
//         }
//     }
//     while(left<n){
//         arr3[index] = arr1[left];
//         index++;left++;
//     }
//     while(right < m){
//         arr3[index] = arr2[right];
//             right++;index++;
//     }
//     // inserting back to the array in a sorted manner..
//     for(int i=0;i<n+m;i++){
//         if(i<n) arr1[i] = arr3[i];
//         else arr2[i-n] = arr3[i]; 
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr1[i]<<" ";

//     }
//     cout<<endl;
//       for(int i=0;i<m;i++){
//         cout<<arr2[i]<<" ";

//     }


// }