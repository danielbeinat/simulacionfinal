#include <iostream>
#include <stdlib.h>
using namespace std;

class Taller{

private:
    int max_vehiculo;
    int numero_vehiculo;
public:
    Taller(int m_vehiculo, int n_vehiculo){
   cout<<"Taller de vehiculos"<<endl;
    max_vehiculo = m_vehiculo;
    numero_vehiculo = n_vehiculo;

    }

    virtual void mostrarvehiculo(){

    cout<<"vehiculos para arreglar: "<<max_vehiculo<<endl;
    cout<<"Numero de vehiculos: "<<numero_vehiculo<<endl;


    }

      void meter(){
    cout<<"meter vehiculo"<<endl;


    }
     void arreglar(){

    cout<<"Arreglar vehiculo"<<endl;


    }



};



class Vehiculo{
private:
    string color;
    string marca;
public:


    virtual void aspecto(string _c, string _m){
    color = _c;
    marca= _m;


    }

    void mostrar(){
     cout<<"color "<<color<<endl;
     cout<<"marca "<<marca<<endl;




     }



    virtual void arrancar()=0;
    virtual void parar()=0;
    virtual void reposar()=0;

};



class coche : public Vehiculo{
private:
    string color;
    string marca;
    int motor;
public:



    //void coches(int _motor){

    //motor = _motor;


    //}

     //void meter(){
    //cout<<" meter coche"<<endl;


    //}

    void tipodemotor(int _motor){

    motor = _motor;

    }

    void mostrarmotor(){
    cout<<"tipo de motor: "<<motor<<endl;




    }

     void aspecto(string _c, string _m){

     color= _c;
     marca= _m;

     }

     void mostrar(){
     cout<<"color "<<color<<endl;
     cout<<"marca "<<marca<<endl;




     }

     void arreglar(){

    cout<<"Arreglar coche"<<endl;


    }

    void arrancar(){
        cout<<"Arrancar coche"<<endl;

    }
    void parar(){
        cout<<"Parar coche"<<endl;

    }
    void reposar(){
        cout<<"Reposar coche"<<endl;

    }







};


class moto : public Vehiculo{

private:
    string color;
    string marca;
    int cilindrada;
public:
     void aspecto(string _c, string _m){

     color= _c;
     marca= _m;

     }

     void mostrar(){
     cout<<"color "<<color<<endl;
     cout<<"marca "<<marca<<endl;




     }

    void tipo(int _cilindrada){

    cilindrada = _cilindrada;

    }

    void mostrarcilindrada(){
    cout<<"tipo de cilindrada: "<<cilindrada<<endl;




    }

    void arrancar(){
        cout<<"Arrancar moto"<<endl;

    }
    void parar(){
        cout<<"Parar moto"<<endl;

    }
    void reposar(){
        cout<<"Reposar moto"<<endl;

    }







};




int main()
{

Taller taller(2,2);
taller.meter();
taller.arreglar();
taller.mostrarvehiculo();
cout<<endl;
coche Coche;
Coche.aspecto("verde","chevy");
Coche.mostrar();
Coche.tipodemotor(500);
Coche.mostrarmotor();
Coche.reposar();

cout<<endl;
moto Moto;
Moto.aspecto("negra","Yamaha");
Moto.mostrar();
Moto.tipo(123);
Moto.mostrarcilindrada();
Moto.reposar();


}

