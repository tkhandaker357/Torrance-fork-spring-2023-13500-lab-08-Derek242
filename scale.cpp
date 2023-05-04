#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>
#include "imageio.h"

void scale2x(std::string filename){
    std::string input = filename;
    int img[MAX_H][MAX_W];
    int h, w;
    readImage(input, img, h, w);

    int output_scaled[MAX_H][MAX_W];
    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            output_scaled[i*2][j*2] = img[i][j];
            output_scaled[i*2 + 1][j*2] = img[i][j];
            output_scaled[i*2][j*2 + 1] = img[i][j];
            output_scaled[i*2 + 1][j*2 + 1] = img[i][j];
        }
    }
    writeImage("imageE.pgm", output_scaled, 2*h, 2*w);
}