OBJECTS = imageio.o invert.o invert-half.o box.o frame.o scale.o pixelate.o
JPG = 1.jpg 2.jpg 3.jpg 4.jpg 5.jpg 6.jpg
COMPILES = imageA.pgm imageB.pgm imageC.pgm imageD.pgm imageE.pgm imageF.pgm

sample: sample sample.o $(OBJECTS) 
	g++ -o sample sample.o  $(OBJECTS)

sample.o: sample.cpp imageio.h

imageio.o: imageio.cpp imageio.h

invert.o: invert.cpp imageio.h

invert-half.o: invert-half.cpp imageio.h

box.o: box.cpp imageio.h

frame.o: frame.cpp imageio.h

scale.o: scale.cpp imageio.h

pixelate.o: pixelate.cpp imageio.h

clean:
	rm -f sample sample.o $(JPG) $(COMPILES) $(OBJECTS)
