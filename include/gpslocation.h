//
// Created by sathyam on 05/05/17.
//

#ifndef IMSCTESTPROJECT_GPSLOCATION_H
#define IMSCTESTPROJECT_GPSLOCATION_H

class GPSLocation {
public:
    GPSLocation(const std::string& latitude, const std::string& longitude);
    GPSLocation(double latitude, double longitude);
    GPSLocation(const GPSLocation& gpsLocation);
    GPSLocation operator=(const GPSLocation& gpsLocation);

    double operator-(const GPSLocation& gpsLocation) const;
    bool operator==(const GPSLocation& gpsLocation) const;
    bool operator!=(const GPSLocation& gpsLocation) const;
public:
    const double latitude;
    const double longitude;
    const double latitime;
    const double longitime;
};

#endif //IMSCTESTPROJECT_GPSLOCATION_H
