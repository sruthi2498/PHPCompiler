#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 50

struct node {
   char* data;
   char* matchedStr;   
   int key;
};

struct node* hashArray[SIZE]; 
struct node* dummyItem;
struct node* item;
int hashCode(int key);
struct node *search(int key);
void insert(int key,char* matchedStr,char* data);
void delete(struct node* item);
void display();
int compute(char* str);
