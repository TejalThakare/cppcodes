#include <iostream>
#include <fstream>

using namespace std;
int main()
{
	ofstream File("testFile.txt");
	cout<<"File generated successfully";
	File << "hello good evening sir !!!";
	File.close();
}
