#include "ThoiGian.h"

ThoiGian::ThoiGian()
{
    hour = 0;
    minute = 0;
    second = 0;
}

ThoiGian::ThoiGian(int h, int m, int s)
{
    if (s < 0)
        s = 0;
    else if (s > 59) {
        m += s / 60;
        s = s % 60;
    }
    if (m < 0)
        m = 0;
    else
        if (m > 59) { h += m / 60; m = m % 60; }

    if (h < 0) h = 0;
    else if (h > 23) h = h % 24;
    hour = h;
    minute = m;
    second = s;
}

ThoiGian::ThoiGian(int m, int s)
{
    hour = 0;
    if (s < 0)
        s = 0;
    else if (s > 59) {
        m += s / 60;
        s = s % 60;
    }
    if (m < 0)
        m = 0;
    else
        if (m > 59) { hour += m / 60; m = m % 60; }
    minute = m;
    second = s;
}

ThoiGian::ThoiGian(int s)
{
    hour = 0;
    minute = 0;
    if (s < 0)
        s = 0;
    else if (s > 59) {
        minute += s / 60;
        s = s % 60;
    }
    if (minute < 0)
        minute = 0;
    else
        if (minute > 59) { hour += minute / 60; minute = minute % 60; }

    if (hour > 23) hour = hour % 24;
    second = s;
}

void ThoiGian::Xuat()
{
    cout << setfill('0') << setw(2) << hour << ":"
        << setfill('0') << setw(2) << minute << ":"
        << setfill('0') << setw(2) << second << endl;
}