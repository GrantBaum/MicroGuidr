//c config
static const char * homepoint;
static const char * destination;
//set these manually so that there are no functions that could
//be broken or hacked
int main(void) {
    homepoint = "coordinates";
    destination = "coordinates";

    return 0;
}
//gets the homepoint
const char * getHomePoint()
{
    return homepoint;

}
//gets the destination
const char * getDestination()
{
    return destination;

}

// action to take over the world

//its in c

