#include <assert.h>
#include "../src/calculator.h"
#include <cifuzz/cifuzz.h>
#include <fuzzer/FuzzedDataProvider.h>
#include <cstdint>
#include <cstddef>
#include <string>

FUZZ_TEST_SETUP() {
  // Perform any one-time setup required by the FUZZ_TEST function.
}

FUZZ_TEST(const uint8_t *data, size_t size) {
  FuzzedDataProvider fuzzed_data(data, size);
  int num1 = fuzzed_data.ConsumeFloatingPoint();
  char op = fuzzed_data.ConsumeIntegralInRange(0, 127);
  int num2 = fuzzed_data.ConsumeFloatingPoint();

  calculator(num1, op, num2);
}
