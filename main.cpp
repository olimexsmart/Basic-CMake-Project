#include <iostream>

#include "funcs.h"
#include "A.h"
#include "StaticLib.h"
#include "DynamicLib.h"

using namespace std;

int main() {

    cout << "Funcs: " << foo(9) << endl;

    A::yes(42);

    StaticLib sl(90);
    cout << "Static: " << sl.testMe(6) << endl;

    DynamicLib dl("Dynamic: ");
    cout << dl.yesItsMe(50) << endl;

    return 0;
}
