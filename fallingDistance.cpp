#include <iostream>
#include <cmath>

using namespace std;

double fallingDistance(double time) {
    const double gravity = 9.8;
    double distance = 0.5 * gravity * pow(time, 2);
    return distance;
}

int main() {
    for (int i = 1; i <= 10; i++) {
        double distance = fallingDistance(i);
        cout << "Time: " << i << " seconds, Distance: " << distance << " meters" << endl;
    }
    return 0;
}
