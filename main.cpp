#include <cassert>
#include <iostream>

class Solution {
 public:
  bool checkPerfectNumber(int num) {
    // FIXME
    return false;
  }
};

void TestCheckPerfectNumber() {
  Solution s;
  assert(s.checkPerfectNumber(6));
  assert(not s.checkPerfectNumber(7));
  assert(s.checkPerfectNumber(28));
//  assert(s.checkPerfectNumber());
}

int main() {
  TestCheckPerfectNumber();
  std::cout << "Ok!" << std::endl;
  return 0;
}
