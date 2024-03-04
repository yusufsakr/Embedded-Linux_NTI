# Embedded Linux NTI - Task 5
NTI Embedded Linux Diploma Task 5 -> Create Custom C Liberary.

## Overview
Creating Custom Static C Liberary with the required functions and files for you project.

## Major Steps
1) Implement the Functions.
2) Implement the main code.
3) compile the .c files.
4) Create the liberary archieve.
5) Compile the Main code with the created lib.
6) Run the Code.

## Implement The Functions.
1) Create the .c desired files and their header files.
2) Compile the .c files into .obj files.

## Implement The Main Code
1) Create the main.c
2) #include your created header files.
3) Includein these header files with their RELATIVE Path.
```
#include "../Codes.h/addition.h"
#include "../Codes.h/subtraction.h"
#include "../Codes.h/division.h"
#include "../Codes.h/modulus.h"
#include "../Codes.h/multiplication.h"
```

## Compile the .c Files
* Compile the created .c files to be archived later into static lib.
```
# c -> export .obj file, Don't link

>> gcc -c *.c
```

## Create The Liberary Archieve
1) Now all of these .obj files need to be archived in one file
2) While archiving the object files, we need to generate their symbolic table.
3) These symbolic tables is specific for each .obj file.
```
# r -> Replace if exists OR insert if not found.
# c -> Create new Liberary
# s -> add symbolic table

>> ar rcs yusuf_lib.a *.o
```

## Compile the Main code with the created lib

```
# L -> insert static lib.

>> gcc main.c -o out -L. lib_yusuf.a
```

## Run the Code
```
>> ./out
```


Best Wishes :)
