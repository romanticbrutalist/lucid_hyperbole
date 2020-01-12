#include <stdio.h>
#include <opencv2/opencv.hpp>
//g++ ~/lucid_hyperbole/c++code/test.cpp -o t `pkg-config --cflags --libs opencv`
using namespace cv;
using namespace std;
int main()
{
    Mat<Vec3b> image;
    image = imread("/home/caliban/lucid_hyperbole/avsa000/images/avsa005.jpg", CV_LOAD_IMAGE_COLOR);   // Read the file

    if(! image.data )                              // Check for invalid input
    {
        cout <<  "Could not open or find the image" << endl ;
        return -1;
    }

    cout<<image(0,0)[0]<<endl;
    namedWindow( "Display window", WINDOW_AUTOSIZE );// Create a window for display.
    imshow( "Display window", image );                   // Show our image inside it.

    waitKey(0);                                          // Wait for a keystroke in the window
    return 0;

}
