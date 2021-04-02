// Listing 5.7 - demonstrates use
// of default parameter values

#include <iostream>

int VolumeCube(int length, int width = 25, int height = 1);

int main() {
    int length = 100;
    int width = 50;
    int height = 2;
    int volume;

    volume = VolumeCube(length, width, height);
    std::cout << "First volume equals: " << volume << std::endl;

    volume = VolumeCube(length, width);
    std::cout << "Second time volume equals: " << volume << std::endl;

    volume = VolumeCube(length);
    std::cout << "Third time volume equals: " << volume << std::endl;
    return 0;
}

int VolumeCube(int length, int width, int height) {
    return (length * width * height);
}