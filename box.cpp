#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>
#include "imageio.h"

void white_box(std::string filename){
    std::string input = filename;
    int img[MAX_H][MAX_W];
    int h, w;
    readImage(input, img, h, w);

    int outputbox[MAX_H][MAX_W];
    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            if ((j >= w/4) && (i >= h/4) && (j <= (3*w)/4) && (i <= (3*h)/4)){
                    outputbox[i][j] = 255;
            } else {
                outputbox[i][j] = img[i][j];
            }
        }
    }
    writeImage("imageC.pgm", outputbox, h, w);
}
