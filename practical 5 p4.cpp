#include<iostream>
#include<iomanip>
using namespace std;
class Item{
private:
double cost;
double quantity;

double display ();
public:

void put_data(double c,double q){
cost= c;
quantity=q;
} 


double get_data(){
return display();
}
};

double Item::display(){
 cout << "the cost of item :" <<cost<< endl;
 cout << "the quantity of item :" <<quantity<< endl;
}

int main()
{
 fixed;
Item c1;
double Cos,Qua;



cout << "Enter the Cost" << endl;
cin >> Cos;
cout << "Enter the Quantity" << endl;
cin >> Qua;




c1.put_data(Cos,Qua);

cout << "" <<c1.get_data ()<< endl;

    return 0;
}
