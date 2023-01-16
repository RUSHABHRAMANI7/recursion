#include <iostream>
using namespace std;
void TOH(int n, char A, char B, char C) /* THIS PROBLEM HELPS US TO SOLVE THE TOWER OF HANOI PROBLEM */
{
    if (n == 1)
    {
        cout << " 1 from " << A << " to " << C << endl;
        return;
    }

    TOH(n - 1, A, C, B);
    cout << " " << n << " from " << A << " to " << C << endl;
    TOH(n - 1, B, A, C);
}
int main()
{
    int n;
    cout << " Enter the size of the tower of hanoi " << endl;
    cin >> n;
    char A = 'A';
    char B = 'B';
    char C = 'C';
    cout << " The steps are : " << endl;
    TOH(n, A, B, C);
}