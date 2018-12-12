// File: LayerCake.h
//-----------------------------------------------------------------------------
#ifndef LAYERCAKE_H
#define LAYERCAKE_H
//-----------------------------------------------------------------------------
#include "Cake.h"
//-----------------------------------------------------------------------------
class LayerCake : public Cake
{
public:
    LayerCake(string flavor = "", string frosting = "", int layers = 0);

    string toString() const;
    double discountedPrice(int count) const;
protected:
    int layers;
};
//-----------------------------------------------------------------------------
#endif // LAYERCAKE_H
