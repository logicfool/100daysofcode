#include <iostream> 
#include <vector> 
  
using namespace std;
/*  
int main() 
{ 
    std::vector<int> g; 
    for (int i = 1; i <= 6; i++) 
        g.push_back(i);
    for(int i=0;i<g.size();i++){
        std::cout << g[i];
    }

}*/

int main(){
    int noofa,ques;
    vector<vector<int>> vec;
    cin >> noofa >> ques;
    for(int i=0;i<noofa;i++){
        vector<int> g;
        int num;
        cin >> num;
        for(int j=0;j<num;j++){
            int temp_num;
            cin >> temp_num;
            //cout << "Numbb " << temp_num << "\n"; 
            g.push_back(temp_num);
        }
        vec.push_back(g);
    }
    //cout << "Am here";
    for(int i=1;i<=ques;i++){
        int vec_index,arr_index;
        cin >> vec_index >> arr_index;
        cout << vec[vec_index][arr_index] << endl;
    }
    return 0;
}


