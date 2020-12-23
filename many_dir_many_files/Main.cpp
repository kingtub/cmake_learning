#include<iostream>
#include<string>

#include"import_src/A.hpp"

using namespace std;

int main(int argc, const char **argv)
{
    if(argc < 4)
    {
        cout<<"Error, use like this:mathFun multi 2 3"<<endl;
        return 1;
    }
    
    string s = argv[1];
    
    double d1 = stod(argv[2]);
    double d2 = stod(argv[3]);
    
    double r = -1;
    if(s == "multi") {
       r = tmp::multi(d1, d2);
    } else if(s == "devide") {
       r = tmp::devide(d1, d2);
    } else if(s == "minus") {
       r = tmp::minus(d1, d2);
    } else if(s == "add") {
       r = tmp::add(d1, d2);
    } else {
       cout<<"bad param:"<<argv[1]<<endl;
    }
    
    cout<<"Result is "<<r<<endl;
    return 0;
}
