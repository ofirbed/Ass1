#include "Environment.h"
#include <iostream>
// ... You may not change this file

unsigned int verbose = 0;

int main(int , char **) {
	//Environment env;
	//env.start();
	string path = "hi/gj/kdj/nv 1234";
	int index= path.find_first_of(' ');

	string a = path.substr(0,index-1);
	string b = path.substr(index+1,9);
	int fileSize = atoi(b.c_str());
	std::cout << a + "jj"+b;
	std::cout<<index;
	std::cout<<path.size()-4;

	return 0;

}
