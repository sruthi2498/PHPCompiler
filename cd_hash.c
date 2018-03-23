#include "cd_hash.h"


int hashCode(int key) {
   return key % SIZE;
}

struct node *search(int key) {
   //get the hash 
   int hashIndex = hashCode(key);  
	
   //move in array until an empty cell is found 
   while(hashArray[hashIndex] != NULL) {
	
      if(hashArray[hashIndex]->key == key)
         return hashArray[hashIndex]; 
			
      //go to next cell
      ++hashIndex;
		
      //wrap around the table
      hashIndex %= SIZE;
   }        
	
   return NULL;        
}

void insert(int key,char* matchedStr,char* data) {

   struct node *item = (struct node*) malloc(sizeof(struct node));
   item->data = (char*)malloc(sizeof(char)*strlen(data)); 
   strcpy(item->data,data); 
   item->key = key;
   item->matchedStr = (char*)malloc(sizeof(char)*strlen(matchedStr)); 
   strcpy(item->matchedStr,matchedStr); 
   //get the hash 
   int hashIndex = hashCode(key);

   //move in array until an empty cell is found or deleted cell
   while(hashArray[hashIndex] != NULL && hashArray[hashIndex]->key != -1) {
      //go to next cell
      if(strcmp(hashArray[hashIndex]->matchedStr,matchedStr)==0)
      return;
      ++hashIndex;
		
      //wrap around the table
      hashIndex %= SIZE;
   }
	
   hashArray[hashIndex] = item;
}

void delete(struct node* item) {
   dummyItem = (struct node*) malloc(sizeof(struct node));
   dummyItem->data = NULL;  
   dummyItem->key = -1; 
   dummyItem->matchedStr=NULL;
   int key = item->key;

   //get the hash 
   int hashIndex = hashCode(key);

   //move in array until an empty cell is found
   while(hashArray[hashIndex] != NULL) {
	
      if(hashArray[hashIndex]->key == key) {
         struct node* temp = hashArray[hashIndex]; 
			
         //assign a dummy item at deleted position
	 free(hashArray[hashIndex]->data);
         hashArray[hashIndex] = dummyItem; 
         return;
      }
		
      //go to next cell
      ++hashIndex;
		
      //wrap around the table
      hashIndex %= SIZE;
   }      
	
   return;        
}

void display() {
   int i = 0;
	
   for(i = 0; i<SIZE; i++) {
	
      if(hashArray[i] != NULL)
         printf(" \n%d. ( %d , %s , %s )\n",i,hashArray[i]->key,hashArray[i]->matchedStr,hashArray[i]->data);
      else
         printf("\n%d. --\n",i);
   }
	
   printf("\n");
}
int compute(char* str)
{
	//returns key value of string	
	int i,val=0;
	for(i=0;i<strlen(str);i++)
	 val=val+(int)(str[i]);
	return val;

}

/*
int main() {
  

   insert(compute("?"),"T_QUESTION");
   insert(compute("("),"T_OPENPAREN");
   insert(compute(")"),"T_CLOSEPAREN");
   insert(compute(";"),"T_SEMICOLON");
   insert(compute(","),"T_COMMA");
   insert(compute("for"),"T_FOR");
   insert(compute("if"),"T_IF");
   insert(compute("else"),"T_ELSE");
   insert(compute("elseif"),"T_ELSEIF");
   insert(compute("echo"),"T_ECHO");

   display();
   item = search(37);

   if(item != NULL) {
      printf("Element found: %d\n", item->data);
   } else {
      printf("Element not found\n");
   }

   delete(item);
   item = search(37);

   if(item != NULL) {
      printf("Element found: %d\n", item->data);
   } else {
      printf("Element not found\n");
   }
}


*/
