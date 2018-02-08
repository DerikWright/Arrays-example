// Arrays-example.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int derik[5] = {1,2,3,4,5};

	//The lline below will not work 
	//cout << derik

	//this line will work. Remember that the computer starts at 0, so the location of 3 will print 4.
		cout << derik[3] << endl;

		
    return 0;
}

