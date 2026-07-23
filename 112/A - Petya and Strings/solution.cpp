// 'a' = 97, 'z' = 122
// 'A' = 65, 'Z' = 90
// We can convert all Capitals in Small alphabet by adding 32.
// Ex :-    'A' + 32 = 'a'
 
#include <iostream>
using namespace std;
void smallMaker(char *ch)
{
    if (*ch >= 97) // Means it can be only small aphabet.
        return;
    else // Means it is capital alphabet.
    {
        *ch = *ch + 32;
    }
    return;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    bool isSame=true;
    // Note :- Length of s1 = Length of s2 is given.
    for (int i = 0; i < s1.length(); i++)
    {
        smallMaker(&s1[i]);
        smallMaker(&s2[i]);
 
        if (s1[i] == s2[i]) // Bcz we check from first to last letter in given string.
            continue;       // And both have same letter at same place that we can't say anything.
            // So we continue to next letter directy by ignoring code below.
 
        // Now this code runs only when both alphabets are different.
        isSame=false; // Also we can definetely say that both strings are not same.
        // Now we are checking from left side of strings, so string which have bigger alphabet initially...
        // in left side is always lexicographically greater. 
        if (s1[i] < s2[i]) // Means s2 have bigger alphabet at starting.
            cout << -1;    // So s2 is lexicographic greater string.
        else               // Means s1 have bigger alphabet at starting.
            cout << 1;     // So s1 is lexicographic greater string.
        break;
    }
    if(isSame==true)
        cout<<0;
    return 0;
}