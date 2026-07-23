// We are given n(no. of participants) and k(any place in leaderbord) in first line input.(Where k<=n always).
// And in second line inputs, We are given Scores in descending order of n participants.
// Now we take score of k-th positioned participant, and participants who scored equal or more than that...
// k-th positioned participant are going in next round. So we find out that how many participants goes to...
// next round.
 
// Ex :-  1st line      n = 8 , k = 3
//        2nd line      Scores ---> 10 9 8 8 8 8 6 2
// So here kth (3rd) position have 8 score. So Participants who get score >= 8 are eligible for next round.
// So answer is 6 [bcz there are 10, 9, 8, 8, 8, 8 participant are eligible]
 
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> vec(50, 0);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        sum += vec[i];
    }
    if (sum == 0)    // Means all participants have 0 score.
        cout << "0"; // So we give answer 0, bcz nobody eligible for next round.
    else
    {
        int cut_off = vec[k - 1];
        int eligible = 0;
        for (int i = 0; i < n; i++)
        {
            if (vec[i] != 0 && vec[i] >= cut_off)
                eligible++;
        }
        cout << eligible;
    }
    return 0;
}