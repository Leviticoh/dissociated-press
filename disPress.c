#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<stdint.h>

typedef struct{
	uint64_t ordine;
	size_t dimensione;
	size_t spazio;
	void* contenuto;
} ArrayNode;

void freeNode(ArrayNode* node)
{
	if(node->ordine > 1)
