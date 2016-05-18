#ifndef CPPWORD_GLOBAL_H
#define CPPWORD_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CPPWORD_LIBRARY)
#  define CPPWORDSHARED_EXPORT Q_DECL_EXPORT
#else
#  define CPPWORDSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // CPPWORD_GLOBAL_H
