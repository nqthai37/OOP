#include <iostream>

using namespace std;

// Cài đặt lớp NGUOI gồm có: 
// q Dữ liệu: họ tên, ngày sinh, địa chỉ 
// q Phương thức: nhập,in một người 

class NGUOI{
    private: 
    string name, birth, address;
    public:
        NGUOI(string name, string birth, string address);
        friend ostream& operator <<(ostream& os, NGUOI person);
        friend istream& operator >>( istream& is, NGUOI& person);
};