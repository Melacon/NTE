#define BOOST_TEST_MODULE IntegTestDeviceEditRunning

#include "configure-yuma-integtest.h"

// ---------------------------------------------------------------------------|
// Yuma includes for files under test
// ---------------------------------------------------------------------------|

namespace YumaTest {

// ---------------------------------------------------------------------------|
// Initialise the spoofed command line arguments 
// ---------------------------------------------------------------------------|
const char* SpoofedArgs::argv[] = {
    ( "yuma-test" ),
    ( "--modpath=../../modules/netconfcentral"
               ":../../modules/ietf"
               ":../../modules/yang"
               ":../modules/yang"
               ":../../modules/test/pass" ),
    ( "--runpath=../modules/sil" ),
    ( "--access-control=off" ),
    ( "--log=./yuma-op/yuma-out.txt" ),
    ( "--target=running" ),
    ( "--module=device_test" ),
    ( "--no-startup" ),         // ensure that no configuration from previous 
                                // tests is present
};

// typedef that allows the use of parameterised test fixtures with 
// BOOST_GLOBAL_FIXTURE
typedef IntegrationTestFixture<SpoofedArgs> MyFixtureType_T; 

// Set the global test fixture
BOOST_GLOBAL_FIXTURE( MyFixtureType_T );

} // namespace YumaTest
