#ifndef QTCPLUGIN_GLOBAL_H
#define QTCPLUGIN_GLOBAL_H

#if defined(QTCPLUGIN_LIBRARY)
#  define QTCPLUGIN_EXPORT Q_DECL_EXPORT
#else
#  define QTCPLUGIN_EXPORT Q_DECL_IMPORT
#endif

#endif // QTCPLUGIN_GLOBAL_H
