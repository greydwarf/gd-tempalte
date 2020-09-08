#include "gtest/gtest.h"
#include "fmt/core.h"
#include "sample_lib/time.h"

TEST(sample_lib, bmark)
{
    sample_lib::stopwatch t;
    usleep(50);
    auto timed = t.elapsed_us(); 
    EXPECT_TRUE(timed > 50 && timed < 150);
    fmt::print("Time taken: {}\n", timed);
}
