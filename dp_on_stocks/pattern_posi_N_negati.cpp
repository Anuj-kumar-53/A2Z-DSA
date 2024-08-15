// + - + - + -;
// when we dont know positive is more or negative....
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>posi;
    vector<int> nega;
    for(int i=0;i<n;i++){
        if(arr[i]> 0){
            posi.push_back(arr[i]);
        }
        else{
            nega.push_back(arr[i]);
        }
    }

    if(posi.size()> nega.size()){
        for(int i=0;i<nega.size();i++){
            arr[i*2] = posi[i];
            arr[i*2+1] =nega[i];
        }
    int index = 2* nega.size();
    for(int i= index;i<posi.size();i++){
        arr[index] = posi[i];
    }
    }
    else{
        for(int i=0;i<posi.size();i++){
            arr[2*i] = posi[i];
            arr[2*i+1] =nega[i];
        }
        int index = posi.size()*2;
        for(int i=0;i<nega.size();i++){
            arr[index] = nega[i];
        }
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}





/*#include<bits/stdc++.h>
using namespace std;
// this is for having the same number of positive n negative
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans[n];
    int posi = 0;
    int nega = 1;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            ans[nega] = arr[i];
            nega += 2; 
        }
        else{
            ans[posi]= arr[i];
            posi +=2;
        }


    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
*/