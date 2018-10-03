#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *name[10] = {"Bob Ross", "Henry Lau", "Evan Jones", "Melody Liu", "Kelly Foo", "Soojin Choi", "Lily Qian", "John Kim", "Krystal Gonzales", "David Li"};

// declare struct
struct student {
  char osis[10]; // student osis (always 10)
  char* name; // student year
  unsigned short yearof; // student year
  unsigned short curyear;
};

struct student return_example(){
  struct student new;
  // asign osis randomly
  int i;
  for(i = 0; i < 9; i++){
      new.osis[i] = 48 + (rand() % 10);
  }
  new.osis[9] = 0; // null terminator
  new.name = name[rand() % 10];
  new.yearof = 2020;
  new.curyear = 2018;
  return new;
}

void promote(struct student in) {
  in.curyear++;
}

void print_student(struct student in){
  printf("INFORMATION FOR STUDENT [%s]:\n", in.name);
  printf("Osis number: %s \n", in.osis);
  printf("Graduation year: %hu\n", in.yearof);
  printf("Current year: %hu\n", in.curyear);

  // if statemnt
  if (in.yearof < in.curyear)
    printf("%s has graduated %d years ago.\n", in.name, in.yearof - in.curyear);
  else if (in.yearof == in.curyear)
    printf("%s is graduating this year.", in.name);
  else
    printf("%s will graduate in %d years. \n", in.name, in.yearof - in.curyear);
}

int main(){
  srand(time(NULL));

  printf("\n");

  struct student rand_student;
  rand_student = return_example();
  print_student(rand_student);
	promote(rand_student);

  return 0;
}
