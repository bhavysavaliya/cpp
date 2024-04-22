#include <iostream>
using namespace std;
class DISTANCE 
{
private:
    int feet;
    float inches;

public:
   
    void inputDistance(int f, float i) 
    {
        feet = f;
        inches = i;
    }

    void getdistance()
    {
        cout << "enter feet:" <<feet<< endl;
        cout << "enter inches:" <<inches<< endl;
    } 

    
    void outputDistance() 
    {
        cout << "Distance: " << feet << " feet " << inches << " inches" << endl;
    }

    
    DISTANCE addDistance(DISTANCE d2) 
    {
        DISTANCE result;
        result.feet = feet + d2.feet;
        result.inches = inches + d2.inches;
        
        
        if (result.inches >= 12) {
            result.feet++;
            result.inches -= 12;
        }
        
        return result;
    }
};

int main() {
    DISTANCE d1, d2, sum;

    d1.inputDistance(4,9);
    d1.getdistance();
    d2.inputDistance(3,8);
    d2.getdistance();

    sum = d1.addDistance(d2);

    cout << "Sum of distances:" << endl;
    sum.outputDistance();

    return 0;
}
