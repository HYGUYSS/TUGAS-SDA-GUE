#include <stdio.h>
#include <conio.h>

struct {
    float alas;
    float tinggi;
    float sisimiring;
    float luas;
    float keliling;
} jajarangenjang ;

void luasjajarangenjang(){
    jajarangenjang.luas = jajarangenjang.alas * jajarangenjang.tinggi ;
    printf("/nluas jajarangenjang = %f", jajarangenjang.luas);
    }

float keljajarangenjang (float j){
	return 2*jajarangenjang.alas+2*jajarangenjang.sisimiring;
}

int main(){
	printf("alas = ");scanf("%f", &jajarangenjang.alas);
	printf("tinggi = ");scanf("%f", &jajarangenjang.tinggi);
	printf("sisimiring = ");scanf("%f", &jajarangenjang.sisimiring);
	luasjajarangenjang();
	jajarangenjang.keliling = keljajarangenjang(2*jajarangenjang.alas+2*jajarangenjang.sisimiring);
	printf("/nkeliling jajarangenjang = %f",jajarangenjang.keliling);
	getch();
}
