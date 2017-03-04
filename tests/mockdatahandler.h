#include "gmock/gmock.h"
#include "../RADIANCE-main/src/datahandler.cc"
namespace RADIANCE {

class MockDataHandler : public DataHandler {
 public:
  MOCK_METHOD0(Initialize,void());
};

}  // namespace RADIANCE
