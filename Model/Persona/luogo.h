#ifndef LUOGO_H
#define LUOGO_H
#include <QString>

class Luogo
{
public:
    Luogo(const QString& ="",const QString& ="");

    QString getComune() const;
    QString getRegione() const;

    void setComune(const QString& ="");
    void setRegione(const QString& ="");
    void setLuogo(const QString& ="", const QString& ="");

    bool contains(const QString& ="") const;

    bool operator ==(const Luogo&) const;

private:
    QString comune;
    QString regione;
};

#endif // LUOGO_H
