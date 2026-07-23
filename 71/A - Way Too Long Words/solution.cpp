#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        if (str.length() > 10) // If word is too long
        {
            int mid_char = str.length() - 2;                             // No. of Character present between 1st and last characters.
            cout << str[0] << mid_char << str[str.length() - 1] << endl; // ans = 1st + mid_char + last Print and enter
        }
        else                     // If word is short
            cout << str << endl; // Just print and enter.
    }
 
    return 0;
}