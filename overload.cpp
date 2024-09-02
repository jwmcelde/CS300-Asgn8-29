#include <iostream>

//Prototype for a square
int area(double sideLength);
//Prototype for a rectangle
int area(double width, double length);

int main() {
    std::cout << area(5) << '\n'; 
    std::cout << area(5, 7) << '\n'; 
}

int area(double sideLength){
    return sideLength * sideLength;
}

int area(double width, double height){
    return width * height;
}
