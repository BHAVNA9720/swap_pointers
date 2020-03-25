//Pointer Program to swap 2 numbers without using 3rd variable
#include <iostream>  
using namespace std;  
int main()  
{       int a=20,b=10,*P1=&a,*P2=&b;    
        cout<<"Before swap: *P1="<<*P1<<" *P2="<<*P2<<endl;   
		*P1=*P1+*P2;    
        *P2=*P1-*P2;    
        *P1=*P1-*P2;    
        cout<<"After swap: *P1="<<*P1<<" *P2="<<*P2<<endl;    
         return 0;  
}  
