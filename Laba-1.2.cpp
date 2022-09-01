#include <iostream>
using namespace std;

int main()
{
    short n, m;

    cin >> n >> m;
    cout << n++ - m << endl;
    cout << (m-- >n) << endl;
    cout << (n-- >m) << endl;
}