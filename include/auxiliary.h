#ifndef AUXILIARY_H
#define AUXILIARY_H
/*
  The mallocX() function allocates size bytes and returns a pointer to the
  allocated memory.  The memory is not cleared.  If size is 0, then it
  returns whatever the standard library malloc() returns, unless it is NULL.

  In the circumstances where the return value would be NULL, it terminates
  the execution of the program.
*/

void *mallocX(size_t size);
#endif
