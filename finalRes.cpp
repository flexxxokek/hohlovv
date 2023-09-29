#include <stdio.h>
#include <math.h>

#include "finalRes.h"

float finRes( float* res, size_t size )
{
    float sum = 0;

    for( size_t i = 0; i < size; i++ )
        sum += res[i];

    return sum / size;
}

float deviation( float* res, size_t size )
{
    float finalRes = finRes( res, size );

    float dev = 0;

    float sum = 0;

    for( size_t i = 0; i < size; i++ )
    {
        sum += ( res[i] - finalRes ) * ( res[i] - finalRes );
    }

    dev = sqrt( sum ) / size;

    return dev;
}
