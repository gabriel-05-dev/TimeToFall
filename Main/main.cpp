#include <iostream>
double getTowerHeight();
void getBall(double towerHeight, double seconds);

int main() {
    double tower = getTowerHeight();
    getBall(tower, 0);
    getBall(tower, 1);
    getBall(tower, 2);
    getBall(tower, 3);
    getBall(tower, 4);
    getBall(tower, 5);
    return 0;
}


double getTowerHeight() {
    double height;
    std::cout << "input the height of the tower : " <<std::endl;
    std::cin >> height;
    return height;
}

void getBall(double towerHeight, double seconds) {
    if (towerHeight <= 0) {
        std::cout << "invalid tower height" << std::endl;
    }

    double BallHeight = 9.8*(seconds*seconds) / 2;
    double current_height = towerHeight - BallHeight;

    if (seconds == 0) {
        std::cout << "The Ball is at " << towerHeight << "m" << std::endl;
    } else if (current_height > 0) {
        std::cout << "The ball is at : " << towerHeight - BallHeight << "m" << std::endl;
    } else if (current_height < 0 ){
        std::cout << "The Ball is on the ground" << std::endl;
    }
}
