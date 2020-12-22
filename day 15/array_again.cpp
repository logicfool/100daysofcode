
#include <bits/stdc++.h>
using namespace std;

int main(){
	int size,tt;
	vector<int> arr;
	int temp = 0;
    cin >> size;
	for(temp;temp<size;temp++){
		
        cin >> tt;
        arr.push_back(tt);
	}

	for(int i=arr.size()-1;i>=0;i--){
		cout << arr[i] << endl;
	}
	return 0;
}