#ifndef XT_INCLUDED_CORE_API_H
#define XT_INCLUDED_CORE_API_H 1

#include <Xt/Core/Util.h>

#if defined(XT_EXPORTS_CORE)
# define XT_API_CORE XT_SYM_EXPORT
#else
# define XT_API_CORE XT_SYM_IMPORT
#endif

#endif
