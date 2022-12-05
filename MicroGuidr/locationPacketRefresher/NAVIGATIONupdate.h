typedef short int16_t;
static const char * currentLocation;
static const char * destination;
static const char * homepoint;
static int16_t distance;
static int16_t bearing;
///////////////////////////////////////////////////////////////////////////////////////////
//defining the values that come back and forth from the rocket
int main(void) {
    currentLocation = "coordinates";
    destination = "coordinates";
    homepoint = "coordinates";
    distance = 0;
    bearing = 0;

    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////
//update the location
void updateLocation()
{
    currentLocation = gpsCoordinates->value;

}
//update the destination
void updateDestination()
{
    destination = locationCoordinates->value;

}
//update the distance
void updateDistance()
{
    distance = gpsDistance->value;

}
//update the bearing
void updateBearing()
{
    bearing = gpsBearing->value;

}
