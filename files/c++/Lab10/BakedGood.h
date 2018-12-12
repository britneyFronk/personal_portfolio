// File: BakedGood.h
//-----------------------------------------------------------------------------
#ifndef BAKEDGOOD_H
#define BAKEDGOOD_H
//-----------------------------------------------------------------------------
#include <string>
using std::string;
//-----------------------------------------------------------------------------
// Abstract base class
class BakedGood
{
public:
    BakedGood(double price = 0.0);
    virtual ~BakedGood();

    virtual string toString() const = 0;
    virtual double discountedPrice(int count) const = 0;
protected:
    double price;
};
//-----------------------------------------------------------------------------
#endif // BAKEDGOOD_H
