#include<iostream>
using namespace std;
 
class sathiharu {
    public: 
        string name;
        string address;
        int age;
 
    public:
    sathiharu( string naam,string address,int age)
    {
       cout<<"\nOi Espali ghumna jaam na\n" <<naam <<age<<"\nbarsa ko umer ma hike garna sakinchha masta ,ka jane hola ta\n "
          <<address<<" jada thik hola hai?"<<endl; ;
      
    }
        // void ghumeprogram() {
        //     cout<<"Oi Espali ghumna jaam na" <<name <<age<<"barsa ko umer ma hike garna sakinchha masta ,ka jane hola ta "
        //     <<address<<" jada thik hola hai?"<<endl;
        // }
};
 
int main() {
    sathiharu firstdost("Santi","bhaisepati",23),seconddost("Mina","Santinagar",23);
    // firstdost.name = "Kyathrine";
    // firstdost.age = 20;
    // firstdost.address = "Pilotbaba";
    // firstdost.ghumeprogram();
 
    // seconddost.name = "Sanjina";
    // seconddost.age = 22;
    // seconddost.address = "pilotbaba";
    // seconddost.ghumeprogram();
 
}