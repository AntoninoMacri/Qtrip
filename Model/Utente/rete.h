#ifndef RETE_H
#define RETE_H
#include <QString>
#include <Model/Utente/smartutente.h>
#include <Model/Utente/nodo.h>

template<class T>
class Rete //implemento una lista template-izzata con amicizia verso funzioni che filtrano in base al tipo delle derivazioni del tipo classe T passato
{ //filtro in base la letterera alfabetica iniziale e filtro in base al tipo di amicizia
public:
    Rete();
    Rete(const QString&, const T&);
    Rete(nodo<T>* =new nodo<T>());
    ~Rete();

    //Insert
    void insertFront(const QString& ="", const T& =T());

    //GET
    nodo<T> front() const;
    T  getValue(const QString&) const;
    nodo<T> getNodo(const QString&) const;

    //Utili
    bool isEmpty() const;
    bool contains(const QString&) const;
    int size() const;

    //Remove
    nodo<T> popFront(); //se è vuotot da errore
    bool remove(const QString&); //true se il nodo esisteva ed è stato rimosso, false altrimenti


private:
    nodo<T>* first;
};

template<class T>
Rete<T>::Rete():first(0){}

template<class T>
Rete<T>::Rete(const QString& u, const T& i): first(new nodo<T>(u,i)){}

template<class T>
Rete<T>::Rete(nodo<T>* n): first(new nodo<T>(n)){}

template<class T>
Rete<T>::~Rete(){ delete first; }

template<class T>
void Rete<T>::insertFront(const QString& u, const T& i){ nodo<T>* temp=new nodo<T>(u,i,first); first=temp;}

template<class T>
nodo<T> Rete<T>::front() const{ return first; }

template<class T>
T Rete<T>::getValue(const QString& u) const
{
    bool b=false;
    nodo<T>* temp=first;
    T ris;
    if(first) if(first->getUser()==u){b=true; ris=first->getInfo(); }
    while(!b && temp->getNext()){
        temp=temp->getNext();
        if(temp->getUser()==u){b=true; ris=temp->getInfo(); }
    }
    return ris;
}

template<class T>
nodo<T> Rete<t>::getNodo(const QString& ) const
{
    bool b=false;
    nodo<T>* temp=first;
    if(first) if(first->getUser()==u) b=true;
    while(!b && temp->getNext()){
        temp=temp->getNext();
        if(temp->getUser()==u) b=true;
    }
    return *temp;
}

template<class T>
nodo<T>  Rete<T>::popFront()
{
    nodo<T>* temp=first;
    first=first->getNext();
    return *temp;
}

template<T>
bool Rete<T>::isEmpty() const
{
    bool b=false;
    if(first)
        b=true;
    return b;
}

template<T>
bool Rete<T>::contains(const QString& u) const
{
    bool b=false;
    while()
    {

    }
}

template<class T>
bool Rete<T>::remove(const QString& u)
{

}

#endif // RETE_H


/*dichiarazione NON in line
template<QString user,class T>
class Rete //implemento una lista template-izzata con amicizia verso funzioni che filtrano in base al tipo delle derivazioni del tipo classe T passato
{ //filtro in base la letterera alfabetica iniziale e filtro in base al tipo di amicizia
public:


private:
    template<QString user,class T>
    class nodo{
    public:
        T info;
        nodo* next;
        nodo(const QString&,T =T(),nodo* =0);
        ~nodo();
    }

    nodo<T>* first;
};

#endif // RETE_H

/*
class Rete //IMPLEMENTATO TRAMITE LISTA TEMPLETIZZATA? (per aleggerire la rimozione)
{
public:
    typedef QMap <QString ,SmartUtente>::iterator rete_iterator;
    typedef QMap <QString ,SmartUtente>::const_iterator rete_const_iterator;

    Rete()=default;
    Rete(const SmartUtente&);

    //GET
    SmartUtente getSmartUtente(const QString&) const;

    //SET
    void setSmartUtente(const QString&, const SmartUtente&); //inserisce e modifica
    void setSmartUtente(const QMap <QString ,SmartUtente>&); //aggiunge

    //DELETE
    bool deleteUtente(const QString&);

    //FUNZIONI UTILI
    bool contains(const QString&) const; //true se contiene la key passata, false altrimenti
    bool isEmpty() const;

    //Cambio amicizia
    bool changeType(const QString&, const QString&);


    //iteratori
    rete_iterator begin();
    rete_iterator end();
    rete_const_iterator begin() const;
    rete_const_iterator end() const;

private:
    QMap <QString ,SmartUtente> contatti; //username, puntore all'utente
};
*/
