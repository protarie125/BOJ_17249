#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

string s;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> s;

  auto l = 0;
  auto r = 0;
  auto sw = false;
  for (const auto& c : s) {
    if ('@' == c) {
      if (!sw)
        ++l;
      else
        ++r;
    } else if (')' == c) {
      sw = true;
    }
  }

  cout << l << ' ' << r;

  return 0;
}