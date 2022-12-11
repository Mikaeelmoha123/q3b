#include <iostream>

using namespace std;
int max(int, int, int);
int max(int a, int b, int c)
{
    int maxNum;
    maxNum = a, b, c;
    return maxNum;
}
int main()
{
    int a, b, c;
    cout << "Enter the numbers \n";
    cin >> a;
    cin >> b;
    cin >> c;
    if (a >= b && a >= c)
    {
        cout << "The max number is " << a << endl;
    }
    else if (b >= a && b >= c)
    {
        cout << "The max number is " << b << endl;
    }
    else if (c >= a && c >= b)
    {
        cout << "The max number is " << c << endl;
    }
    return 0;
}
