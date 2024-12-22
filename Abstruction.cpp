#include <iostream>    
using namespace std;    
 class Sum    
{    
//Abstruction
private: int x, y, z; // private variables  
public:    
void add()    
{    
cout<<"Enter two numbers: ";    
cin>>x>>y;    
z= x+y;    
cout<<"Sum of two number is: "<<z<<endl;    
}    
};   
int main()    
{    
Sum ab;    
ab.add();    
return 0;    
}    

