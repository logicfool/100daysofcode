/* I dont know the core dumped error willl find a solution later trying another perspectiveam a noob  
int main() {
    // Complete the code.
    int a,b;
    string nums[] = {{"nine","odd"},{"one","odd"},{"two","even"},{"three","odd"},{"four","even"},{"five","odd"},{"six","even"},{"seven","odd"},{"eight","even"}};
    scanf("%d",&a);
    scanf("%d",&b);
    for (int c;c<=b;c++){
        if(c==a || c==b){
           string numm;
           string num;
           string typee;
           if(c>9){
               numm = nums[0];
               num = numm[0];
               typee = numm[1];
           }
           else{
              numm = nums[c];
               num = numm[0];
               typee = numm[1];
           }
           printf("%s",num);
         printf("%s",typee);
    }
    }
    return 0;
}*/

//Hello Guys Welcome to my Youtube Channel I am starting out with my 100 days challenge and will record everything as I move ahead... each day so lets begin
//I am planning to learn and expertise in C++ as i've always tended to use python but lets try something new :-)
//Lets get to hackerank and get started i've already solved some challenges so that we'll skip and also pardon me i am noob in C++ so ill be googling thats what devs do Haha
//SO basically we get 2 numbers and we have to check if it is smaller then 9 and if it is print it's alphabet form and check if its even or odd and if it's greater then nine just print nine and odd lets move
#include <iostream>
#include <cstdio>
using namespace std;
/*int main(){
    int a,b; //declaring 2 integers to move on
    string nums[] = {"one","two","three","four","five","six","seven","eight","nine"}; //array consisting all alphabets
    scanf("%i",&a); //taking input classic style using scanf
    scanf("%i",&b);
    for (int c=0;c<=b;c++){ //for loop begining as we saw in the condition a is smaller then b so we can define c as a...
        if(c==a || c==b){
            if(c<=9){ //if c is smaller then 9
                cout << nums[c-1]+"\n"; // this will print the alphabetical letter from the array and as index starts form 0 we use c-1
            }
            else{
                printf("nine\n");
            }
        
    }

}
for (int c=0;c<=b;c++){ 
    if(c==a || c==b){
        if(c<=9){
            if (c%2 == 0){
                        printf("even\n"); 
                    }
            else{
                        printf("odd\n");
                    }
        }
        
        else{
            printf("odd\n");
    }
    }
}


return 0;
}
*/

int main(){
    int a,b;
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
string num[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
cin >> a >> b;
for (int i = a; i <= b; ++i) {
    if (i > 9) {
        i % 2 == 0 ? cout << "even\n" : cout << "odd\n";
    } else {
        cout << num[i] << endl;
    }        
}    
return 0;
}

//this goes in a loop i thought nly the given numbers should workk okie got it huh i am such a noob lol time for next test