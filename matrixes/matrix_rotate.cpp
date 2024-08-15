#include<bits/stdc++.h>
using namespace std;
// OPTIMAL SOLUTION
// transpose // reverse work done
int main(){
       int n;cin>>n;
     int m;cin>>m;
     int matrix[n][m];
     for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
             cin>> matrix[i][j];
         }
    }
    ///// transpose of a metrix important...........
       for(int i=0;i<n;i++){
         for(int j=0;j<i;j++){
             swap(matrix[i][j],matrix[j][i]);
         }
    }
    // for(int i=0;i<n;i++){ // in vectors.. we do this..
    //     reverse(matrix[0][i].begin(),matrix[0][i].end());
    // }




     for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
             cout<< matrix[j][i]<<" ";
         }
         cout<<endl;
    }

}





//brute solution it contain extra space so we will go for optimal
// int main(){
//     int n;cin>>n;
//     int m;cin>>m;
//     int matrix[n][m];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>> matrix[i][j];
//         }
//     }
//     int ans[n][m];
//      for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             ans[j][n-1-i] = matrix[i][j];
//         }
//     }

//      for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }