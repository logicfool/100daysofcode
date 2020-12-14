#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int lowestTriangle(int base, int area){
    // Complete this function
    float base1 = static_cast<float>(base);
    float area1 = static_cast<float>(area);
    float height;
    //float decimal,whole;
    //area = base * height/2
    height = round((area1*2)/base1);
    //whole = floor(height);
    //decimal = height - whole;
    //cout << decimal << endl << endl;
    
    return height;
}

int main() {
    int base;
    int area;
    cin >> base >> area;
    int height = lowestTriangle(base, area);
    cout << height << endl;
    return 0;
}