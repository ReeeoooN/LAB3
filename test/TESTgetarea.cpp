#include "TESTgeometry.h"
#include <stdlib.h>

getarea(r);

TEST_CASE("GETAREA", "[AREA]") {
  REQUIRE(getarea(2.2) == 15.20531f);
  REQUIRE(getarea(6.11) == 117.28226f);
  cout << "Test getarea is done" << endl;
}
