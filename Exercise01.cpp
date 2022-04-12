#include <iostream>
#include <cstring>
using namespace std;
class Student{
  private:
    int studnetID;
    char name[20];
  public:
    void assignDetails(int stID, char NAME[]);
    void display(); 
};
void Student::assignDetails(int stID, char NAME[]){
  studnetID=stID;
  strcpy(name,NAME);
}
void Student::display(){
  cout<<"Student ID :"<<studnetID<<endl;
  cout<<"Name : "<<name<<endl;
}
int main() {
  
// == DO NOT CHANGE THE MAIN PROGRAM =================
   Student mystd;
   mystd.assignDetails(1212, "Amalinga");
   mystd.display();
//==========================
   return 0;
}
