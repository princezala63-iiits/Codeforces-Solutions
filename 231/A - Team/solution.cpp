#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int written_soln = 0;
    int petya = 0, vasya = 0, tonya = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> petya;
        cin >> vasya;
        cin >> tonya;
        int sum = petya + vasya + tonya;
        if (sum >= 2)       // Means if atleast 2 frinds are sure.
            written_soln++; // then they write solution.
    }
    cout << written_soln;
    return 0;
}