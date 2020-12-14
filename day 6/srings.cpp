#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string first,second;
    //int len;
    cin >> first >> second;
    cout << first.size() <<" " << second.size() << endl;
    string concat = first+second;
    cout << concat << endl;
    char fv = first[0];
    char sv = second[0];
    first[0] = sv;
    second[0] = fv;
    cout << first <<" " << second;
    return 0;
}