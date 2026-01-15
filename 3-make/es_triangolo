#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class triangolo {
private:
    float L1;
    float L2;
    float LB;
    float h;
public:
    float calcoAltezza(){
        float h = 2 * sqrt((L1+L2+LB)/2.0 * ((L1+L2+LB)/2.0 - L1) * ((L1+L2+LB)/2.0 - L2) * ((L1+L2+LB)/2.0 - LB)) / LB;
        return h;
    }

    float calcolAreaT(){
        float area = LB*h;
        return area/2;
    }

        float calcol2pT(){
        float p = L1+L2+LB;
        return p;
    }

     void setL1(float l1) {
        L1 = l1;
    }

     void setL2(float l2) {
        L2 = l2;
     }
     void setLB(float lB) {
        LB = lB;
     }
     void seth() {
        h = calcoAltezza();
     }

};

int main()
{
    triangolo ABC;

    ABC.setL1(5);
    ABC.setL2(7);
    ABC.setLB(7);
    ABC.seth();


    cout<<"perimetro Triangolo: "<<ABC.calcol2pT()<<endl;
    cout<<"area Triangolo: "<<ABC.calcolAreaT()<<endl;

    return 0;
}
