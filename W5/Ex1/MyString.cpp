#include "MyString.h"

MyString::MyString() : m_str(nullptr), m_size(0) {}

MyString::MyString(const char* str) : m_str(nullptr), m_size(0) {
    if (str) {
        m_size = strlen(str);
        m_str = new char[m_size + 1];
        strcpy(m_str, str);
    }
}

MyString::MyString(const MyString& str) : m_str(nullptr), m_size(0) {
    if (str.m_str) {
        m_size = str.m_size;
        m_str = new char[m_size + 1];
        strcpy(m_str, str.m_str);
    }
}

MyString::~MyString() {
    delete[] m_str;
    m_str = nullptr;
}

int MyString::GetSize() const {
    return m_size;
}

const char* MyString::GetStr() const {
    return m_str ? m_str : "";
}

const char& MyString::operator[](int index) const {
    if (index < 0 || index >= m_size) {
        throw std::out_of_range("Index out of bounds");
    }
    return m_str[index];
}

char& MyString::operator[](int index) {
    if (index < 0 || index >= m_size) {
        throw std::out_of_range("Index out of bounds");
    }
    return m_str[index];
}

MyString MyString::operator+(const MyString& str) const {
    MyString newStr;
    newStr.m_size = m_size + str.m_size;
    newStr.m_str = new char[newStr.m_size + 1];
    strcpy(newStr.m_str, m_str ? m_str : "");
    strcat(newStr.m_str, str.m_str ? str.m_str : "");
    return newStr;
}

MyString MyString::operator+(const char* str) const {
    MyString newStr;
    int strSize = str ? strlen(str) : 0;
    newStr.m_size = m_size + strSize;
    newStr.m_str = new char[newStr.m_size + 1];
    strcpy(newStr.m_str, m_str ? m_str : "");
    strcat(newStr.m_str, str ? str : "");
    return newStr;
}

MyString MyString::operator+(char c) const {
    MyString newStr;
    newStr.m_size = m_size + 1;
    newStr.m_str = new char[newStr.m_size + 1];
    strcpy(newStr.m_str, m_str ? m_str : "");
    newStr.m_str[m_size] = c;
    newStr.m_str[m_size + 1] = '\0';
    return newStr;
}

MyString& MyString::operator=(const MyString& str) {
    if (this == &str) {
        return *this;
    }
    delete[] m_str;
    m_str = nullptr;

    if (str.m_str) {
        m_size = str.m_size;
        m_str = new char[m_size + 1];
        strcpy(m_str, str.m_str);
    }
    else {
        m_size = 0;
    }
    return *this;
}

MyString& MyString::operator=(const char* str) {
    delete[] m_str;
    m_str = nullptr;

    if (str) {
        m_size = strlen(str);
        m_str = new char[m_size + 1];
        strcpy(m_str, str);
    }
    else {
        m_size = 0;
    }
    return *this;
}

MyString& MyString::operator=(char c) {
    delete[] m_str;
    m_size = 1;
    m_str = new char[2];
    m_str[0] = c;
    m_str[1] = '\0';
    return *this;
}

vector<MyString> MyString::Split(const vector<char>& delimiters, bool removeEmpty) const {
    vector<MyString> vMs;
    MyString token;

    for (int i = 0; i < m_size; i++) {
        if (find(delimiters.begin(), delimiters.end(), m_str[i]) == delimiters.end()) {
            token = token + m_str[i];
        }
        else {
            if (!removeEmpty || token.GetSize() > 0) {
                vMs.push_back(token);
            }
            token = MyString();
        }
    }

    if (!removeEmpty || token.GetSize() > 0) {
        vMs.push_back(token);
    }

    return vMs;
}

ostream& operator<<(ostream& os, const MyString& str) {
    os << (str.m_str ? str.m_str : "");
    return os;
}

MyString operator+(const char* str, const MyString& myStr) {
    MyString newStr;
    int strSize = str ? strlen(str) : 0;
    newStr.m_size = strSize + myStr.m_size;
    newStr.m_str = new char[newStr.m_size + 1];
    strcpy(newStr.m_str, str ? str : "");
    strcat(newStr.m_str, myStr.m_str ? myStr.m_str : "");
    return newStr;
}