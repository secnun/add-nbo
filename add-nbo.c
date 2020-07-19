#include <stdio.h>
#include <stdint.h>
#include <arpa/inet.h>

int main(int argc, char *argv[]){
	
	FILE *fp1, *fp2;
	uint32_t n1=0, n2=0;
	int res = 0;

	fp1 = fopen(argv[1],"rb");
	fp2 = fopen(argv[2],"rb");

	fread(&n1, sizeof(uint32_t),4, fp1); 	
	fread(&n2, sizeof(uint32_t),4, fp2); 	
	res = ntohl(n1) + ntohl(n2);
	//printf("%x\n", n1);
	printf("%d(%x) + %d(%x) = %d(%x)\n", ntohl(n1), ntohl(n1), ntohl(n2), ntohl(n2), res, res);

		
	fclose(fp2);
	fclose(fp1);
}
