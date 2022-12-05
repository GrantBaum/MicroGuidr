//defing the values the rocket gives us to use as staging
#define TRUE 1
#define FALSE 0
typedef unsigned char uint8_t;
typedef short int16_t;
static int16_t pitch;
static int16_t yaw;
static int16_t roll;
static int16_t velocity;
static int16_t rateOfAcceleration;
static int16_t climbRate;
static int16_t altitude;
static int16_t throttle;
static uint8_t stage;
static int16_t pitchCommand;
static int16_t yawCommand;
static int16_t rollCommand;
static int16_t throttleCommand;
static uint8_t stageCommand;
//the pinging function
int16_t ping()
{
    return altitude;
    return pitch;
    return yaw;
    return roll;
    return velocity;
    return rateOfAcceleration;
    return climbRate;
    return throttle;

}
///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////
//defining the values which we give to the rocket
void setThrottle(int16_t value)
{
    throttleCommand = value;

}
void setPitch(int16_t value)
{
    pitchCommand = value;

}
void setYaw(int16_t value)
{
    yawCommand = value;

}
void setRoll(int16_t value)
{
    rollCommand = value;

}
//logic for staging based on velocity
void velocityLogic()
{
    if (velocity < 100)
        stageCommand = TRUE;

}
//staging logic based on altitude
void altLogic()
{
    if (stage == FALSE)
        if (altitude > 10000)
        stageCommand = TRUE;
    else
        stageCommand = FALSE;
    ;

}
//logic for staging based on roll
void rollLogic()
{
    if (roll < 90)
        stageCommand = TRUE;
    else
        stageCommand = FALSE;
    ;

}
//logic for staging based on pitch
void pitchLogic()
{
    if (pitch < 20)
        stageCommand = TRUE;
    else
        stageCommand = FALSE;
    ;
}
//logic for staging based on yaw
void yawLogic()
{
    if (yaw < 10)
        stageCommand = TRUE;
    else
        stageCommand = FALSE:
    ;

}
///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
int main(void) {
    pitch = 0;
    yaw = 0;
    roll = 0;
    velocity = 0;
    rateOfAcceleration = 0;
    climbRate = 0;
    altitude = 0;
    throttle = 0;
    stage = FALSE;
    pitchCommand = 0;
    yawCommand = 0;
    rollCommand = 0;
    throttleCommand = 0;
    stageCommand = FALSE;
    ;

    return 0;
}
///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////
// Path: logic\STAGINGlogic.c