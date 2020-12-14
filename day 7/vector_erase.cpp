#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> vect;
    int inp,temp,firste,range1,range2;
    cin >> inp;
    for(int i=0;i < inp;i++){
        cin >> temp;
        vect.push_back(temp);
    }
    cin >> firste;
    cin >> range1 >> range2;
    vect.erase(vect.begin()+firste-1);
    temp = range1;
    for(temp;temp<range2;temp++){
        vect.erase(vect.begin()+range1-1);
    }
    cout << vect.size() << endl;
    for(int i:vect){
        cout << i << " ";
    }
    return 0;
}
