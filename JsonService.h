//
// Created by София on 06.06.2023.
//

#ifndef WEATHERSERVICE_JSONSERVICE_H
#define WEATHERSERVICE_JSONSERVICE_H

#include "Weather.h"
#include "Service.h"

class JsonService :public Service
{
public:
    virtual Weather getWeather(std::string s) override;
    virtual ~JsonService() {};
};


#endif //WEATHERSERVICE_JSONSERVICE_H
