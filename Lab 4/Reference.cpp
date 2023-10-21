#include <iostream>  
using namespace std;  
int main()  
{  
int a=9;   
int b=10;   
swap(a, b); 
cout << "value of a is :" <<a<< endl;  
cout << "value of b is :" <<b<< endl;  
return 0;  
}  
void swap(int &p, int &q) // function definition  
{  
int temp;  
temp=p;  
p=q;  
q=temp;  
}  
