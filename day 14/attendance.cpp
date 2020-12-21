#include <bits/stdc++.h>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdint>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int days,temp;
        cin>>days;
        int present = 120-days;
        //cout << present << endl;
        while(days--){
            scanf("%1d", &temp);
            if (temp == 1 ){
                present++;
                //cout << present;
            }
        }
        //float perc = (static_cast<int>(present)/120)*100;
        //cout << present << endl;
        double perc = ((double)present)/120;
        perc = perc*100;
        //cout << perc << endl;
        if (perc >= 75.00){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}