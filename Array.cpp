// Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void missing(int A[], int n)
{
    int  lowerValue = 1;
    int diff = lowerValue - 0;
    for (int i = 0;i < n - 1;i++) {
        if (A[i] - i > diff) {
            cout << " missing element is " << i + diff << endl;
            break;
        }


    }
}
void Manymissing(int A[], int n)
{
    int diff = 1;
    for (int i = 0;i < n - 1;i++) {
        if (A[i] - i != diff) {
            while (A[i] - i > diff) {
                cout << " missing element is " << i + diff << endl;
                diff++;
            }
        }


    }
}
void duplicate(int A[], int n)
{
    for (int i = 0;i < n;i++)
    {
        int j = i + 1;
        while (A[i] == A[j])
        {
            j++;
            cout << " duplicate element is " << A[i] << " at index " << j - 1 << endl;
            i = j - 1;
        }
    }
}
void unsortedDuplicate(int A[], int n)
{
    int count = 1;

    for (int i = 0;i < n;i++)
    {
        if (A[i] != -1) {
            for (int j = i + 1;j < n;j++)
            {
                if (A[i] == A[j])
                {
                    count++;
                    A[j] = -1;

                }


            }
        } if (count > 1)
        {
            cout << " duplicate number is " << A[i] << " are  " << count << " times repeated " << endl;
        }

       
    }
}
void pairAdd(int A[], int n, int k)
{
    for (int i = 0;i < n;i++)
    {
        for (int j = i + 1;j < n;j++)
        {
            if (A[i] + A[j] == k)
            {
                cout << " Pair of sum are  " << A[i] << " + " << A[j] << "=" << k << endl;
            }
        }
    }
}
int main()
{
    int A[9] = {6,7,8,6,8,7,7,6,9 };
    pairAdd(A, 9, 15);
    cin.get();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
