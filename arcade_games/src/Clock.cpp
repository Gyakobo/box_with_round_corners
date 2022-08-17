#include "../headers/Clock.h"

_Clock::_Clock() {
    vector<vec4> row_color;
    for (int i=-1; i<32; i++) {
        row_color.push_back(DEFAULT);
    }
    for (int i=-1; i<32; i++) {
        sprite.push_back(row_color);
    }
}

_Clock::_Clock(int width, int height): _Clock() {
    this->width = width;
    this->height = height;
}

void _Clock::Draw() {
    // Time and Date Details
    time_t now = time(0);   // current date/time based on current system
    tm *ltm = localtime(&now);

    // print various components of tm structure.
    /*
    cout << "Year:" << 1900 + ltm->tm_year<<endl;
    cout << "Month: "<< 1 + ltm->tm_mon<< endl;
    cout << "Day: "<< ltm->tm_mday << endl;
    cout << "Time: "<< ltm->tm_hour << ":";
    cout << ltm->tm_min << ":";
    cout << ltm->tm_sec << endl;    

    cout << "-------------------------------------" << endl << endl;
    */


}



