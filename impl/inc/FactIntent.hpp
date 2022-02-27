#ifndef _FACTINTENT_H_
#define _FACTINTENT_H_

#include "Intent.hpp"

class FactIntent final : public Intent
{
    public:
        FactIntent()=default;
        ~FactIntent()=default;
        void Set(const std::string &) override;
        FactIntent(const  FactIntent&) = delete;
        FactIntent( FactIntent&&) = delete;
        FactIntent& operator=(const  FactIntent&) = delete;
        FactIntent& operator=( FactIntent&&) = delete;


};

#endif /* _FACTINTENT_H_ */