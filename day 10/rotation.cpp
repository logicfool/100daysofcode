#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(){
    int t_c;
    cin >> t_c;
    int n,k;
    for(int i=0;i<t_c;i++){
	
	cin >> n >> k;
    //vector<int> numbers;
    int numbers[n];
	for(int j=0;j<n;j++){
        cin >> numbers[j];
	}
    //k%=n;
    int temp1;
    for(int jj = 0;jj<n;jj++){
        temp1 = (jj+(n-k))%n;
        cout << numbers[temp1] << " ";
    }
    }
    return 0;
  }

