#include <stdio.h>

int main() {
	int i;
	int four_ints[4];
	char* four_c;

	for(i=0; i<4; i++)
        four_ints[i] = 2;

	printf("%x\n", four_ints[0]);
	
    four_c = (char*)four_ints;

	for(i=0; i<4; i++)
        four_c[i] = 'A'; // ASCII value of 'A' is 65 or 0x41 in Hex.
    
    // Add your code for the exercises here:
//------------------------------------------------------------------
//
    //printf("%x\n", four_ints[0]);
    //printf("%x\n", four_ints[1]);

    //printf("%s\n", four_c);

    for(int i=0; i<4; i++){
        printf("four_ints\n");
        printf("(Address [%d]: %p) \n", i, &four_ints[i]);
        printf("(Value [%d]: %x) \n", i, four_ints[i]);
        printf("\n");
     }
    
    for(int i=0; i<4; i++){
        printf("four_c\n");
        printf("Address [%d]: %p) \n", i, &four_c[i]);
        printf("Value [%d]: %x) \n", i, four_c[i]);
        printf("\n");
     }
//
//------------------------------------------------------------------	
	return 0;

}
