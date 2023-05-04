#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>
#include "imageio.h"

void invert(std::string filename){
    std::string input = filename;
    int img[MAX_H][MAX_W];
    int h, w;
    readImage(input, img, h, w);

    int output_inverted[MAX_H][MAX_W];
    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            output_inverted[i][j] = 255 - img[i][j];
        }
    }
    writeImage("imageA.pgm", output_inverted, h, w);
}