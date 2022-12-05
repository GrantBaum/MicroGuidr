//including all the files that we have already written so that we can use them in this file
#include <finLogic.h>
#include <stdio.h>
#include <finpacRefresher.h>
#include <targetconfig.h>
#include <NAVIGATIONupdate.h>
#include <STAGINGlogic.h>
///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////
//compnsating for pitch anomolies
typedef short int16_t;
static int16_t pitch;
void pitchCompensate()
{
    if (pitch > 40)
    {
        pitchcommand = 30;
        printf("pitch compensation engaged\n");
    }
    if (pitch > 39)
    {
        pitchcommand = 30;
        printf("pitch compensation engaged\n");
    }
    if (pitch > 38)
    {
        pitchcommand = 30;
        printf("pitch compensation engaged\n");
    }
    if (pitch > 37)
    {
        pitchcommand = 30;
        printf("pitch compensation engaged\n");
    }
    if (pitch > 36)
    {
        pitchcommand = 30;
        printf("pitch compensation engaged\n");
    }
    if (pitch > 35)
    {
        pitchcommand = 30;
        printf("pitch compensation engaged\n");
    }
    if (pitch > 34)
    {
        pitchcommand = 30;
        printf("pitch compensation engaged\n");
    }
    if (pitch > 33)
    {
        pitchcommand = 30;
        printf("pitch compensation engaged\n");
    }
    if (pitch > 32)
    {
        pitchcommand = 30;
        printf("pitch compensation engaged\n");
    }
    if (pitch > 31)
    {
        pitchcommand = 30;
        printf("pitch compensation engaged\n");
    }
    if (pitch > 30)
    {
        pitchcommand = 30;
        printf("pitch compensation engaged\n");
    }

}

int main(void) {
    pitch = 0;

    return 0;
}
