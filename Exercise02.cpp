#include <iostream>
using namespace std;
#include "Box.h"
int main() {
  
   // 1. Create a Box type object called box1
  
  Box box1;
   // ======= DO NOT CHANGE THE INPUT ===========
   int heigth, length, width;
   cout << "Enter the Height of the Box : ";
   cin >> heigth;
   cout << "Enter the Length of the Box : ";
   cin >> length;
   cout << "Enter the width of the Box : ";
   cin >> width;
   // ===========================================
  
   // 2. Use setters assign height, length, width throw
  
   // === DO NOT CHANGE THE OUTPUT =============
   cout << "Box Height " <<box1.getheigth()<< endl;
   cout << "Box Length " << box1.getlength() << endl;
   cout << "Box Width " << box1.getwidth() << endl;
   cout << "Volume of Box is " << box1.calcvolume() << endl;
   // ==========================================
      return 0;
}

