#include <iostream>
using namespace std;
class test{
    
	int roll_no=123;
	
};
class test1{
	
};
int main(){
	try{
		throw test();
	}
	catch(test t){
		cout<<"caught exception Test !"<<endl;
		
	}
	try{
		throw test1();
	}
	catch(test1 t){
		cout<<"caught exception test2 !"<<endl;
	}
	return 0;
}
