#include "project_version.hpp"

#include <iostream>

int main()
{
    std::cout << "Golm version: " << gm::ProjectVersion::current;
}