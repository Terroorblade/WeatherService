//
// Created by София on 06.06.2023.
//

#ifndef WEATHERSERVICE_SERVICE_H
#define WEATHERSERVICE_SERVICE_H
#pragma once
#include "Weather.h"

using namespace std;

class Service
{
private:

public:
    virtual Weather getWeather(std::string s) = 0;
    virtual ~Service() {}
};
#endif //WEATHERSERVICE_SERVICE_H
