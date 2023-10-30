#include <iostream>
#include <list>
#include "State.h"

using namespace std;

int main() {
    list<State> states;

    states.push_back(State("Texas", 13480.8, 7'487'580'672'000));
    states.push_back(State("California", 6922.8, 4'563'554'688'000));

    states.sort([](const State& a, const State& b) {
        return a.get_percentage_land_needed() < b.get_percentage_land_needed();
    });

    cout << "Ordered list of states based on the percentage of land needed for solar panels:" << endl;
    for (const State& state : states) {
        cout << state.get_name() << ": " << state.get_percentage_land_needed() << "%" << endl;
    }

    return 0;
}
