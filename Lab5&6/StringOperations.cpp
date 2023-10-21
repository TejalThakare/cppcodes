#include<iostream>
using namespace std;
void length(char*);
void compare(char*,char*);
void concate(char*,char*);
void copy(char *, char *);

int main()
{
	char str1[20];
	cout<<"Enter the string:"<<endl;
	gets(str1);
	char str2[20];
	cout<<"Enter the string2:";
	char str3[20];
	gets(str2);
	length(str1);
	compare(str1,str2);
	concate(str1,str2);
	copy(str3,str1);
	return 0;
}
void length(char*str1)
{
	int j=0;
	while(str1[j]!='\0')
	{
	j++;	
	}
	cout<<"Length of"<<str1<<"="<<j;
	
}
void compare(char* p,char* q)
{
	int dissimilar=0;
	int i=0;
	while(p [i]!= '\0')
	{
		if(p[i] != q[i])
		{
			dissimilar += 1;
		}
		i++;
	}
	
	if(dissimilar== 0)
	{
		cout<<"\nEqual";
	}
	else
	{
		cout<<"\nnot Equal";
	}
}
	
void concate(char*str1,char* str2)
	{
		int i=0;
		int j=0;
		while(str1[i]!='\0')
		{
			i++;
		}
		while(str2[j]!='\0')
		{
			str1[i]=str2[j];
			i++;
			j++;
		}
		cout<<"\nConcanated string is: "<<str1;
	}

void copy(char*str1,char* str3){
    while(*str1!='\0'){
    	*str3=*str1;
    	str1++;
    	str3++;
	}
    *str3='\0';
		cout<<"\ncopy string is: "<<*str3;

}
