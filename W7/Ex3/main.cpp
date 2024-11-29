#include "NV.h"

int main()
{
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;
    cin.ignore();
    NV employees[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter information of employee " << i + 1 << ":" << endl;
        cin >> employees[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Information of employee " << i + 1 << ":" << endl;
        cout << employees[i];
    }
    return 0;
}