#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Paragraph {
private:
    string par;
public:
    Paragraph();
    Paragraph(string s);
    Paragraph(const Paragraph& s);
    ~Paragraph();
    string GetPar() const;
    void SetPar(string s);
    int countWords() const;
    Paragraph getFile(const string name);
};

