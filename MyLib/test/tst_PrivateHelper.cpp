#include "PrivateHelper.hpp"

#include "CatchWrapper.hpp"

TEST_CASE("PrivateHelper") { CHECK(private_constant() == 43); }
