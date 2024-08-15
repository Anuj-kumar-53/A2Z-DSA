#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n;
    cin>>m;
    int matrix[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>> matrix[i][j];
        }
    }
    int row[n] = {0};
    int col[m] = {0};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]== 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i] or col[j] ){
                matrix[i][j] = 0;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


}