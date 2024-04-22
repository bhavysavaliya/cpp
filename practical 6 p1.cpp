#include<iostream>
using namespace std;
class EMPLOYEE
{
private:
char employeeName[50];
double employeeCode;

public:
void setemployeeInfo();
void getemployeeInfo();
};
void EMPLOYEE::setemployeeInfo(){
 cout << "Enter Employee Name : ";
 cin >> employeeName;
 cout << "Enter Employee Code: ";
 cin >> employeeCode;
}

void EMPLOYEE::getemployeeInfo(){
cout << "---- Employee information ----"<<endl;
cout << "Employee Name:" << employeeName<<endl;
cout << "Employee Code: " <<employeeCode<<endl;
}
int main()
{
    EMPLOYEE employee [100];
    int n;
    cout << "Enter no of Employee : ";
    cin >> n;
    for(int i=0; i<n; i++)
    {
     employee [i].setemployeeInfo();
     }
    for(int i=0; i<n; i++)
    {
     employee [i].getemployeeInfo();
     }   
    return 0;
}
