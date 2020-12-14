#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> vect;
    int inp;
    int temp;
    cin >> inp;
    for(int i=0;i < inp;i++){
        cin >> temp;
        vect.push_back(temp);
    }
    sort(vect.begin(),vect.end());
    for(int i:vect){
        cout << i << " ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
