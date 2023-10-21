#include<iostream>  
#include<vector>  
using namespace std;  
int main()  
{  
    vector<char> v;  
    v.push_back('S');  
    v.push_back('A');  
    v.push_back('U');  
    v.push_back('R'); 
	v.push_back('A');
	v.push_back('B'); 
	v.push_back('H'); 
	cout<<"Push:";
    for(int i=0;i<v.size();i++
	)  
    cout<<v[i];
    cout<<endl;
    
    cout<<"Pop:";
	v.pop_back();  
     for(int i=0;i<=v.size();i++)  
    cout<<v[i];
}  
