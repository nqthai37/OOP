#pragma once
#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

class MyString {
private:
    char* m_str;
    int m_size;

public:
    MyString();
    MyString(const char* str);
    MyString(const MyString& str);
    ~MyString();

    int GetSize() const;
    const char* GetStr() const;

    MyString operator+(const MyString& str) const;
    MyString operator+(const char* str) const;
    MyString operator+(char c) const;
    MyString& operator=(const MyString& str);
    MyString& operator=(const char* str);
    MyString& operator=(char c);
    char& operator[](int index);
    const char& operator[](int index) const;

    vector<MyString> Split(const vector<char>& delimiters, bool removeEmpty) const;
    friend ostream& operator<<(ostream& os, const MyString& str);
    friend MyString operator+(const char* str, const MyString& myStr);
};
