#include <iostream>
using namespace std;

class data_information{
double number;
double cost;

public:
     
 void put_data(double q,double c){
   number = q ;
   cost = c ;
 }
 double get_data();
};

double data_information::get_data(){
   cout << "The number of product: " << number << endl ;
   cout << "The value of cost : " << cost ;
   return 0;
}


int main() 
{
double a,b;
cout << "Enter the number of the product" << endl;
cin >> a;
cout << "Enter the cost of the product" << endl;
cin >> b;
   data_information d1;
   d1.put_data(a,b);
   d1.get_data();
    
   return 0;
}
