#include "Ex2.h"

Paragraph::Paragraph() {
    par = "";
}
Paragraph::Paragraph(string s) {
    par = s;
}
Paragraph::Paragraph(const Paragraph& s) {
    par = s.par;
}
Paragraph::~Paragraph() {
    par = "";
}
string Paragraph::GetPar() const {
    return par;
}
void Paragraph::SetPar(string s) {
    par = s;
}

int Paragraph::countWords()const {
    char tok[] = { ' ', '.', ',', '!', '?', ':', ';', '\t', '\n' };
    int cnt = 0;
    for (int i = 0; i < par.length(); i++) {
        for (int j = 0; j < 9; j++) {
            if (par[i] == tok[j] && par[i + 1] != tok[j]) {
                cnt++;
                break;
            }
        }
    }
}
Paragraph Paragraph::getFile(const string name) {
    ifstream f(name);
    string s = "";
    string tmp;
    while (getline(f, tmp)) {
        s += tmp;
    }
    f.close();
    return Paragraph(s);
}