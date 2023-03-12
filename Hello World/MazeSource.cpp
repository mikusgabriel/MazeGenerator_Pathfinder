#include <iostream>
#include <string>
#include <tuple>
using namespace std;

class Maze {
public:
    int start_xAxis;
    int start_yAxis;
    


    void RandPoint(bool Start_End) {
        int xAxis;
        int yAxis;

        if (Start_End) {
            xAxis = rand() % 2;
            yAxis = rand() % 2;

            start_xAxis = xAxis;
            start_yAxis = yAxis;

        }

    }
    tuple<int, int> getStart() {
        return { start_xAxis,start_xAxis };
    }
   

    int get_xAxis() {
        return start_xAxis;
    }
    int get_yAxis() {
        return start_xAxis;
    }



};