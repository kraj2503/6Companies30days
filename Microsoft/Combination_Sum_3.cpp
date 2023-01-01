#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> result;
void try_comb(vector<int>&combination,int k,int n,int start){
    if(k==combination.size()){
        if(n==0)result.push_back(combination);
        return;
    }
    for(int i=start;i<=9;++i){
        combination.push_back(i);{
            try_comb(combination,k,n-i,i+1);
            combination.pop_back();
        }
    }
}

vector<vector<int>> combinationSum3(int k, int n) {
vector<int> combination;
try_comb(combination,k,n,1);
return result;

}

int main(){

int k=3;
int n=7;

vector<vector<int>> combi=combinationSum3(k,n);

for(int i =0;i<k;i++){
    for(int j=0;j<k;i++){
        cout<<combi[i][j]<<endl;
    }
}

    return 0;
}