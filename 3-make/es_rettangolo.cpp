#include <iostream>
#include <string>

using namespace std;

class rettangolo {
private:
    float l;
    float L;
public:
    float calcolArea(){
        float area = L*l;
        return area;
    }

        float calcol2p(){
        float p = L+l;
        return 2*p;
    }
     void setl(float L1) {
        l = L1;
    }
 void setL(float l1) {
     do{L = l1
         }while(l<L);
    }
};

int main()
{
    rettangolo ABCD;

    ABCD.setl(4);
    ABCD.setL(6);

    cout<<"perimetro Rettangolo: "<<ABCD.calcol2p()<<endl;
    cout<<"area Rettangolo: "<<ABCD.calcolArea()<<endl;
    
    return 0;
}
