#pragma once
#include <iostream>


const int MAX_H = 512;
const int MAX_W = 512;

void readImage(std::string filename, int image[MAX_H][MAX_W], int &height, int &width);
void writeImage(std::string filename, int image[MAX_H][MAX_W], int height, int width); 
void invert(std::string filename);
void invert_half(std::string filename);
void boxx(std::string filename);
void frame(std::string filename);
void scale(std::string filename);
void pixelate(std::string filename);

