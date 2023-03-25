/*#include <iostream>
#include <limits>
#include <map>
using namespace std;

int main(){
    const double  kWhClock = 0.1;

    double currentBatteryCaphacity;
    double distancePerkWh;
    double ratioOfBatteryCaphacity;
    double distanceToGoal;
    bool goToWayPointNow = false;

    const std::map<int, string> wayPoint = {{100 , "Gyeongsan"}, {200, "Gimcheon"}, {300, "Cheongju"}, {400, "Anseong"}};

    //map<int, string>::const_iterator nearPoint = wayPoint.begin();
    cout << "배터리용량 전비 충전량(%) 목적지까지 거리\n";


        currentBatteryCaphacity = 72.6;
        distancePerkWh = 5.6;
        ratioOfBatteryCaphacity = 100;
        distanceToGoal = 420;
    double currentDistance = 0;

    const double firstBatteryCaphacity = currentBatteryCaphacity;

    while(currentDistance<distanceToGoal){
        int beforeRatio = ratioOfBatteryCaphacity / 10;
        int beforeDistance = currentDistance/100;

        currentBatteryCaphacity -= 1 * kWhClock;
        ratioOfBatteryCaphacity = (currentBatteryCaphacity/firstBatteryCaphacity)*100;

        currentDistance += (distancePerkWh * kWhClock);

        int nextRatio = ratioOfBatteryCaphacity / 10;
        int nextDistance = currentDistance / 100;

        if((beforeRatio != nextRatio) && (beforeRatio != 10))
            cout << beforeRatio * 10 << "%\n";

        //numeric_limits<int>::max() << ratioOfBatteryCaphacity;
        distancePerkWh;

        if(goToWayPointNow == true){
            if(beforeDistance != nextDistance){
                ratioOfBatteryCaphacity = 80;
                currentBatteryCaphacity = (firstBatteryCaphacity/100)*ratioOfBatteryCaphacity;
                if(distancePerkWh<0)
                    distancePerkWh = -distancePerkWh;


                //wayPoint에서 충전하고 밥먹는데, 시동 켜놓고 먹음.
                ratioOfBatteryCaphacity -= 6;
                currentBatteryCaphacity = (ratioOfBatteryCaphacity/100)*firstBatteryCaphacity;

                goToWayPointNow = false;
            }
        }

        if(ratioOfBatteryCaphacity <= 20 && goToWayPointNow == false){
                goToWayPointNow = true;
                //변수가 뭘로 해야될지 몰라서 auto 박았다.
                auto wayPointIterator = wayPoint.begin();
                pair<int, string> nearestWayPoint( 0, "null");
                int nearestWay = numeric_limits<int>::max();
                while(wayPointIterator!=wayPoint.end()){
                    int distanceWithPoint = wayPointIterator->first - currentDistance;

                    if (distanceWithPoint < 0)
                        distanceWithPoint = -distanceWithPoint;
                    if (distanceWithPoint < nearestWay)
                        {nearestWay = distanceWithPoint;
                         nearestWayPoint.first = wayPointIterator->first;
                         nearestWayPoint.second = wayPointIterator->second;}

                        wayPointIterator++;
                }
                //ratioOfBatteryCaphacity = 80;
                //currentBatteryCaphacity = (firstBatteryCaphacity / 100) * ratioOfBatteryCaphacity;

                 if(currentDistance > nearestWayPoint.first)
                     distancePerkWh = - distancePerkWh;
                cout << "add waypoint " << nearestWayPoint.second << " - 20%\n";
        }

        //}

        //cout << "distance" << currentDistance << "ratio" << ratioOfBatteryCaphacity << "% batteray" << currentBatteryCaphacity<<"\n";
    }

    cout << "arrival!-" << 100-(int)ratioOfBatteryCaphacity << "%" << endl;

    return 0;
}*/