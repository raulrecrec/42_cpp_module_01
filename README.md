# CPP Module 01

## Description

This project is the second C++ module of the 42 Common Core.

Its goal is to introduce several important C++ concepts through small exercises using:

* memory allocation
* stack and heap allocation
* references
* pointers
* pointers to member functions
* file streams
* switch statements
* basic class design

The project is compiled with:

```bash
c++ -Wall -Wextra -Werror -std=c++98
```

---

## Exercises

### ex00 - BraiiiiiiinnnzzzZ

This exercise introduces object creation on the stack and on the heap.

It implements a `Zombie` class with:

* a private `name` attribute
* an `announce()` member function
* a destructor that prints a debug message when a zombie is destroyed

It also implements:

* `newZombie()`: creates a zombie on the heap and returns it
* `randomChump()`: creates a zombie on the stack and makes it announce itself

#### Usage

```bash
cd ex00
make
./zombie
```

---

### ex01 - Moar brainz!

This exercise creates a horde of zombies using a single dynamic allocation.

It implements:

```cpp
Zombie* zombieHorde(int N, std::string name);
```

The function allocates `N` zombies, assigns the same name to each one, and returns a pointer to the first zombie.

The horde is freed using `delete[]`.

#### Usage

```bash
cd ex01
make
./zombie_horde
```

---

### ex02 - HI THIS IS BRAIN

This exercise demonstrates the relationship between:

* a string variable
* a pointer to that string
* a reference to that string

The program prints their memory addresses and values to show that the pointer and the reference both refer to the original string.

#### Usage

```bash
cd ex02
make
./brain
```

---

### ex03 - Unnecessary violence

This exercise introduces references and pointers inside classes.

It implements:

* `Weapon`
* `HumanA`
* `HumanB`

`HumanA` always has a weapon, so it stores a reference to a `Weapon`.

`HumanB` may not always have a weapon, so it stores a pointer to a `Weapon`.

Changing the weapon type after assigning it affects both humans, because they refer to the same weapon object.

#### Usage

```bash
cd ex03
make
./violence
```

---

### ex04 - Sed is for losers

This exercise implements a simple text replacement program.

The program receives three arguments:

```bash
./replace filename s1 s2
```

It reads the content of `filename`, replaces every occurrence of `s1` with `s2`, and writes the result into:

```text
filename.replace
```

The implementation uses C++ file streams and does not use `std::string::replace`.

#### Usage

```bash
cd ex04
make
./replace test.txt old new
```

---

### ex05 - Harl 2.0

This exercise introduces pointers to member functions.

It implements a `Harl` class with four private complaint levels:

* `DEBUG`
* `INFO`
* `WARNING`
* `ERROR`

The public `complain()` method calls the correct private function depending on the level passed as parameter.

#### Usage

```bash
cd ex05
make
./harl
```

---

### ex06 - Harl filter

This exercise filters Harl's complaints by level.

The program receives one level as argument and displays all messages from that level and above.

For example:

```bash
./harlFilter WARNING
```

prints:

```text
WARNING
ERROR
```

Invalid levels display the default insignificant problems message.

#### Usage

```bash
cd ex06
make
./harlFilter DEBUG
./harlFilter INFO
./harlFilter WARNING
./harlFilter ERROR
```

---

## Build rules

Each exercise contains its own `Makefile`.

Available rules:

```bash
make
make clean
make fclean
make re
```

---

## Notes

This module is written using the C++98 standard.

The code avoids:

* `printf`
* `malloc`
* `free`
* `using namespace std`
* STL containers and algorithms
* C file manipulation functions in ex04
* `std::string::replace` in ex04

The goal of this module is to understand how C++ handles memory, references, pointers, file streams, and member function pointers while keeping the code simple and readable.
