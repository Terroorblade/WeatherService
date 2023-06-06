//
// Created by София on 06.06.2023.
//

#include "JsonService.h"
#include "json.hpp"
#include <fstream>

using namespace std;
using nlohmann::json;

Weather JsonService::getWeather(std::string s)
{
    std::ifstream fin(s);
    nlohmann::json j;
    j = nlohmann::json::parse(fin);
    std::string city = j["name"];
    double lon = j["coord"]["lon"];
    double lat = j["coord"]["lat"];
    double temperature = j["main"]["temp"];
    std::string weather = j["weather"][0]["description"];
    double windSpeed = j["wind"]["speed"];
    int clouds = j["clouds"]["all"];

    return Weather(city, lon, lat, temperature, weather, windSpeed, clouds);
}
