#include <iostream>
using namespace std;
int main() {
    string x;
    float y;
    cin>>x>>y;
    if (x=="M" && y<1.70) {
        cout<<"Short"<<endl;
    }
    else if (x=="M" && y>=1.70 && y<1.85) {
        cout<<"Normal"<<endl;
    }
    else if (x=="M" && y>=1.85) {
        cout<<"Tall"<<endl;
    }
    else if (x=="F" && y<1.60) {
        cout<<"Short"<<endl;
    }
    else if (x=="F" && y>=1.60 & y<1.75) {
        cout<<"Normal"<<endl;
    }
    else if (x=="F" && y>=1.75) {
        cout<<"Tall"<<endl;
    }
    return 0;
}