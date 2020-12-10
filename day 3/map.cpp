#include <iostream>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

int main(){
    int total,temp_query,temp_num;
    string temp_key;
    map<string,int>m;
    cin >> total;
    for(int i = 0;i<total;i++){
        cin >> temp_query >> temp_key;
        if(temp_query == 1){
            cin >> temp_num;
            //cout << "To insert " << temp_key <<" " << temp_num <<endl;
            int a = m[temp_key];
            int b = a+temp_num;
            m.erase(temp_key);
            m.insert(make_pair(temp_key,b));
            //cout << temp_num;
            /*if (a == 0){
                m.insert(make_pair(temp_key,temp_num));
            }
            else{
                int b = a+temp_num;
                m.erase(temp_key);
                m.insert(make_pair(temp_key,b));
            }*/
                
        }
        else if(temp_query == 2){
            //cout << "To erase " << temp_key <<" " << temp_num <<endl;
            m.erase(temp_key);
        }
        else if(temp_query == 3){
            //map<string,int>::iterator fin = m.find(temp_key);
            cout << m[temp_key] <<endl;
        }
    }
    return 0;
}
