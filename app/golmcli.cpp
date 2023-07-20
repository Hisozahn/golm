#include "golm_lib.hpp"

#include <iostream>

int main()
{
    std::cout << "Golm version: " << golm::ProjectVersion::current;
}