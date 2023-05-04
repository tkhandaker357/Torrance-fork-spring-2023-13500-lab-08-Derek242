#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>
#include "imageio.h"

void invert_half(std::string filename){
    std::string input = filename;
    int img[MAX_H][MAX_W];
    int h, w;
    readImage(input, img, h, w);

    int output_half_invert[MAX_H][MAX_W];
    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            if (j >= w/2){
                output_half_invert[i][j] = 255 - img[i][j];
            } else{
                output_half_invert[i][j] = img[i][j];
            }
        }
    }
    writeImage("imageB.pgm",output_half_invert, h, w);
}