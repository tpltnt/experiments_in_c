experiments in C
================

Just some scribbles in C. Nothing special, more a distributed notebook.

7bit_int.c
----------
* structs seem to introduce overhead (7bit vs. 4 bytes)
* dependend on datatype?

struct_overhead.c
-----------------
* structs *do not* (seem to) introduce overhead
* bit fields limited in size by (declaring) type
