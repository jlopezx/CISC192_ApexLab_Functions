//
// Don't modify code in this file, with the exception
// of adding test cases.
//
#include <iostream>
#include <fstream>
#include <cassert>
#include "apex_code.h"

using namespace std;

int main()
{
    // To add a test case, duplicate one of the test lines below
    // modify input with the first string, and the expected output
    // in the second string.

    // Test upperCharAnd
    assert(upperCharAnd('x', 'X') == false);
    assert(upperCharAnd('A', 'X') == true);
    assert(upperCharAnd('a', 'x') == false);

    // Test getNumberTiles
    assert(getNumberTiles(1.0, 1.0, 8) == 4);
    assert(getNumberTiles(10.5, 1.42, 8) == 48);

    return 0;
}