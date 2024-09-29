
#include <sort.hpp>

#include <random>
#include <ranges>

#include <benchmark/benchmark.h>

namespace {

std::vector<int> GenerateRandomVector(std::size_t size) {
  std::random_device dev;
  std::mt19937 gen(dev());
  std::uniform_int_distribution<int> dist(-1'000'000, 1'000'000);
  std::vector<int> v;
  v.reserve(size);
  for (std::size_t i = 0; i < size; ++i) {
    v.emplace_back(dist(gen));
  }
  return v;
}

void BenchSort(benchmark::State& state) {
  auto v = GenerateRandomVector(state.range(0));

  for (auto _ : state) {
    algo::Sort(v);
    state.PauseTiming();
    {
      std::random_device rd;
      std::mt19937 g(rd());
      std::ranges::shuffle(v, g);
    }
    state.ResumeTiming();
  }
}
}  // namespace

BENCHMARK(BenchSort)->Arg(10)->Arg(100)->Arg(10000)->Iterations(100)->UseRealTime();

BENCHMARK_MAIN();