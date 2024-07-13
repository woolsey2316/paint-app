#include "image.h"

int main(int argc, char** argv) {
  Image test("test.jpg");
  
  Image gray_avg = test;
  gray_avg.grayscale_avg();
  int success = gray_avg.write("gray_avg.png");
  printf("success %d\n", success);

  Image gray_lum = test;
  gray_lum.grayscale_lum();
  success = gray_lum.write("gray_lum.png");
  printf("success %d\n", success);

  return 0;
}
