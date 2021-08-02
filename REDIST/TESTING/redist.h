#ifdef ENABLE_ILP64
#include <inttypes.h>
#include <stdint.h>
#endif

#ifdef T3D
#define float double
#endif
#ifdef T3E
#define float double
#endif
#ifdef CRAY
#define float double
#endif
#ifndef Int
#define Int int
#endif
