#include <iostream>
using namespace std;
class student
{
	public:
 char name[30];
 int roll;
 float marks;
};

int main()
{

 student s[20], temp;
 int i,j,n;
 
 cout<<"Enter n:\n";
 cin>>n;
 for(i=0;i< n;i++)
 {
  cout<<"Enter name, roll and marks of student:\n";
  cin>>s[i].name>>s[i].roll>>s[i].marks;
 }
 for(i=0;i< n-1;i++)
 {
  for(j=i+1;j< n;j++)
  {
   if(s[i].roll>s[j].roll)
   {
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
   }
  }
 }
 cout<<"Sorted records are:\n";
 for(i=0;i< n;i++)
 {
 	cout<<"Roll:"<<s[i].roll<<endl;
  	cout<<"Name:" <<s[i].name<<endl;
  	cout<<"Marks:"<<s[i].marks<<endl;


 }
 return 0;
}

