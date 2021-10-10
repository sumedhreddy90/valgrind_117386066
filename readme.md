# Valgrind Assignment
[![Build Status](https://travis-ci.org/dpiet/cpp-boilerplate.svg?branch=master)](https://travis-ci.org/dpiet/cpp-boilerplate)
[![Coverage Status](https://coveralls.io/repos/github/dpiet/cpp-boilerplate/badge.svg?branch=master)](https://coveralls.io/github/dpiet/cpp-boilerplate?branch=master)
---

## Overview
A simple valgrind Excercise which helps to detect several types of code issues:

1.Undefined behavior
2.Function and memory profiling
3.Data-race detection
4.Memory leak detection

## Kcachegrind Output - profiler output

![Screen Shot 2021-10-10 at 12 54 49 PM](https://user-images.githubusercontent.com/24978535/136706080-958584bb-8828-4b61-b6d2-e39f15cdae2e.png)

![Screen Shot 2021-10-10 at 12 56 58 PM](https://user-images.githubusercontent.com/24978535/136706082-b2e1626c-e334-49cd-a39a-5e35de508d6c.png)

![Screen Shot 2021-10-10 at 12 57 12 PM](https://user-images.githubusercontent.com/24978535/136706084-f0d50d9a-993a-424c-81b3-691c3f04a018.png)

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
==11730== All heap blocks were freed -- no leaks are possible
==11730== For lists of detected and suppressed errors, rerun with: -s
==11730== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)


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
