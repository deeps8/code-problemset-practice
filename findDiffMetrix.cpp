#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int res = 0;
    vector<vector<int>> temp,matrix;
    
    matrix = {{1, 2, 1},
          {2, 2, 2},
          {2, 2, 2},
          {1, 2, 3},
          {2, 2, 1}};
    
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
        	cout<<matrix[i][j]<<" ";
            temp[i].push_back(matrix[i][j]);
        }
    }
	
	for(int i=0;i<temp.size();i++){
        for(int j=0;j<temp[0].size();j++){
            cout<<temp[i][j]<<" ";
        }
    }	
	return 0;
}
