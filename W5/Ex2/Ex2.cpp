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
    for (int i = 0; i < par.size(); i++)
    {
        for (int j = 0; j < 9; j++) {
            if (par[i] == tok[j] && (par[i + 1] != ' ' && par[i + 1] != '\t' && par[i + 1] != '\n')) {
                cnt++;
            }
        }
    }
    return cnt;
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
// vector<string> Paragraph::splitToSen()const {
//     vector<string> result;
//     string tmp = "";
//     for (int i = 0; i < par.length(); i++) {
//         if (par[i] == '.' || par[i] == '!' || par[i] == '?') {
//             tmp += par[i];
//             result.push_back(tmp);
//             // cout << tmp << endl;
//             tmp = "";
//         }
//         else {
//             if (par[i] >= 'A' && par[i] <= 'Z') {
//                 tmp = par[i];
//             }
//             else
//                 tmp += par[i];
//         }
//     }
//     return result;
// }