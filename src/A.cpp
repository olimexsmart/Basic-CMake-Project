/*
 *  Source for the not-part-of-a-library class A
 *
 */

#include "A.h"
#include "iostream"

using namespace std;

A::A() {
    cout << "Constructing A" << endl;
}

int A::yes(int u) {
    return u * 5;
}