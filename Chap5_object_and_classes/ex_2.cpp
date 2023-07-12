#include<iostream>
using namespace std;
class iteminfo
{
    private :
     int itemid;
     float cost;
    public:
     void setdata (int it,float cst)
     {
        itemid =it;
        cost = cst;
     }
     void showdata()
     {
        cout<<"\nItem ID:  "<<itemid;
        cout<<"\nCost :  "<<cost<<endl;

     }

};
int main()
{
    iteminfo i1,i2;
    i1.setdata(55,45.6);
    i2.setdata(22,33.34);

    cout<<"\nInformation on first Item";
    i1.showdata();

    cout<<"\nInformation on second Item";
    i2.showdata();

    return 0;
}