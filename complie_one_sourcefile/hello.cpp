#include<iostream>

using namespace std;

int main(int argc, const char **argv)
{
    auto i = 0;
    cout<<"You Input "<<argc<<" args:"<<endl;
    for(; i < argc; i++)
    {
       cout<<argv[i]<<endl;
    }
    
    return 0;
}
