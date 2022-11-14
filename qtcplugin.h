#ifndef QTCPLUGINPLUGIN_H
#define QTCPLUGINPLUGIN_H

#include "qtcplugin_global.h"

#include <extensionsystem/iplugin.h>

namespace Qtcplugin {
namespace Internal {

class QtcpluginPlugin : public ExtensionSystem::IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QtCreatorPlugin" FILE "Qtcplugin.json")

public:
    QtcpluginPlugin();
    ~QtcpluginPlugin() override;

    bool initialize(const QStringList &arguments, QString *errorString) override;
    void extensionsInitialized() override;
    ShutdownFlag aboutToShutdown() override;

private:
    void triggerAction();
};

} // namespace Internal
} // namespace Qtcplugin

#endif // QTCPLUGINPLUGIN_H
