#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

vector<string> curr_tag;
map<string,string> hrml;

vector<string> split (string s, string delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;

    while ((pos_end = s.find (delimiter, pos_start)) != string::npos) {
        token = s.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back (token);
    }

    res.push_back (s.substr (pos_start));
    return res;
}

void solvetags(){
    string line;
    vector<string> curr_line;
    getline(cin,line);
        //cout << "tookinput";
        //cin >> line;
        //cout << line;
        string enddelim = "</";
        string startdelim = "<";
        string enddelim1 = ">";
        if (line.find(enddelim)!= string::npos){
            curr_tag.pop_back();
        } 
        else{
            string seperated = line.substr(line.find(startdelim)+1,line.find(enddelim1)-1); //length-1 as it is a start tag so it mush for sure have a closing tag > and -1 will just ignore that and give us the middle content
            replace( seperated.begin(), seperated.end(), '=', ' '); // replace '=' with ' '
            //replace( seperated.begin(), seperated.end(), '>', ' '); // replace '=' with ' '
            vector<string> split1 = split(seperated," ");
            cout << split1.size() -1 << endl;
            for(int jj = 0;jj<split1.size();jj++){
                cout << jj << ":" << split1[jj];
            }
            curr_tag.push_back(split1[0]);
            int j = 0;
            
            while(j<split1.size()-1){
                //cout << j << endl;
                if (j!=0){
                    string key = split1[j];
                    string value = split1[j+1];
                    value.erase(remove(value.begin(), value.end(), '"'), value.end());
                    string map_key;
                    for(auto vv:curr_tag){
                        map_key+=vv;
                        if(vv != curr_tag[-1]){
                            map_key+=".";
                        }
                    }
                    map_key+="~"+key;
                    hrml.insert(make_pair(map_key,value));
                    cout << "Key " << map_key << endl << "Value : "<<value << endl;
                    j+=2;
                }
                else{
                j++;
                }
            }

        }

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int inputs,quer;
    cin >> inputs >> quer;
    //cout << inputs << endl << quer << endl;
    for(int i = 0;i<inputs;i++){
    solvetags();
    }

    return 0;
}
/*  */