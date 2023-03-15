#pragma once

#if defined(__GNUC__) || defined(__clang__)
#define CPPREDIS_DEPRECATED __attribute__((deprecated))
#elif defined(_MSC_VER)
#define CPPREDIS_DEPRECATED __declspec(deprecated)
#else
#pragma message("WARNING: You need to implement CPPREDIS_DEPRECATED for this compiler")
#define CPPREDIS_DEPRECATED
#endif
