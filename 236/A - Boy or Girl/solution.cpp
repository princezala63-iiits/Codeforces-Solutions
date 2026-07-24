#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> checkbox(26, 0); // 26 boxes for 26 alphabets. index 0 for 'a' and 25 for 'b'.
    // When we detect any alphabet first time then we change it's box value from 0 to 1.
    // value 0 means "Not detected", and value 1 means "Detected".
    string name;
    cin >> name;
    int diff_ch = 0;
    for (int i = 0; i < name.length(); i++)
    {
        int chidx = name[i] - 'a'; // chidx = index of that name[i] character in checkbox vector.
        if (checkbox[chidx] == 0)
        {
            checkbox[chidx] = 1;
            diff_ch++;
        }
    }
    if (diff_ch % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}