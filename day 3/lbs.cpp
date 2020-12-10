#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <chrono> 
#include <vector>
using namespace std;

int main(){
    vector<int> v; 
    int num,num1,temp_num;
    cin >> num;
    for(int i=0;i<num;i++){
        cin >> temp_num;
        v.push_back(temp_num);
    }
    cin >> num1;
    int num2;
    for(int i=0;i<num1;i++){
        cin >> num2;
        vector<int>::iterator low = lower_bound(v.begin(),v.end(),num2);
        if(v[low - v.begin()] == num2){
            cout << "Yes " << (low - v.begin()+1) << endl;
        }
        else{
            cout << "No " << (low - v.begin()+1) << endl;
        }

    }
    
return 0;
}
