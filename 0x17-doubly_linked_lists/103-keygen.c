#include <stdlib.h>
#include <stdio.h>
#include <string.h>

ulong f1(uint param_1)

{
return (ulong)((param_1 ^ 0x3b) & 0x3f);
}


ulong f2(long param_1,int param_2)

{
uint local_10;
int local_c;

local_10 = 0;
local_c = 0;
while (local_c < param_2) {
	local_10 = local_10 + (int)*(char *)(param_1 + local_c);
	local_c = local_c + 1;
}
return (ulong)((local_10 ^ 0x4f) & 0x3f);
}


ulong f3(long param_1,int param_2)

{
uint local_10;
int local_c;

local_10 = 1;
local_c = 0;
while (local_c < param_2) {
	local_10 = (int)*(char *)(param_1 + local_c) * local_10;
	local_c = local_c + 1;
}
return (ulong)((local_10 ^ 0x55) & 0x3f);
}


ulong f4(char *param_1,int param_2)

{
uint uVar1;
uint local_10;
int local_c;

local_10 = (*param_1);
local_c = 0;
while (local_c < param_2) {
	if ((int)local_10 < (int)param_1[local_c]) {
	local_10 = (param_1[local_c]);
	}
	local_c = local_c + 1;
}
srand(local_10 ^ 0xe);
uVar1 = rand();
return (ulong)(uVar1 & 0x3f);
}


ulong f5(long param_1,int param_2)

{
int local_10;
int local_c;

local_10 = 0;
local_c = 0;
while (local_c < param_2) {
	local_10 = local_10 + (int)*(char *)(param_1 + local_c) * (int)*(char *)(param_1 + local_c);
	local_c = local_c + 1;
}
return (ulong)((local_10 ^ 0xef) & 0x3f);
}


ulong f6(char param_1)

{
int local_10;
int local_c;

local_10 = 0;
local_c = 0;
while (local_c < param_1) {
	local_10 = rand();
	local_c = local_c + 1;
}
return (ulong)((local_10 ^ 0xe5) & 0x3f);
}

int main(int argc, char *argv[])
{
	char *local_58;
	char *first_word;
	char password[7];
	size_t sVar2;
	uint uVar1;
	ulong uVar3;
	if (argc != 2)
		exit (1);
	/* Intializes random number generator */
	local_58 = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	first_word = argv[1];
	sVar2 = strlen(first_word);
	uVar1 = (uint)sVar2;
	uVar3 = f1(uVar1);
	password[0] = local_58[uVar3];
	uVar3 = f2((long)first_word,strlen(first_word));
	password[1] = local_58[uVar3];
	uVar3 = f3((long)first_word,strlen(first_word));
	password[2] = local_58[uVar3];
	uVar3 = f4(first_word,strlen(first_word));
	password[3] = local_58[uVar3];
	uVar3 = f5((long)first_word,strlen(first_word));
	password[4] = local_58[uVar3];
	uVar3 = f6(*first_word);
	password[5] = local_58[uVar3];
	password[6] = 0;

	printf("%s\n", password);
	return (0);
}