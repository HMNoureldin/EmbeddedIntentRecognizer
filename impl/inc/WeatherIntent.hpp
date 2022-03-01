/** @file WeatherIntent.hpp
 *  @brief Predicting Weather intent.
 *
 *  Function prototypes for predicting Weather intent corresponds to user input.
 *
 *  @author Hesham Noureldin
 */


#ifndef _WEATHERINTENT_H_
#define _WEATHERINTENT_H_


#include "Intent.hpp"


/**
 * Class for Predicting Weather intent.
 *
 * This class for predicting Weather intent corresponds to user input.
 */
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