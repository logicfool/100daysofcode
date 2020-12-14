#include<bits/stdc++.h>
#include <ostream>
using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box{
    private:
        int l,b,h;
    public:
        Box(){
            l = 0;b = 0;h=0;
        }
        Box(int l1,int b1,int h1){
            l = l1;
            b = b1;
            h = h1;

        }
        Box(const Box& B){
            h = B.h;
            l = B.l;
            b = B.b;
        }
        int getLength(){
            return l;
        }
        int getBreadth(){
            return b;
        }
        int getHeight(){
            return h;
        }
        int CalculateVolume(){
            int temp;
            temp = l*h*b;
            return (long long)temp;
        }
        friend bool operator < (Box& A,Box&B){
            
            if ((A.l<B.l || ((A.b<B.b && A.l == B.l))) || ((A.h<B.h) && (A.l == B.l) && (A.b == B.b))){
                return true;
            }
            else{
                return false;
            }
        }
        friend ostream& operator<< (ostream& output,const Box& B){
        //Box operator <<(string){
            string temp;
            temp+=to_string(B.l)+" ";
            temp+=to_string(B.b)+" ";
            temp+=to_string(B.h)+" ";
            //stringstream ss(temp);
            output << temp;
            return output;
            //return static_cast < std::ostringstream& >(std::ostringstream() << *this).str();

        }
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout << temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}