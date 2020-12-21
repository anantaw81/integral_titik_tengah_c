#include <stdio.h>
#include <math.h>

float function(float x){
	return 4*x*x*x - 2*x + 5;
	}

float integration(float pias, float a, float h){
	float z;
	float jumlah = 0;
	for(int i = 0; i<pias; ++i){
		z = a + ((0.5 + i) * h);
		jumlah = jumlah + function(z);
		}
	jumlah = jumlah*h;
	return jumlah;
	}

int main()
{
	float a, b, n, h;
	printf("Masukkan Batas Pertama : "); scanf("%f",&a);
    printf("Masukkan Batas Kedua   : "); scanf("%f",&b);
    printf("Masukkan Jumlah Pias   : "); scanf("%f",&n);
    puts("");
    printf("  Hasil\t\t Jumlah Pias \t  h \n");

    while (2 <= n){
		h = (b-a)/n;
		printf(" %f \t | %4.0f \t | %0.5f \n", integration(n, a, h), n, h);
		n = n-2;
		}
	return 0;
}

