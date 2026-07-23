#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = 0;
    char ch1, ch2, ch3;
    for (int i = 0; i < n; i++)
    {
        cin >> ch1 >> ch2 >> ch3;
        if (ch1 == '+' || ch2 == '+' || ch3 == '+') // Operation given for ++
            x++;
        else // Operation given for --
            x--;
    }
    cout << x;
    return 0;
}