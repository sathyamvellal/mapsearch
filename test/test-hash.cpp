//
// Created by sathyam on 05/05/17.
//

#include <iostream>
#include <string>
#include "../include/util.h"

int main() {
    std::cout << "Network Hash Test" << std::endl;

    std::string foo("bar");
    std::cout << "foo: " << nhash("bar") << std::endl;
    std::cout << "foo: " << nhash(foo) << std::endl;

    return 0;
}