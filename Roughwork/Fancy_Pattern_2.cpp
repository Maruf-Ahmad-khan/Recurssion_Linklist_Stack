#include <iostream>
using namespace std;
int main()
{
     int n;
     cout << "Enter n :" << endl;
     cin >> n;
     for (int row = 0; row < n; row++)
     {
          for (int col = 0; col < n - row; col++)
          {
               cout << " ";
          }
          for (int col = 0; col < row + 1; col++)
          {
               cout << row + 1;
               if (col != row)
                    cout << "*";
          }
          cout << endl;
     }
     return 0;
}