/*
Author: Tahmina Akther Munni
Course: CSCI-135
Instructors: Tong yi,
Assignment: Lab_8 E
Description:
    The program reads a PGM image from the file "inImage.pgm",
    and outputs a modified image to "outImage.pgm"
*/


#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>
using namespace std;

const int MAX_H = 512;
const int MAX_W = 512;

//prototype for 2*2 lab E
void copy2x2 (int img[MAX_H][MAX_W], int out[2*MAX_H][2*MAX_W], int row, int  col);




// Reads a PGM file.
// Notice that: height and width are passed by reference!
void readImage(int image[MAX_H][MAX_W], int &height, int &width) {
	char c;
	int x;
	ifstream instr;
	instr.open("inImage.pgm");

	// read the header P2
	instr >> c;
	assert(c == 'P');
	instr >> c;
	assert(c == '2');

	// skip the comments (if any)
	while ((instr>>ws).peek() == '#') {
		instr.ignore(4096, '\n');
	}

	instr >> width;
	instr >> height;

	assert(width <= MAX_W);
	assert(height <= MAX_H);
	int max;
	instr >> max;
	assert(max == 255);

	for (int row = 0; row < height; row++)
		for (int col = 0; col < width; col++)
			instr >> image[row][col];
	instr.close();
	return;
}


// Writes a PGM file
// Need to provide the array data and the image dimensions
void writeImage(int image [2*MAX_H][2*MAX_W], int height, int width) { //output image file 2*2 sq now
	ofstream ostr;
	ostr.open("outImage.pgm");
	if (ostr.fail()) {
		cout << "Unable to write file\n";
		exit(1);
	};

	// print the header
	ostr << "P2" << endl;
	// width, height
	ostr << width << ' ';
	ostr << height << endl;
	ostr << 255 << endl;

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);
			ostr << image[row][col] << ' ';
			ostr << endl;
		}
	}
	ostr.close();
	return;
}

int main() {

	int img[MAX_H][MAX_W]; // Declare a 2D array(matrix) to store an input image
	int h, w;

	readImage(img, h, w); // read it from the file "inImage.pgm"
	// h and w were passed by reference and
	// now contain the dimensions of the picture
	// and the 2-dimesional array img contains the image data
	// Now we can manipulate the image the way we like
	// for example we copy its contents into a new array
	
	int out[2*MAX_H][2*MAX_W]; //declare a 2D array to store an output image
	                       // we don't want to replace an original image
	                       //output image 2*2 now
	                       
										//lab work starts from here
										//Explanation you copy the input image to output image pixel by pixel by using nested for loops    
										//Part E  Scale the original picture to 200% of its size. It can be done by increasing the size of the picture by the factor of 2, and copying each pixel of the input as a small 2x2 square in the output. (We don’t do any interpolation of colors as more advanced scaling procedures would do.)
										//Change out file 2*2 in 3 places

										//write a function that can copy each pixel of the input as a small 2x2 square in the output


	for(int row = 0; row < h; row++) {
		for(int col = 0; col < w; col++) {
		    copy2x2(img, out, row, col);
		}   
		    
	}

	// and save this new image to file "outImage.pgm"
	writeImage(out, 2*h, 2*w);//output image 2*2 now
	

}
//prototype for 2*2
void copy2x2 (int img[MAX_H][MAX_W], int out[2*MAX_H][2*MAX_W], int row, int  col){
    //row and col is the coordinate of the current pixel of img
    //we want to make pixel img[row] [col] become a 2x2 square
    //if row =0; i=0 to 1 (2 pixel)
    //if row =0; i=2 to 3 (2 pixel)
    //if row =0; i=4 to 5 (2 pixel)
    for (int  i= 2*row; i < 2*row +2; i++){
        for (int  j= 2*col; j < 2*col +2; j++){
            out [i][j] = img[row][col];
        }
    }
    
}
