# CuMarket

CuMarket is a digital marketplace application designed to manage users and listings for selling goods. This assignment focuses on implementing basic CRUD operations using C++ classes, arrays, and dynamic memory management.

## Setup
Ensure you have a C++ compiler installed on your system.

## Compilation
Navigate to the root directory of the project and run the following command:

```sh
make a1
```
## Execution
To run the application, execute the following command:
```sh
./a1
```

## Features
1. **Price Class:** Stores a dollar value and supports comparison functions. Provides formatted price output.
   
2. **User Class:** Represents a CuMarket user with name and rating. Supports alphabetical comparison and includes a print function.
   
3. **Listing Class:** Stores details about items for sale (user, title, category, description, price). Implements alphabetical comparison and includes a detailed print function.
   
4. **CuMarket Class:** Manages collections of Users and Listings. Supports CRUD operations (add/remove Users and Listings) and ensures Users are stored alphabetically.
   
5. **Tester Class:** Provides test functions to verify CuMarket operations.

6. **Category.h and Category.cc:** Defines a Category enum and functions for converting enums to strings.

7. **defs.h:** Defines preprocessor constants for array initialization.




