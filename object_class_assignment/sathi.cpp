#include<iostream>
using namespace std;
 
class sathiharu {
    public: 
        string name;
        string address;
        int age;
 
    public:
        void ghumeprogram() {
            cout<<"Oi Espali ghumna jaam na" <<name <<age<<"barsa ko umer ma hike garna sakinchha masta ,ka jane hola ta "
            <<address<<" jada thik hola hai?"<<endl;
        }
};
 
int main() {
    sathiharu firstdost, seconddost;
    firstdost.name = "Kyathrine";
    firstdost.age = 20;
    firstdost.address = "Pilotbaba";
    firstdost.ghumeprogram();
 
    seconddost.name = "Sanjina";
    seconddost.age = 22;
    seconddost.address = "pilotbaba";
    seconddost.ghumeprogram();
 
}