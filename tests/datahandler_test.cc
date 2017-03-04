#include "mockdatahandler.h"
#include "gmock/gmock.h"
#include "gtest/gtest.h"
using ::testing::AtLeast;

TEST(DataHandlerTest, CanInitialize) {
  RADIANCE::MockDataHandler mock_data_handler_;
  EXPECT_TRUE(true);
  EXPECT_FALSE(true);
}

int main(int argc, char** argv) {
  // The following line must be executed to initialize Google Mock
  // (and Google Test) before running the tests.
  ::testing::InitGoogleMock(&argc, argv);
  return RUN_ALL_TESTS();
}
