#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B:";
    double a,b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
     << "A - B = " << a - b << '\n'
     << "A * B = " << a * b << '\n'
     << "A / B = " << a / b << '\n';
     cout << "min:";
      if (a < b)
        cout << a << '\n';
     else
        cout << b << '\n';
     cout << "max:";
      if (a > b)
        cout << a << '\n';
    else
        cout << b << '\n';
    return 0;
}
