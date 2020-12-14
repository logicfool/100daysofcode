#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the handshake function below.
 */
 
int factorial(int n){
    int sum;
    if (n == 0){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
    sum = n - factorial(n-1);
    return sum;
}
int handshake(int n) {
    /*
     * Write your code here.
     */
     if (n == 0){
         return 0;
     }
     else if (n==1){
         return 0;
     }
     else{
     int total_handshake  = factorial(n)/(factorial(n-2)*factorial(2));
     return total_handshake;
     }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = handshake(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
