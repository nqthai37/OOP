#include "MangSoNguyen.h"

MangSoNguyen::MangSoNguyen()
{
    n = 0;
    a = NULL;
}

MangSoNguyen::MangSoNguyen(int m)
{
    n = m;
    a = new int[n];
    for (int i = 0; i < n; i++)
        a[i] = 0;
}

MangSoNguyen::MangSoNguyen(int* b, int m)
{
    n = m;
    a = new int[n];
    for (int i = 0; i < n; i++)
        a[i] = b[i];
}

MangSoNguyen::MangSoNguyen(MangSoNguyen& msn)
{
    n = msn.n;
    a = new int[n];
    for (int i = 0; i < n; i++)
        a[i] = msn.a[i];
}

void MangSoNguyen::Xuat()
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

MangSoNguyen::~MangSoNguyen()
{
    delete[] a;
    a = NULL;
    n = 0;
}