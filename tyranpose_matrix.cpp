#include <iostream>
using namespace std;

int main()
{
    int a[20][20], transpose[20][20], row, column;
    cout << "Enter row and column" << endl;
    cin >> row >> column;
    cout << "Enter you matrix element" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)  // This part our matrix given by user
        {
            cout << "Enter element of matrix a" << i + 1 << j + 1 << " ";
            cin >> a[i][j];
        }
    }
    cout << "Enter the matrix" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)  //our matrix
        {
            cout <<" "<< a[i][j]; //" " space between row and colun         
             if (j == column - 1)  // reverse the column
                cout << endl
                     << endl;
        }
    }
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < column; ++j)  // our matrix eual to transpose
        {
            transpose[j][i] = a[i][j];
        }

    cout << "Transpose of matrix" << endl;
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)  //This part cnaged to row to column and column to row
        {
            cout << " " << transpose[i][j];  // again sace b/w element
            if (j == row - 1)  // reverse the row
                cout << endl
                     << endl;
        }
    }
    return 0;
}