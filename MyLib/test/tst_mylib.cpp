#include "mylib.hpp"

#include "CatchWrapper.hpp"

TEST_CASE("hello") { CHECK(mylib_function() == 42); }
