#pragma once

#if defined(_MSC_VER)
#define strcasecmp _stricmp
#define strncasecmp _strnicmp
#define strcasestr strstr
#define strdup _strdup

#include <time.h>
#else
#include <sys/time.h>
#endif

#define _USE_MATH_DEFINES