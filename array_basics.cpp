#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    /*
    int A[10] = {2,4,5,6,8};
    
    cout << sizeof(A) <<endl;
    cout << A[1] << endl;
    printf("%d\n", A[2]);

    for (int i=0; i<10; i++) // for i in range
    {
        cout << A[i] << endl;
    }

    for (int x:A) // for each loop
    {
        cout << x << endl;
    }
    */

    int n;
    cout << "Enter size: ";
    cin >> n;

    int A[n];
    A[0] = 2;
    
    for(int x:A)
    {
        cout << x << endl;
    }


    return 0;
}

