#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(){
    int t_c;
    cin >> t_c;
    
    while(t_c--){
	int n,k;
	cin >> n >> k;
    //vector<int> numbers;
    int numbers[n];
	for(int j=0;j<n;j++){
        cin >> numbers[j];
	}
    k%=n;
    int temp1;
    for(int j = 0;j<n;j++){
        temp1 = (j+(n-k))%n;
        cout << numbers[temp1] << " ";
    }
    }
    return 0;
  }

