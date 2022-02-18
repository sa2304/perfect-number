#include <cassert>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  bool checkPerfectNumber(int num) {
    if (num < 6) return false;

    int sum = 1;
    int limit = static_cast<int>(sqrt(num)) + 1;
    for (int i = 2; i < limit; ++i) {
      if (num % i == 0) {
        sum += i;
        const int k = num / i;
        if (k != i) {
          sum += k;
        }
      }
    }

    return sum == num;
  }
};

void TestCheckPerfectNumber() {
  Solution s;
  assert(s.checkPerfectNumber(6));
  assert(not s.checkPerfectNumber(7));
  assert(s.checkPerfectNumber(28));
  assert(not s.checkPerfectNumber(120));
//  assert(s.checkPerfectNumber());
}

int main() {
  TestCheckPerfectNumber();
  std::cout << "Ok!" << std::endl;
  return 0;
}
