#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

map<string,map<string,string>>mydict;
vector<string> currtag;

void dicts(int n){
    //int j = 0;
    //cout <<  line << endl;
    string line,tag,attr;
    vector<map<string,string>> tags; 
    string enddelim = "/";
    string startdelim = "<";
    cin >> line;
    if (line.find(enddelim)!= string::npos){
        cout << "Endldelim" << endl;
    } 
    else{
        if(line.find(startdelim)!= string::npos){
        string seperated = line.substr(line.find(startdelim)+1,line.length());
        cout << seperated <<endl;
        }
    }
    
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    ios_base::sync_with_stdio(false);  
    int inputs,ques;
    string temp_in;
    vector<vector <string>>root;
    cin >> inputs >> ques;
    for(int i=0;i<inputs;i++){
        getline(cin,temp_in);
        dicts(i);
    }
    return 0;
}
