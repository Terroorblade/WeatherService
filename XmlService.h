//
// Created by София on 06.06.2023.
//

#ifndef WEATHERSERVICE_XMLSERVICE_H
#define WEATHERSERVICE_XMLSERVICE_H
#include "Weather.h"
#include "Service.h"
using namespace std;


class XmlService:public Service
{
public:
    virtual Weather getWeather(std::string s) override;
    virtual ~XmlService() {};
};



#endif //WEATHERSERVICE_XMLSERVICE_H
