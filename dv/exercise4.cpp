#include <VExercise4.h>

int main() {
  VExercise4 model;
  uint8_t alpha = 0, 
          beta = 1,
          gamma = 2;
  model.alpha = alpha;
  model.beta = beta;
  model.gamma = gamma;

  model.cs = 0;
  for(model.sel  = 0; model.sel  < 4; model.sel ++) {
    model.eval();
    if (model.out() != 0)
      return 1;
  }

  model.cs = 1;
  for(model.sel = 0; model.sel  < 4; model.sel ++) {
    model.eval();
    if (model.sel < 3) {
      if (model.out != model.sel)
        return 1;
    }
    else {
      if (model.out != model.alpha & (model.beta | model.gamma))
        return 1;
    }
  }
  return 0;
}
