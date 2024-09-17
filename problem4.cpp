#include <iostream>
using namespace std;
int main() {
    int n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;
    int x = 0;
    if (n1 == n2 || n1 == n3 || n1 == n4)
        x++;
    if (n2 == n3 || n2 == n4)
        x++;
    if (n3 == n4)
        x++;
    cout << x << endl;
    return 0;
}
