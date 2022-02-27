#ifndef _WEATHERINTENT_H_
#define _WEATHERINTENT_H_


#include "Intent.hpp"


class WeatherIntent final: public Intent
{
    public:
        WeatherIntent()=default;
        ~WeatherIntent()=default;
        void Set(const std::string &) override;
        WeatherIntent(const  WeatherIntent&) = delete;
        WeatherIntent( WeatherIntent&&) = delete;
        WeatherIntent& operator=(const  WeatherIntent&) = delete;
        WeatherIntent& operator=( WeatherIntent&&) = delete;

};


#endif /* _WEATHERINTENT_H_ */