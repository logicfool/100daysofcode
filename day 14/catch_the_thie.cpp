#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,x,y,k,n;
    cin >> t;
    while(t--){
        cin >>x >> y >> k >> n;
        int caught = 0;
        int steps = 0;
        while(caught==0){
            if (steps<=n*4){
            if (x+ k <=n ){
                if (x-k>=0){
                    int randindex = rand()%2;
                    if (randindex){
                        x--;
                    }
                    else{
                        x++;
                    }
                }
                else{
                    x++;
                }
                }
            else{
                x--;
            }

            if (y+ k <=n ){
                if (y-k>=0){
                    int randindex = rand()%2;
                    if (randindex){
                        y--;
                    }
                    else{
                        y++;
                    }
                }
                else{
                    y++;
                }
                }
            else{
                y--;
            }
            if(x == y){
                caught = 1;
                cout << "YES" << endl;
            }
            steps++;       
            }
        else{
        caught =1;
        cout << "NO" << endl;
    }
    }
    }
    
    return 0;
}