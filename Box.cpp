#include "Box.h"
#include <iostream>

void Box::setlength(int len)
{
  length = len;
}
void Box::setwidth(int wid)
{
  width = wid;
}
void Box::setheigth(int hei)
{
 heigth = hei;
}
int Box::getlength()
{
  return length;
}
int Box::setwidth()
{
  return width;
}
int Box::getheight()
{
  return  heigth;
}
// Implement setters and getters
// Implemenet the calcVolume() unction
int Box::calcvolume() {
  return length * width * heigth;
}
