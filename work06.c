#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// declare struct
struct student {
  char osis[10]; // student osis (always 10)
  char* name; // student year
  unsigned short year; // student year
};

struct student return_example(){
  struct student new;
  // asign osis randomly
  int i;
  for(i = 0; i < 9; i++){
      new.osis[i] = 48 + (rand() % 10);
  }
  new.osis[9] = 0; // null terminator
  new.name = "Bob Ross";
  new.year = 2020;
  return new;
}

void print_student(struct student in){
  printf("INFORMATION FOR STUDENT [%s]:\n", in.name);
  printf("Osis number: %s \n", in.osis);
  printf("Graduation year: %hu\n", in.year);
}

int main(){
  srand(time(NULL));

  printf("\n");

  struct student rand_student;
  rand_student = return_example();
  print_student(rand_student);


  return 0;
}
