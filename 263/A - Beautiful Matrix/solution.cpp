#include <iostream>
using namespace std;
int main()
{
    int row = 1, col = 1; // Bcz index of rows and cols are 1, 2, 3, 4, 5.
    int matrix_element = 0;
    bool isFound = false;
    for (int i = 0; i < 25; i++) // We have 5x5 matrix which have 25 elements.
    {
 
        cin >> matrix_element;   // Take element of that row and col
        if (matrix_element != 0) // If that element is not 0...
        {
            isFound = true; // then we find out our target. So no need to update row and col so we take...
            // only elements as input till 25 inputs are completed but now we don't update row and col.
        }
 
        if (isFound == true) // So if we found our target then we don't update col and row..
            continue;        // For this we continue the loop in next iteration by ignoring below code.
 
        // If target not founded then we go to next element.
        if (col == 5) // Means that row is ended.
        {
            col = 1; // So start from first element...
            row++;   // of next row.
        }
        else       // If current row is not ended.
            col++; // Go ahead in that row.
    }
    // Now we have exact row and col of target.
    int moves = 0; // Needed number of moves to get beautiful target centered matrix.
 
    // Now first for row
    if (3 - row > 0)        // if (3 - row) is positive
        moves += (3 - row); // then we simply add it in needed moves
    else                    // if (3 - row) is negative
        moves += (row - 3); // then we add (row - 3).
    // So at the end this difference is added in moves.
 
    // Now same for column
    if (3 - col > 0)        // if (3 - col) is positive
        moves += (3 - col); // then we simply add it in needed moves
    else                    // if (3 - col) is negative
        moves += (col - 3); // then we add (col - 3).
    // So at the end this difference is added in moves.
 
    cout << moves; // Answer is printed.
 
    return 0;
}