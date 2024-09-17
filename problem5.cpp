#include <iostream>
using namespace std;
int main() {
    float x,z;
    string y;
    cin>>x>>y>>z;
    if (y=="+") {
        cout<<x+z;
    }
    else if (y=="-") {
        cout<<x-z;
    }
    else if (y=="*") {
        cout<<x*z;
    }
    else if (y=="/") {
        if (z==0) {
            cout<<"Invalid";
        }
        cout<<x/z;
    }
    else {
        cout<<"Invalid";
    }
    return 0;
}