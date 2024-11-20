#include "Ex2.h"

int main() {
    Paragraph p;
    p = p.getFile("English Text Sample.txt");
    cout << p.countWords();
    return 0;
}