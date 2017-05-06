//
// Created by sathyam on 05/05/17.
//

#include <cmath>
#include <string>
#include "../include/util.h"

std::hash<std::string> nhash; // Network::Hash

double toRadians(double inDegrees) {
    return inDegrees * (M_PI / 180.0);
}

double toDegrees(double inRadians) {
    return inRadians * (180.0 / M_PI);
}