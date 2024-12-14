
#include <iostream>
using namespace std;

// 1st pattern:
/*
 ****
 ****
 ****
 */

void pattern1(int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// 2nd pattern:
/*
 *
 **
 ***
 */

void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// 3rd pattern:
/*
    1
    12
    123
*/

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j, "\t";
        }
        cout << endl;
    }
}

// 4th pattern:
/*
    1
    22
    333
*/

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

// 5th pattern:
/*
 ****
 ***
 **
 *
 */

// formula for reverse patterns: (n-i+1)
void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i + 1; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// 6th pattern:
/*
    12345
    1234
    12
    1
*/

// formula for reverse patterns: (n-i+1)
void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > n - (n - i); j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// 7th pattern:
/*
 *
 ***
 *****
 */

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i * 2 + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

// 7th pattern:
/*
 *****
 ***
 *
 */

void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n-(n-i); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2*n-(2*i+1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j <= n-(n-i); j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    pattern8(n);
    return 0;
}