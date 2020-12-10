#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int total,temp_num,temp_query;
    cin >> total;
    set<int>s;
    for(int i =0;i<total;i++){
        cin >> temp_query >> temp_num;
        if(temp_query == 1){
            s.insert(temp_num);
        }
        else if(temp_query == 2){
            s.erase(temp_num);
        }
        else if(temp_query == 3){
            set<int>::iterator ite = s.find(temp_num);
            if(ite != s.end()){
                cout << "Yes"<<endl;
            } 
            else{
                cout <<"No"<<endl;
            }
        }
    }

}