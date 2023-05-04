#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>
#include "imageio.h"

void output_pixelatedate(std::string filename){
    std::string input = filename;
    int img[MAX_H][MAX_W];
    int h, w;
    readImage(input, img, h, w);

    int output_pixelated[MAX_H][MAX_W];
    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            int x = (img[i][j] + img[i+1][j] + img[i][j+1] + img[i+1][j+1])/4;
            output_pixelated[i][j] = x;
            output_pixelated[i+1][j] = x;
            output_pixelated[i][j+1] = x;
            output_pixelated[i+1][j+1] = x;
        
        }
    }
    writeImage("imageF.pgm", output_pixelated, h, w);
}