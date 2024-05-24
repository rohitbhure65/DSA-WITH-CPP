#include<iostream>
using namespace std;

// TODO : ENCAPSULATION

class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    int getSalary() {
      return salary;
    }
};


int main(){
    Employee obj;
    obj.setSalary(5000);
    cout<<obj.getSalary()<<endl;

    return 0;
}