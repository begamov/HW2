#include <iostream>
using namespace std;
int main() {
    int w,r;
    cin>>w>>r;
    if(w==1) {
        cout<<"Bus";
    }
    else if(w==0 && r==0) {
        cout<<"Bike";
    }
    else {
        cout<<"Walk";
    }
    return 0;
}