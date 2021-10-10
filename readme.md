# Valgrind Assignment
[![Build Status](https://travis-ci.org/dpiet/cpp-boilerplate.svg?branch=master)](https://travis-ci.org/dpiet/cpp-boilerplate)
[![Coverage Status](https://coveralls.io/repos/github/dpiet/cpp-boilerplate/badge.svg?branch=master)](https://coveralls.io/github/dpiet/cpp-boilerplate?branch=master)
---

## Overview

Simple starter C++ Valgrind project with:

- cmake
- googletest

## Valgrind Output
---------------Full leak-check-------------------

sumedh@SUMEDH:~/valgrind_117386066/build/app$ valgrind --leak-check=full ./shell-app


==11730== Memcheck, a memory error detector

==11730== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.

==11730== Using Valgrind-3.15.0 and LibVEX; rerun with -h for copyright info

==11730== Command: ./shell-app

==11730== 
Averaged sensor reading: 10
DONE

==11730== 

==11730== HEAP 

SUMMARY:

==11730==     in use at exit: 0 bytes in 0 blocks

==11730==   total heap usage: 4 allocs, 4 frees, 73,788 bytes allocated
==11730== 

==11730== All heap blocks were freed -- no leaks are possible

==11730== 

==11730== For lists of detected and suppressed errors, rerun with: -s

==11730== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

## Kcachegrind Output


## Standard install via command-line
```
git clone --recursive https://github.com/sumedhreddy90/valgrind_117386066.git
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```
