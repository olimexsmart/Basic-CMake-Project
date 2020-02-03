//
// Created by olli on 31/01/20.
//

#include "StaticLib.h"


int StaticLib::testMe(int n) {
    return n + c;
}

StaticLib::StaticLib(int c) {
    this->c = c;
}
