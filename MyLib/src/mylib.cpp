#include "mylib.hpp"

#include "PrivateHelper.hpp"

int mylib_function(void) {
  //   int x = *reinterpret_cast<int *>(1);
  //   (void)(x);
  return private_constant();
}
