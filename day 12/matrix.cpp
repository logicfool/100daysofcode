#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int matrix[21][21];

int main(){
    int t;
    cin >> t;
    while(t--){
        int count = 0;
        int m;
        cin >> m;
        for (int i=0;i<m;i++){
            for (int j=0;j<m;j++){
                cin >> matrix[i][j];
            }
        }
    
    int i,j,x,y;
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            for(x = i;x<m;x++){
                for(y = j;y<m;y++){
                    if (matrix[x][y]<matrix[i][j]){
                    //cout << "matrix" << "[" << x <<"]" << "[" << y <<"] = "<< matrix[x][y] << ":    matrix" << "[" << i <<"]" << "[" << j <<"] = "<< matrix[i][j] << endl;}
                    count++;}
                }
            }
        }
    }
    cout << count <<endl;
    }
}