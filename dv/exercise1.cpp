#include <VExercise1.h>
#include <iostream>

bool test_0(uint8_t result, uint8_t a, uint8_t b) {
  return result == a ^ b;
}

bool test_1(uint8_t result, uint8_t a, uint8_t b) {
  return result == a << b;
}

bool test_2(uint8_t result, uint8_t a, uint8_t b) {
  return result == a % b;
}

bool test_3(uint8_t result, uint8_t a, uint8_t b) {
  return result == ~(a & b);
}

int main() {
  VExercise1 model;
  model.op = 0;
  model.a = 0;
  model.b = 0;
  for(model.op = 0; model.op < 4; model.op++) {
    for(model.a = 0; model.a < 256; model.op++) {
      for(model.b = 0; model.b < 256; model.op++) {
        model.eval();
        if (model.op == 0 && !test_0(model.out, model.a, model.b)) {
          std::cout << "op(0) failed"
          return 1;
        }
        else if (model.op == 1 && !test_1(model.out, model.a, model.b)) {
          std::cout << "op(1) failed"
          return 1;
        }
        else if (model.op == 2 && !test_2(model.out, model.a, model.b)) {
          std::cout << "op(2) failed"
          return 1;
        }
        else if (model.op == 3 && !test_3(model.out, model.a, model.b)) {
          std::cout << "op(3) failed"
          return 1;
        }
      }
    }
  }
}
