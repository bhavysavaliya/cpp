#include<iostream>
using namespace std;
class Info
{
    static int Count;

    public: 
    static void incriment()
    {
        Count = Count + 3;
        cout << "Count is:" << Count << endl ;
    
    }
};
int Info::Count;
int main()
{
    Info i1;
    i1.incriment();
    

    return 0;
}
