#include <iostream>
using namespace std;

int arr[20], B[20];
int n;

void input()
{
    while (true)
    {
        cout << "Masukkan Panjang Element Array : ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else{
            cout << "/nMaksimal Panjang Array Adalah 20";
        }
    }
    cout << "\n--------------------------" << endl;
    cout << "\nInputkan Isi Element Array" << endl;
    cout << "\n--------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Array Index ke- " << i << " : ";
        cin >> arr[i];
    }
}