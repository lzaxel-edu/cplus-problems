#include <iostream>

void onFailedInput();

void problem16()
{
    int h,h1,m,m1,s,s1,d1;
    int x,y,z;

    std::cout << "Please enter current time (hours, minutes, seconds):";
    std::cin >> h >> m >> s;

    if (std::cin.fail()) {
        onFailedInput();
        return;
    }

    if (h < 0 || m < 0 || s < 0) {
        std::cout << "All numbers must be > 0" << std::endl;
        return;
    }
    if (h >= 24) {
        std::cout << "Hours must be < 24" << std::endl;
        return;
    }
    if (m >= 60 || s >= 60) {
        std::cout << "Seconds and Minutes must be < 60" << std::endl;
        return;
    }

    std::cout << "Please enter delta time (hours, minutes, seconds):";
    std::cin >> x >> y >> z;

    if (std::cin.fail()) {
        onFailedInput();
        return;
    }

    if (x < 0 || y < 0 || z < 0) {
        std::cout << "All numbers must be > 0" << std::endl;
        return;
    }

    s1 = (s+z) % 60;
    m1 = ((s+z)/60 + m+y) % 60;
    h1 = (h + x + ((s+z)/60 + m+y) / 60) % 24;
    d1 = (h + x + (((s+z)/60 + m+y) / 60)) / 24;


    std::cout << "Time will be time:"
        << d1 << " days "
        << h1 << " hours "
        << m1 << " minutes "
        << s1 << " seconds\n";
}