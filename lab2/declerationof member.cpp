#include<iostream>
using namespace std;
class complex
{
	int real,img;
	public:
		void get()
		{
			cout<<"Enter real and img";
			cin>>real>>img;
			
		}
			void put()
		{
			cout<<"Complex no is "<<real<<"+"<<img<<"i"<<endl;
		}
		
			
};

int main()
{
	int n,i;
	cout<<"Accept number of object";
	cin>>n;
	complex * ptr=new complex[n];
	for(int i=0;i<n;i++)
	{
		ptr[i].get();
		
	}
		for(int i=0;i<n;i++)
	{
		ptr[i].put();
		
	}
}
