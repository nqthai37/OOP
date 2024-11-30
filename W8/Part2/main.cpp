#include "Mamal.h"
#include "Dog.h"

int main()
{
    Mamal *pDog = new Dog;
    pDog->move();
    pDog->speak();
    delete pDog;
    return 0;
}