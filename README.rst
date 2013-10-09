===============
Memory consumer
===============

*Use this at your own risk, end of.*

This simple PC of C code will consume 10MB of memory each iteration
until there is no more memory to consume.

If you want to modify it to use more or less than 10MB, simply
modify the file `src/consumemem.c` and change the *CONSUME*
value from, i.e.:

.. code:: c

    #define CONSUME 5 * MB /* will only consume 5MB */

Compilation
===========

.. code:: bash

    gcc -O2 src/consumemem.c -o consumemem

Usage
=====

.. code:: bash

    ./consumemem
