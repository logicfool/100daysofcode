#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t_c;
    cin >> t_c;
    int max,rotation;
    for(int i=0;i<t_c;i++){
	
	cin >> max >> rotation;
	//int numbers[max-1];
    vector<int> numbers;
	for(int j=0;j<max;j++){
        int temp;
		cin >> temp;
        numbers.push_back(temp);
		//cout << numbers[i] << endl;
	}
    vector<int> temp1;
    for(int jj = 0;jj<rotation;jj++){
        temp1.push_back(numbers[jj]);
        numbers.erase(numbers.begin()+jj);
        numbers.push_back(temp1[jj]);
        temp1.pop_back();
    }
    for(int ii:numbers){
        cout<< ii<< endl;

    }
    }
  }
