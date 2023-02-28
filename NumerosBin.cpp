#include <stdio.h>
#include <stdlib.h>

int main(){
	int i=0;
	FILE * idArchivo;
	idArchivo = fopen("numeros.bin","wb");
	if(idArchivo==NULL){
	printf("error");
	exit(0);}
	else {
		for(i=0;i<5;i++){
			fwrite(&i,sizeof(int),1,idArchivo);
		}
		fclose(idArchivo);
	}
	return 0;
}

