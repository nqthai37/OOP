#include "NGUOI.h"

NGUOI:: NGUOI(string name, string birth, string address)
{
    this->name= name;
    this->birth= birth;
    this -> address = address;
}

ostream& operator <<(ostream& os, NGUOI person)
{
    os<<"Name: "<<person.name<<endl<<"Birth: "<<person.birth<<endl<<"Address: "<<person.address<<endl;
    return os;
}

istream& operator >>( istream& is, NGUOI& person)
{
    string name, birth, address;
    cout<<"Enter name: ";
    is>>name;
    cout<<"Enter birth (01/01/2005) : ";
    is>>birth;
    cout<<"Enter address: ";
    is>>address;
    person.name= name;
    person.birth= birth;
    person.address=address;
    return is;
}
