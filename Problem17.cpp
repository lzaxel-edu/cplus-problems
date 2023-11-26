#include <iostream>

void onFailedInput();

bool checkInputProblem17(int h, int h1, int m, int m1, int s, int s1)
{
    bool isOk = true;
    if (h < 0 || m < 0 || s < 0 || h1 < 0 || m1 < 0 || s1 < 0) {
        std::cout << "All numbers must be > 0" << std::endl;
        isOk = false;
    }
    if (h > 24 || h1 > 24) {
        std::cout << "Hours must be <= 24" << std::endl;
        isOk = false;
    }
    if (m > 60 || s > 60 || m1 > 60 || s1 > 60) {
        std::cout << "Seconds and Minutes must be <= 60" << std::endl;
        isOk = false;
    }

    return isOk;
}

void problem17() {
    int h, h1, m, m1, s, s1;
    int hd, md, sd;

    std::cout << "Please enter start time (hours, minutes, seconds):";
    std::cin >> h >> m >> s;

    if (std::cin.fail()) {
        onFailedInput();
        return;
    }

    std::cout << "Please enter end time (hours, minutes, seconds):";
    std::cin >> h1 >> m1 >> s1;

    if (std::cin.fail()) {
        onFailedInput();
        return;
    }

    if (!checkInputProblem17(h, h1, m, m1, s, s1)) {
        return;
    }

    int interval1, interval2;
    interval1 = h * 3600 + m * 60 + s;
    interval2 = h1 * 3600 + m1 * 60 + s1;

    if (interval1 == interval2)
    {
        std::cout << "Full day has passed\n";
        return;
    }

    int diff;
    if (interval2 > interval1)
    {
        diff = interval2 - interval1;
        hd = diff / 3600;
        md = (diff % 3600) / 60;
        sd = (diff % 3600) % 60;
    } else
    {
        diff = 86400 - interval1 - interval2;
        hd = diff / 3600;
        md = (diff % 3600) / 60;
        sd = (diff % 3600) % 60;
    }
    std::cout << "Difference:"<< hd << " hours " << md << " minutes " << sd << " seconds\n";
}