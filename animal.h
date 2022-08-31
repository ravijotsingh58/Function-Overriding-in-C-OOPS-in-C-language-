#ifndef ANIMAL_H
#define ANIMAL_H

//Foreword declaration
struct animal_t;

//Memory allocator
struct animal_t* animal_new();

//Constructor
void animal_ctor(struct animal_t*);

//Destructor
void animal_dtor(struct animal_t*);

//Behavior functions
void animal_get_name(struct animal_t*, char*);
void animal_sound(struct animal_t*);
/*
The animal_sound function is 
supposed to be polymorphic and can be overridden by the child classes
*/
#endif