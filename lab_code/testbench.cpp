//
// Don't modify code in this file, with the exception
// of adding test cases.
//
#include "apex_code.h"
#include <fstream>
#include <iostream>

using namespace std;

static int testNum = 0;
static int testsCorrect = 0;

static int funcTestNum = 0;
static int funcTestCorrect = 0;

// Use for everything other than doubles/floats
template <typename T> bool test(T expected, T result) {
  funcTestNum++;
  testNum++;

  cout << "Test " << testNum << ": ";

  if (expected != result) {
    cout << "FAILED: Expected " << expected << ", received " << result << ".\n";
  } else {
    cout << "PASS\n";
    testsCorrect++;
    funcTestCorrect++;
  }

  return expected == result;
}

/**
 * Mark the starting point for the tests of a specific function.
 *
 * @param startFuncName the function name to start testing
 */
void startTests(string startFuncName) {
  cout << "----- Start of testing " << startFuncName << " -----" << endl;

  funcTestNum = 0;
  funcTestCorrect = 0;
}

/**
 * Mark the ending point for the tests of a specific function.
 *
 * @param endFuncName the function name to end testing
 */
void endTests(string endFuncName) {
  if (funcTestNum == funcTestCorrect) {
    cout << "----- All tests passed for " << endFuncName << "! -----" << endl;
  } else {
    cout << "----- Some tests failed for " << endFuncName << " :( -----"
         << endl;
  }
  cout << endl;
}

/**
 * Mark the end of the test suite.
 */
void endAllTests() {
  if (testsCorrect == testNum) {
    cout << "All tests passed! Let's goooo" << endl;
  } else {
    cout << "Some tests failed. Keep trying!" << endl;
  }
}

int main() {
  // To add a test case, duplicate one of the test lines below
  // modify input with the first string, and the expected output
  // in the second string.

  // Test upperCharAnd
  startTests("upperCharAnd");
  (void)test(false, upperCharAnd('x', 'X'));
  (void)test(true, upperCharAnd('A', 'X'));
  (void)test(false, upperCharAnd('a', 'x'));
  endTests("upperCharAnd");

  // Test getNumberTiles
  startTests("getNumberTiles");
  (void)test(4, getNumberTiles(1.0, 1.0, 8));
  (void)test(48, getNumberTiles(10.5, 1.42, 8));
  endTests("getNumberTiles");

  endAllTests();

  return 0;
}
