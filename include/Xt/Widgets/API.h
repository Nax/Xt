#ifndef XT_INCLUDED_WIDGETS_API_H
#define XT_INCLUDED_WIDGETS_API_H 1

#include <Xt/Core/Util.h>

#if defined(XT_EXPORTS_WIDGETS)
# define XT_API_WIDGETS XT_SYM_EXPORT
#else
# define XT_API_WIDGETS XT_SYM_IMPORT
#endif

#endif
