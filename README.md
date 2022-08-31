# Function-Overriding-in-C-OOPS-in-C-language-
## This is an example to implement Polymorphism through Function Overriding in C Programming Language. 


###### As we know C is not an Object oriented programming language. But we can implement some of the OOPS features in C program by using `structures` and `pointers`.
###### This is an attempt to implement Polymorphism feature through Function Overriding in C language.

- Animal class is parent class of Duck and Cat class.
- animal_p file contains private definition of animal class.
- Cat and Duck class overrides `__animal_sound` function from Animal class. Both classes provides their own definition of `__animal_sound` function.
- `__animal_sound` function's respective definition will be called based on which class object is being passed to `animal_sound` function.

## COMPATIBILITY

Tested under GNU/Linux and Windows with Gcc.
