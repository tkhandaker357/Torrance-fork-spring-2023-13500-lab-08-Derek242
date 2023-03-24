/*
Author: Derek Ni
Course: CSCI-135
Instructor: Micheal Zamansky
Assignment: Lab 8

Description: Using different functions to morph the images using makefile and compiling through main. 
Additionally, I added and pushed a 3rd image
*/

#include <iostream>
#include "imageio.h"

int main(){
  invert("image1.pgm");
  invert_half("image2.pgm");
  boxx("image1.pgm");
  frame("image2.pgm");
  scale("image3.pgm");
  pixelate("image3.pgm");
  return 0;
}
