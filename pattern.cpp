#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    // for (int i = 0; i < n * 2; i++)
    // {
    //     if (i < 5)
    //     {
    //         for (int j = 0; j < i; j++)
    //         {
    //             cout << "*";
    //         }
    //     }
    //     else
    //     {
    //         for (int j = 0; j < 2 * n - i; j++)
    //         {
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = 1; j < n; j++)
    //     {
    //         if (j >= n - i)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }

    //     cout << endl;
    // }

    // pyramid
    //  for (int i = 0; i < n; i++)
    //  {
    //      for (int j = 0; j < n - i - 1; j++)
    //      {
    //          cout << " ";
    //      }

    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    // inverted pyramid
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    // Hollow pyramid
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }

    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         if (j == 0 || j == i)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }

    //     cout << endl;
    // }

    // Hollow inverted pyramid
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < n - i; j++)
        {
            if (j == 0 || j == n - i - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}
