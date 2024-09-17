#include <iostream>
using namespace std;
int main() {
    long int x;
    cin>>x;
    if (x=<2147483647 && x=>-2147483647) {
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
    return 0;
}
