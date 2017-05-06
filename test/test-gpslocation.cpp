//
// Created by sathyam on 06/05/17.
//

#include <iostream>
#include "../include/gpslocation.h"

int main() {
    GPSLocation l1("34.4383796", "-119.188059");
    GPSLocation l2("33.9872657", "-118.465677");

    std::cout << "Distance: " << l1 - l2 << std::endl;

    return 0;
}