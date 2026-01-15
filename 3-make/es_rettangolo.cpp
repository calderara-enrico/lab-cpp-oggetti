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

     void setL(float L1) {
        l = L1;
    }

     void setl(float l1) {
        L = l1;
    }
};

int main()
{
    rettangolo ABCD;

    ABCD.setL(6);
    ABCD.setl(4);

    cout<<"perimetro Rettangolo: "<<ABCD.calcol2p()<<endl;
    cout<<"area Rettangolo: "<<ABCD.calcolArea()<<endl;
    
    return 0;
}
