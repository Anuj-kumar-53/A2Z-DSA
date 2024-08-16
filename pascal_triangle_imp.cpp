//n^C~r
#include<bits/stdc++.h>
using namespace std;
vector <int> generateRow(int numRow){
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for(int col= 1;col<numRow;col++){
        ans = ans *(numRow - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}
int main(){
    int numRow;
    cout<<"enetr num ROw u want:";
    cin>>numRow;
    vector<vector<int>> final;
    for(int i=0;i<numRow;i++){
        final.push_back(generateRow(i));
    }
    // this is the way how we used to print vectors...
    for(const auto& row: final){
        for(int n: row){
            cout<<n<<" ";
        }
        cout<<endl;
    }
 
}