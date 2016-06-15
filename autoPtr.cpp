#include<iostream>
#include <vector>


using namespace std;

template <typename T>
class smtPtr {
private:
    T * ptr;
public:
    smtPtr() {
        ptr = new T;
    }
    ~smtPtr() {
        cout << "\ndestructor called " << endl;
        free(ptr);
        
    }
    
    T& operator * () {
        return *ptr;
    }
    
    T* operator -> () {
        return ptr;
    }
    
    
};


struct  Employee
{
    int salary;
    int age;
};


int main ()
{
    smtPtr<int> sPtr;
    *sPtr = 20;
    cout << "sPtr = " << *sPtr << "\n";
    
    smtPtr<Employee> emp;
    emp->age = 20;
    emp->salary = 6000;
    
    cout << "smart Employee" << "\n";
    
    cout << "Age = " << emp->age << "      Salary= " << emp->salary << " "  << "\n";
    cout << "Age = " << (*emp).age << "      Salary= " << (*emp).salary << " "  << "\n";
    
   
    return 0;
}
