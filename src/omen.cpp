#include <iostream>
#include "omen.h"
using namespace std;

omen::omen(int a)
:o(a)
{

}
void omen::printnum()
{
    cout << "o=" << o << endl;
    cout << "this->o=" << this->o << endl;
    cout << "(*this).o=" << (*this).o << endl;
}
