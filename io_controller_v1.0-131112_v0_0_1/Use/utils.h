
#ifndef UTILS_H_
#define UTILS_H_

#ifdef __cplusplus
extern "C"{
#endif
#include "math.h"
#include "binary.h"

/******************************************************************/

#define _sign(a) 					( ( (a) < 0 )  ?  -1   : ( (a) > 0 ) )
#define _round(x) 					((x)>=0?(long)((x)+0.5f):(long)((x)-0.5f))
#define _constrain(amt,low,high)	((amt)<(low)?(low):((amt)>(high)?(high):(amt)))
#define _round1(n)					(((f32)((int)(n*10)))/10)

/*****************************************************************/

#define _2_SQRT3 	1.15470053838f
#define _SQRT3 		1.73205080757f
#define _1_SQRT3 	0.57735026919f
#define _SQRT3_2 	0.86602540378f
#define _SQRT2 		1.41421356237f
#define _120_D2R 	2.09439510239f
#define _PI 		3.14159265359f
#define _PI_2 		1.57079632679f
#define _PI_3 		1.0471975512f
#define _2PI 		6.28318530718f
#define _3PI_2 		4.71238898038f
#define _PI_6 		0.52359877559f

f32 _sin(f32 a);
f32 _cos(f32 a);
f32 _normalizeAngle(f32 angle);
f32 _sqrt(f32 number);

#define MACRO_MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MACRO_MIN(x, y) (((x) < (y)) ? (x) : (y))
f32 _fast_atan2(f32 y, f32 x);

#ifdef __cplusplus
}
#endif

#endif /* UTILS_H_ */
