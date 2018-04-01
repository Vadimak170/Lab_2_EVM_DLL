#ifndef DINLIB_GLOBAL_H
#define DINLIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DINLIB_LIBRARY)
#  define DINLIBSHARED_EXPORT Q_DECL_EXPORT
#else
#  define DINLIBSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // DINLIB_GLOBAL_H
