#ifndef CAT_H
#define CAT_H

//Forward declasration
struct cat_t;

//<Memory allocator
struct cat_t* cat_new();

//constrcutor
void cat_ctor(struct cat_t*);

//Destructort
void cat_dtor(struct cat_t*);

// All behavior functions are inherited from the animal class.
#endif