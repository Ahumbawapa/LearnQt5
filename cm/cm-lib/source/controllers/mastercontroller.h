#ifndef MASTERCONTROLLER_H
#define MASTERCONTROLLER_H

#include <QtCore/QObject>
#include <QString>

#include <cm-lib_global.h>

namespace cm {
namespace controllers {


class CMLIBSHARED_EXPORT MasterController : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString ui_welcomeMessage MEMBER welcomeMessage CONSTANT)
public:
    explicit MasterController(QObject *parent = nullptr);
    QString welcomeMessage = "This is MasterController to Major Tom";

signals:

public slots:
};

}//end namespace controllers
}//end namespace cm


#endif // MASTERCONTROLLER_H
