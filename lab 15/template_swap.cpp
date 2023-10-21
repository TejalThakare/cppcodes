#include <iostream>
using namespace std;

template <class T>


	T swap_number(T& a,T& b){

    T t;
    t=a;
    a=b;
    b=t;
    return 0;
	
}


int main(){
//	demo <int>d1;
	int x=10;
	int y=60;
	cout<<"values before swapping  "<<x<<" "<<y<<endl;
	
 	swap_number(x,y);
	cout<<"values after swapping  "<<x<<" "<<y<<endl;
	return 0;
}

