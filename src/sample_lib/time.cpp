#include "sample_lib/time.h"

namespace sample_lib
{
    stopwatch::stopwatch(): start_time(my_clock::now())
    {}

    void stopwatch::reset()
    {
        start_time = my_clock::now();
    }

    int64_t stopwatch::elapsed_us() const
    {
        auto end_time = my_clock::now();
        auto us_duration = 
            std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);
        return us_duration.count();
    }
}
