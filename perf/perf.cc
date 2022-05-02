#include "benchmark/benchmark.h"

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#ifdef HAVE_FREETYPE
enum backend_t { HARFBUZZ, FREETYPE };
#include "perf-extents.hh"
#include "perf-draw.hh"
#endif

BENCHMARK_MAIN ();
