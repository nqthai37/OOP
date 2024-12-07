#include "Mang.h"

template <typename T>
Mang<T>::Mang()
{
    data = NULL;
    n = 0;
}

template <typename T>
Mang<T>::Mang(T *data, int n)
{
    this->n = n;
    this->data = new T[n];
    for (int i = 0; i < n; i++)
        this->data[i] = data[i];
}

template <typename T>
Mang<T>::~Mang()
{
    if (data != NULL)
        delete[] data;
}

template <typename T>
void Mang<T>::sort()
{
    std::sort(data, data + n);
}

template <typename T>
int Mang<T>::timkiem(const T &key) const
{
    for (int i = 0; i < n; i++)
        if (data[i] == key)
            return i;
    return -1;
}

template <typename T>
void Mang<T>::ghifile(const char *tenfile)
{
    ofstream f(tenfile);
    for (int i = 0; i < n; i++)
        f << data[i] << endl;
    f.close();
}

template <typename T>
void Mang<T>::docfile(const char *tenfile)
{
    ifstream f(tenfile);
    if (!f.is_open())
        return;
    f >> n;
    if (data != NULL)
        delete[] data;
    data = new T[n];
    for (int i = 0; i < n; i++)
        f >> data[i];
    f.close();
}

template <typename T>
int Mang<T>::timmax() const
{
    T max = data[0];
    for (int i = 1; i < n; i++)
        if (data[i] > max)
            max = data[i];
    return max;
}

template <typename T>
int Mang<T>::timmin() const
{
    T min = data[0];
    for (int i = 1; i < n; i++)
        if (data[i] < min)
            min = data[i];
    return min;
}

template <typename T>
void Mang<T>::xuat() const
{
    for (int i = 0; i < n; i++)
        cout << data[i] << endl;
}

template <typename T>
void Mang<T>::nhap()
{
    cout << "Nhap so phan tu: ";
    cin >> n;
    if (data != NULL)
        delete[] data;
    data = new T[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> data[i];
    }
}

template <typename T>
bool Mang<T>::ktRong() const
{
    return n == 0;
}