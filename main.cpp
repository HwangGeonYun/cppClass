//
// Created by ghkdw on 2023-03-17.
//
/*
#include <iostream>
#include <map>
#include <limits>

using namespace std;
int main(){
    const double kWhClock = 0.1;

    double currentBatteryCaphacity;
    double distancePerkWh;
    double ratioOfOfBatteryCaphacity;
    double distanceToGoal;
    double goToWayPointNow = false;

    const std::map<int, string> wayPoint = {{100, "Gyeongsan"}, {200, "Gimcheon"}, {300, "Cheongju"}, {400, "Anseong"}};


    cout << "배터리용량 전비 충전량(%) 목적지까지 거리\n";
    cin >> currentBatteryCaphacity >> distancePerkWh
        >> ratioOfOfBatteryCaphacity >> distanceToGoal;

    double currentDistance = 0;

    const double firstBatteryCaphacity = currentBatteryCaphacity;

    while(currentDistance < distanceToGoal){
        int beforeRatio = ratioOfOfBatteryCaphacity / 10;
        int beforeDistance = currentDistance /100;

        currentBatteryCaphacity -= 1 * kWhClock;
        ratioOfOfBatteryCaphacity = (currentBatteryCaphacity/firstBatteryCaphacity)*100;

        currentDistance += (distancePerkWh * kWhClock);

        int nextRatio = ratioOfOfBatteryCaphacity / 10;
        int nextDistance = currentDistance / 100;

        if((beforeRatio != nextRatio) && (beforeRatio != 10))
            cout << beforeRatio * 10 << "%\n";

        if(goToWayPointNow == true){
            if(beforeDistance != nextDistance){
                ratioOfOfBatteryCaphacity = 80;
                currentBatteryCaphacity = (firstBatteryCaphacity/100)*ratioOfOfBatteryCaphacity;
                if(distancePerkWh<0)
                    distancePerkWh = - distancePerkWh;

                ratioOfOfBatteryCaphacity -= 6;
                currentBatteryCaphacity = (ratioOfOfBatteryCaphacity/100)*firstBatteryCaphacity;

                goToWayPointNow = false;
            }
            else
                continue;
        }

        else if(ratioOfOfBatteryCaphacity<=20){
            goToWayPointNow = true;

            auto wayPointIterator = wayPoint.begin();
            pair<int, string> nearestWayPoint(0, "null");
            int nearestWay = numeric_limits<int>::max();
            while(wayPointIterator != wayPoint.end()){
                int distanceWithPoint = wayPointIterator -> first - currentDistance;

                if(distanceWithPoint < 0)
                    distanceWithPoint = -distanceWithPoint;
                if(distanceWithPoint < nearestWay){
                    nearestWayPoint.first = wayPointIterator->first;
                    nearestWayPoint.second = wayPointIterator->second;
                }

                wayPointIterator++;
            }
        }

        //cout <<"distance" << currentDistance << "ratio" << ratioOfBatteryCaphacity << "% battery" << currentBatteryCaphacity << "\n";
    }
    return 0;
}*/