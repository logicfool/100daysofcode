#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//has some issues test cases few of them failed will look in this on day 3

int main() {
    int max_n,num_oi;
    cin >> max_n;
    int arr[max_n];
    
    for(int i=0;i<max_n;i++){
        cin >> arr[i];
    }

    cin >> num_oi;
    int indexes[num_oi];
    for(int i=0;i<num_oi;i++){
        cin >> indexes[i];
    }
    for(int i=0;i<num_oi;i++){
        int lbs,numm,last_num=0,num_found = 0;
        numm = indexes[i];
        /*lbs = lower_bound(0,max_n,numm);
        cout*/
        for(int j=0;j<max_n;j++){
            if(num_found == 0){
            int numm1 = arr[j];
            if(numm==numm1){
                cout << "Yes " << j+1 << endl;
                num_found = 1;
            }
            else if(last_num>numm){
                cout << "No " << j << endl;
                num_found = 1;
            }
            else{
                last_num = numm1;
            }
        }
    }
  }
    return 0;
}
