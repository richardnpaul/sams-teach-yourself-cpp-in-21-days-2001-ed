// Listing 6.9 - Begin 6.9.cpp

#include "6.8.hpp"

Rectangle::Rectangle(int top, int left, int bottom, int right) {
    itsTop = top;
    itsLeft = left;
    itsBottom = bottom;
    itsRight = right;

    itsUpperLeft.SetX(left);
    itsUpperLeft.SetY(top);

    itsUpperRight.SetX(right);
    itsUpperRight.SetY(top);

    itsLowerLeft.SetX(left);
    itsLowerLeft.SetY(bottom);

    itsLowerRight.SetX(right);
    itsLowerRight.SetY(bottom);
}

// comput area of the rectanble by finding cornersides,
// establish width and height and then multiply
int Rectangle::GetArea() const {
    int Width = itsRight - itsLeft;
    int Height = itsTop - itsBottom;
    return (Width * Height);
}

int main() {
    // initialise a local Rectangle variable
    Rectangle MyRectangle(100, 20, 50, 80);

    int Area = MyRectangle.GetArea();

    std::cout << "Area: " << Area << "\n";
    std::cout << "Upper Left X Coordinate: ";
    std::cout << MyRectangle.GetUpperLeft().GetX();
    return 0;
}