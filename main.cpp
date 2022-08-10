#include <iostream>

int main() {
    std::cout << "These are the following scenarios of common driver annoyances." << std::endl;

    void temperature(temp){
        temp = int;
        if temp > 80:
        cout << "The temperature is above" << temp << "you should turn on the fan or air conditioning."
        if temp < 65:
        cout << "The temperature is below" << temp << "you should turn on the heater."
        else: cout << "Inform the user to look at the car's temperature gauge to determine the current temperature. "
    }


    void phoneServices(calls, message, messages){
        calls = int;
        messages = int;
        if calls = 1;
        cout << "Alert the user by putting a notification on the car's screen."
        cout << message
        if call > 1 ? messages > 1;
        cout << "There is more than call or message. Do not alert the driver regarding these calls and/or messages."
        else: cout << "Calls and messages are handled by the user's phone and managed by the automobile's dashboard."
    }


    void drivingSpeed(speed, laneTime){
        speed = int;
        if speed > 85:
        cout << "The user is going at an excessively high speed, inform the driver to slow down."
        if laneTime > 5:
        cout << "Inform the driver to not change lanes since the lane change is too quickly since other drivers may be around."

    }


    void highBeams(beamCondition){
        beamCondition = String;
        if beamCondition == "completely dark":
        cout << "The driver should raise their high beams in this scenario."
        if beamCondition == "foggy":
        cout << "The driver should raise their high beams to see other cars and drive slowly if cars are in the area."
        if beamConditon == "raining":
        cout << "The driver should raise their beams. If there is excessive rain, the driver should raise their high beams."
        if beamCondition == "snowing":
        cout << "The driver should purchase white fog lights to see in this condition."
        else: cout << "The driver should determine if beams need to be used by themselves or the passenger."
    }

    void useGPS(status){
        status = String;
        if status == "not driving":
        cout << "The driver should route their destination if needed using the phone's integrated GPS system or another application."
        if status == "driving":
        cout << "The driver should stop at a local rest area or restaurant to navigate to their next destination."
        else: cout << "The driver should recognize where they are driving or navigate first."
    }

    void blockedSituation(timePassed){
        timePassed = int; // timePassed in minutes
        if timePassed == 0:
        cout << "Alert the driver immediately to avoid the upcoming blocked lane to prevent an accident."
        if timePassed > 5:
        cout << "There is a blocked lane ahead, you must skip the exit you want to drive to, and use the following one."
        else: cout << "The driver should drive carefully and be cautious when driving on the road."
    }

    void afterAccident(){

    }


    void reportAccident(){

    }


    void scenarioTailgate(driver){

    }

    return 0;
}