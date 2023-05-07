#ifndef INCLUDE_SangoCommonTypes
#define INCLUDE_SangoCommonTypes
#include "SangoCommonTypes.h"
#endif

#ifndef INCLUDE_UniversalElement
#define INCLUDE_UniversalElement
#include "UniversalElement.h"
#endif

#ifndef INCLUDE_malloc_h
#define INCLUDE_malloc_h
#include <malloc.h>
#define SimpleMalloc(Name,Type,Count) TypePTR(Type) Name=(TypePTR(Type))malloc(Count*sizeof(Type))
#define CheckMalloc(x) if (x==0) return 0;
#endif