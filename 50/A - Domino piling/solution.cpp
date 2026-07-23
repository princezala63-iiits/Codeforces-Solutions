#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int totalBox = m * n;
    int answer = totalBox / 2;
    cout << answer;
    // Ex :- 1.     m = 1, n = 1, totalBox = 1 ---> ans = 1 / 2 = 0
    //       2.     m = 2, n = 1, totalBox = 2 ---> ans = 2 / 2 = 1
    //       3.     m = 3, n = 1, totalBox = 3 ---> ans = 3 / 2 = 1
    //       4.     m = 4, n = 1, totalBox = 4 ---> ans = 4 / 2 = 2
    //       5.     m = 2, n = 2, totalBox = 4 ---> ans = 4 / 2 = 2
    //       6.     m = 5, n = 1, totalBox = 5 ---> ans = 5 / 2 = 2
 
    return 0;
}