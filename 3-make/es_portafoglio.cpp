#include <iostream>

using namespace std;

class portafoglio {
private:
    float v;

public:

    portafoglio():
        v(3)
    {}

    portafoglio(float a):
        v(a)
    {}

    void stampa(){
    cout<<"il valore e' :"<< v <<endl;
    }

    float refresh(float n,bool segno){
    if (segno == 1){
        v+=n;
    }
    else{
        v-=n;
    }
    return v;
    }
};

int main()
{
   float valore,valore1;
   bool segno;

   portafoglio p;

   p.stampa();

   cout<< "inserisci il valore(p): ";
   cin>>valore;

   cout<<"inserisci il segno (1='+' 0='-')(p): ";
   cin>>segno;

   p.refresh(valore,segno);

   cout<< "inserisci il valore del portafoglio(s): ";
   cin>>valore1;

   portafoglio s(valore1);

   s.stampa();

   cout<< "inserisci il valore da aggiungere(s): ";
   cin>>valore;

   cout<<"inserisci il segno (1='+' 0='-')(s): ";
   cin>>segno;

   s.refresh(valore,segno);

   p.stampa();
   s.stampa();

   return 0;
}
