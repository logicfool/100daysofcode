#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%i",&n);
    int m[n];
    int i;
    //int back[n];
    for(i = 0;i< n;i++){
        scanf("%i",&m[i]);
        //cout << m[i];
    }
        reverse(m, m + n); 
        for(int i=0;i<n;i++){
            cout << m[i] <<' ';
        }
    return 0;
}
