//
// Created by sathyam on 06/05/17.
//

#include <cmath>
#include <limits>
#include <string>
#include "../include/gpslocation.h"
#include "../include/util.h"

GPSLocation::GPSLocation(const std::string& latitude, const std::string& longitude)
    : GPSLocation(std::stod(latitude), std::stod(longitude)) {}

GPSLocation::GPSLocation(double latitude, double longitude)
    : latitude(latitude),
      longitude(longitude),
      latitime(toRadians(latitude) * EARTH_RADIUS),
      longitime(toRadians(longitude) * EARTH_RADIUS) {
}

GPSLocation::GPSLocation(const GPSLocation& gpsLocation)
    : latitude(gpsLocation.latitude),
      longitude(gpsLocation.longitude),
      latitime(gpsLocation.latitime),
      longitime(gpsLocation.longitime) {}

GPSLocation GPSLocation::operator=(const GPSLocation& gpsLocation) {
    return (*this);
}

double GPSLocation::operator-(const GPSLocation& other) const {
    double x = this->latitime - other.latitime;
    double y = this->longitime - other.longitime;
    return std::sqrt(x * x + y * y);
}

bool GPSLocation::operator==(const GPSLocation& other) const {
    double x = this->latitude - other.longitude;
    double y = this->longitude - other.longitude;
    return (fabs(x) < std::numeric_limits<double>::epsilon()) && (fabs(y) < std::numeric_limits<double>::epsilon());
}

bool GPSLocation::operator!=(const GPSLocation& other) const {
    return !((*this) == other);
}