#ifndef BZX_NOTIFYMNEMONIC_H
#define BZX_NOTIFYMNEMONIC_H


#include <QWizard>

namespace Ui {
    class NotifyMnemonic;
}

class NotifyMnemonic : public QWizard
{
    Q_OBJECT
public:
    explicit NotifyMnemonic(QWidget *parent = 0);
    ~NotifyMnemonic();

    static void notify();
private Q_SLOTS:
    void cancelEvent();
private:
    Ui::NotifyMnemonic *ui;
};

#endif //BZX_NOTIFYMNEMONIC_H
