/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a[2][2] = {1, 2, 4};

    // cout << a + 1 << endl
    //      << &a[1][0] << endl;

    int arr[2][2] = {1, 4};

    cout << (&a[1][0] + 1) << endl
         << &a[1][1] << endl;

    cout << &a[1] << endl
         << &a[1][0];
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // 	cout<<&a<<endl;

    // 	cout<<&a[0][0]<<endl<<&a[1][0]<<endl;

    // 	cout<<(*(&a[1]))[0];

    // 	int temp=10;

    // 	cout<<endl<<*(&temp);

    // 	int arr[]= {1,2,31,4};
    // 	cout<<endl<<&arr<<endl;

    // 	int *p = arr;

    // 	cout<<&*p;

    // 	cout<<endl<<*(&arr)[1];

    return 0;
}