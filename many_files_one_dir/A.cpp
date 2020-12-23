#include"B.h"

#include<iostream>
#include<string>
using namespace std;

int main(int argc, const char **argv)
{
    if(argc < 3)
    {
        cout<<"Error, use like this:multi 2 3"<<endl;
        return 1;
    }
    
    double d1 = stod(argv[1]);
    double d2 = stod(argv[2]);
    double r = multi(d1, d2);
    cout<<"Result is "<<r<<endl;
    return 0;
}
