//
// Created by olli on 31/01/20.
//

#include "DynamicLib.h"

#include <utility>

using namespace std;

string DynamicLib::yesItsMe(int y) {
    return message + to_string(y);
}

DynamicLib::DynamicLib(string message) {
    this->message = std::move(message);
}
