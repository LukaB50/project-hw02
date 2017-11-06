#include <fftw3.h>
#include <cmplx.h>
#include <io.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
	fftw_complex a, b,c;
	double mag, phs, real, imag;

	a[0]=2;
	a[1]=4;
	b[0]=1;
	b[1]=3;
	
	cmplx_div(a,b,c);
	printf("Rezultat djeljenja: %f+%f*i \n",c[0],c[1] );

	cmplx_mul(a,b,c);
	printf("Rezultat mnozenja: %f+%f*i \n",c[0],c[1] );

	mag=cmplx_mag(a);
	printf("Amplituda: %f \n", mag);

	phs=cmplx_phs(a);
	printf("Kut: %f \n", phs);

	real=cmplx_real(mag,phs);
	printf("Realni dio: %f \n", real);

	imag=cmplx_imag(mag,phs);
	printf("Imaginarni dio: %f*i \n", imag);
	
	return 0;
}
