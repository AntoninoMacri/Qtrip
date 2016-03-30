#ifndef SMARTUTENTE_H
#define SMARTUTENTE_H
//#include <Model/Utente/Utente>

class Utente;
class SmartUtente
{
public:
    SmartUtente();
    SmartUtente(Utente*);
//    SmartUtente(const SmartUtente&); //da togliere una volta fatta la classe utente
    ~SmartUtente();

    void setPointer(Utente*);
    Utente* getPointer() const;


    SmartUtente& operator =(const SmartUtente&);

    Utente& operator *() const;
    Utente* operator ->() const;

private:
    Utente* ptr;
};

#endif // SMARTUTENTE_H
