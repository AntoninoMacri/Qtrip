#ifndef VIAGGIO_H
#define VIAGGIO_H
#include <QString>
#include <QDateTime>

class Viaggio
{
public:
    Viaggio(const QString&, const QString&, const QDateTime&, const QDateTime&);

    QString getPartenza() const;
    QString getArrivo() const;
    QDateTime getInizio() const;
    QDateTime getFine() const;
    int getNumGiorni() const;

    void setPartenza(const QString&);
    void setArrivo(const QString&);
    void setInizio(const QDateTime&);
    void setFine(const QDateTime&);

private:
    QString partenza;
    QString arrivo;
    QDateTime inizio;
    QDateTime fine;
};

#endif // VIAGGIO_H
