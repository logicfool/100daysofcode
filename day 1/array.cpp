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
    for(int v = sizeof(m)-1;v>=0;v--){
        int vv;
        vv = m[v];
        cout << v;
        //printf("%i",&vv);
    }
    return 0;
}

//will continue tomorrow after pratixing more of cpp basics lol thanks 

//So ive today leaned for lopps,if else if ,how to declare arrays,differen data types,pointers(need to know more yet)

//Thanks 