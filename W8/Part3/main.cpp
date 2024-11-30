#include "../Part2/Mamal.h"
#include "../Part2/Dog.h"
#include "Cat.h"
#include "Horse.h"
#include "GenieaPig.h"

int main()
{
    Mamal *theArray[5];
    Mamal *ptr;
    int choice, i;
    for (i = 0; i < 5; i++)
    {
        cout << "(1)Dog (2)Cat (3)Horse (4)GenieaPig: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                ptr = new Dog;
                break;
            case 2:
                ptr = new Cat;
                break;
            case 3:
                ptr = new Horse;
                break;
            case 4:
                ptr = new GenieaPig;
                break;
            default:
                ptr = new Mamal;
                break;
        }
        theArray[i] = ptr;
    }
    for (i = 0; i < 5; i++)
    {
        theArray[i]->speak();
        theArray[i]->move();
        cout << endl;
    }
    return 0;
}