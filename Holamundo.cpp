#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include<string>
using namespace std;

int main()
{
	string str = "Hola mundo!";
    std::string::iterator it;
    std::string::reverse_iterator it1;



    for (it=str.begin(); it!=str.end(); it++)
    cout << *it;
    cout << endl;


    for (it1=str.rbegin(); it1!=str.rend(); it1++)
    cout << *it1;
    cout << endl;

    return 0;
}
