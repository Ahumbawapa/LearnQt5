#ifndef MASTERCONTROLLER_H
#define MASTERCONTROLLER_H

#include <QtCore/QObject>

#include <cm-lib_global.h>

namespace cm {
namespace controllers {


class CMLIBSHARED_EXPORT MasterController : public QObject
{
    Q_OBJECT
public:
    explicit MasterController(QObject *parent = nullptr);

signals:

public slots:
};

}//end namespace controllers
}//end namespace cm


#endif // MASTERCONTROLLER_H
