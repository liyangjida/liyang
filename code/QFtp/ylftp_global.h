#ifndef YLFTP_GLOBAL_H
#define YLFTP_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(YLFTP_LIBRARY)
#  define YLFTPSHARED_EXPORT Q_DECL_EXPORT
#else
#  define YLFTPSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // YLFTP_GLOBAL_H
