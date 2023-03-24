#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>
#include "imageio.h"

void pixelate(std::string filename){
    std::string input = filename;
    int img[MAX_H][MAX_W];
    int h, w;
    readImage(input, img, h, w);

    int pixel[MAX_H][MAX_W];
    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            int x = (img[i][j] + img[i+1][j] + img[i][j+1] + img[i+1][j+1])/4;
            pixel[i][j] = x;
            pixel[i+1][j] = x;
            pixel[i][j+1] = x;
            pixel[i+1][j+1] = x;
        
        }
    }
    writeImage("imageF.pgm", pixel, h, w);
}