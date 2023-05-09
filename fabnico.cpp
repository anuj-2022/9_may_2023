#include <iostream>

using namespace std;

int main() 
{
    int n, f= 0, s = 1, next;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Fibonacci series up to " << n << ":\n";
    cout << f << " " << s << " ";
    for (int i = 3; i <= n; i++) {
        next = f + s;
        
        cout << next << " ";
        f = s;
        s = next;
    }
    cout << endl;
    return 0;
}
