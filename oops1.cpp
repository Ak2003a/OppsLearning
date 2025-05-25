#include <iostream>
using namespace std;

class student
{
  public:
  string name;
  int rollNumber;
  int grade;
  
  void showDetails()
  {
    cout<<"Student Name: "<<name<<endl;
    cout<<"Student RollNumber: "<<rollNumber<<endl;
    cout<<"Student grade: "<<grade<<endl;
  }
};
int main() 
{
  
  student s1;
  s1.name="Anish Kumar";
  s1.rollNumber=1104;
  s1.grade=5;
  
  s1.showDetails();
}