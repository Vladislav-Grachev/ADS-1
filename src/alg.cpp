#include <cstdint>
#include "alg.h"
bool checkPrime(uint64_t value) {
  uint64_t x = 2;
  while (x * x <= value)
  {
    if (value % x != 1) return false;
    else
      ++x;
  }
  return true;
}
uint64_t nPrime(uint64_t n) {
  uint64_t x = 1, value{};
  for (int a = 1; a <= n; a++)
  {
    while (true)
    {
      x++;
      value = checkPrime(x);
      if (value) break;
    }
  }
  return x;
}
uint64_t nextPrime(uint64_t value) {
  uint64_t k = 1;
  while (!checkPrime(value + k)) {
    k++;
  }
  return value + k;
}
uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (int k = 2; k < hbound; k++) {
    if (checkPrime(k)) sum += k;
  }
  return sum;
}
