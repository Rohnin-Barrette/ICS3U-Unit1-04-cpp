// Copyright (c) 2021 Rohnin Barrette rights reserved
//
// Created by: Mr. Coxall
// Created on: Sep 2021
// This program calculates the area and perimeter of a rectangle
//    with dimensions 5cm x 3cm

#include <iostream>
using std::cout;
using std::endl;

int main() {
    // variables for length and width
    int length = 5;
    int width = 3;

    cout << "calculate the area of the following: " << endl;
    cout << "Area = length cm * width cm" << endl;
    cout << "Area = " << length << "cm * " << width << "cm" << " = "
        << (length * width) << "cm²\n" <<endl;

    cout << "calculate the perimiter of the following:" <<endl;
    cout << "perimeter = (length + width)*2 " << endl;
    cout << "perimeter = (" << length << "cm + " << width << "cm )* 2 = "
        << ((length + width) *2) <<"cm" << endl;

//  Return 0 at the end of a function that is supposed to return an int.
    return 0;
}
