#include <cstdint>
#include <chrono>

namespace sample_lib 
{
   class stopwatch
   {
      using my_clock = std::chrono::high_resolution_clock;

      decltype(my_clock::now()) start_time;

   public:
      stopwatch();
      void reset();
      int64_t elapsed_us() const;
   };
}
