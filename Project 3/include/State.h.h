#ifndef STATE_H
#define STATE_H

#include <string>

using namespace std;
class State {
public:
    State(const string& name, double energy_consumption, long long state_size);
    double calculate_percentage_land_needed() const;
    string get_name() const;
    double get_percentage_land_needed() const;

private:
    string name;
    double energy_consumption;
    long long state_size;
    double percentage_land_needed;
};

#endif
