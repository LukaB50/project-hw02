
#include <fftw3.h>
#include <math.h>
//#include <complex.h>

// c = a / b;
void cmplx_div(fftw_complex a, fftw_complex b, fftw_complex c)
{
	c[0]=(a[0]*b[0]+a[1]*b[1])/(b[0]*b[0]+b[1]*b[1]);
	c[1]=(a[1]*b[0]-a[0]*b[1])/(b[0]*b[0]+b[1]*b[1]);
}

// c = a * b;
void cmplx_mul(fftw_complex a, fftw_complex b, fftw_complex c)
{
	c[0]=a[0]*b[0]-a[1]*b[1];
	c[1]=a[0]*b[1]+a[1]*b[0];
}
// returns |a|
double cmplx_mag(fftw_complex a)
{
	return sqrt(a[0]*a[0]+a[1]*a[1]);
}
// returns phase in radians of a 
double cmplx_phs(fftw_complex a)
{
	return atan(a[1]/a[0]);
}
// returns real part of mag/_phs
double cmplx_real(double mag, double phs)
{
	return (mag*cos(phs));
}
// returns imaginary part of mag/_phs
double cmplx_imag(double mag, double phs)
{
	return (mag*sin(phs));
}
