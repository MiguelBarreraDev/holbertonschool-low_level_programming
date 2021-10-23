#!/bin/bash

gcc -Wall -Werror -Wextra -pedantic -c ./lib/*.c

ar -cr liball.a *.o
