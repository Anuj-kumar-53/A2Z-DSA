#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int m;cin>>m;
    int matrix[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    vector <int> ans;
    int left = 0; // column
    int top =0; // row
    int right = m-1; // column
    int bottom = n-1;// row part..
    while(top <= bottom && right >= left){
        //right
        for(int i=left;i<=right;i++){
            ans.push_back(matrix[top][i]);
        }top++;
        for(int i=top;i<=bottom;i++){
            ans.push_back(matrix[i][right]);
        }right--;
        if(top<=bottom){
            for(int i=right;i>= left;i--){
                ans.push_back(matrix[bottom][i]);
            }
        }bottom--;
        if(left<= right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
        }left++;

    }
    int index= 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[index++]<<" ";

        }
        cout<<endl;
    }


}