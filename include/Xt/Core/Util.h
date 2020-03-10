#ifndef XT_INCLUDED_CORE_UTIL_H
#define XT_INCLUDED_CORE_UTIL_H 1

#if defined(WIN32) || defined(_WIN32)
# define XT_OS_WINDOWS 1
#elif defined(__APPLE__)
# define XT_OS_MACOS 1
#elif defined(__linux__)
# define XT_OS_LINUX 1
#else
# error "Unsupported operating system"
#endif

#if defined(XT_OS_MAC) || defined(XT_OS_LINUX)
# define XT_OS_UNIX 1
#endif

#if defined(XT_OS_WINDOWS)
# define XT_SYM_HIDDEN
# define XT_SYM_IMPORT __declspec(dllimport)
# define XT_SYM_EXPORT __declspec(dllexport)
#else
# define XT_SYM_HIDDEN __attribute__ ((visibility ("hidden")))
# define XT_SYM_IMPORT __attribute__ ((visibility ("default")))
# define XT_SYM_EXPORT __attribute__ ((visibility ("default")))
#endif

#endif
