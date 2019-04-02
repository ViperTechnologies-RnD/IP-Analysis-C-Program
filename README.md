## MIDDLE EAST TECHNICAL UNIVERSITY
**Date handed out: 05 March, Monday 2019**

# Programming Assignment 1: IP Address Analyzer

**Purpose:**
The main purpose of this programming assignment is to revise the topics covered in the first
three weeks including fundamentals of C programming, conditional statements and
repetitive statements.

**Description:**
In this project, you will analyze the structure of an IP address (IPv4). You will need to use bitwise
operations and practice different numbering systems. You will write a C program that
accepts an IP address, as well as subnet-mask in decimal format or hexadecimal format
(base 10 or base 16). The program will convert the IP address as well as the subnet mask to
binary. The program will have options to show the class of the address and to calculate the
number of available host addresses.

**Programming Requirements**
a. When you enter the program your program will first ask the user if they would like to
enter the IP address in base 10 or 16, then prompt for the IP address and the subnet mask as
follows:

```
Please enter the Base for your IP Address (10/16): 5
Sorry, that is not a valid base!
Please enter the Base for your IP Address (10): 10
Please enter the IP Address:
192.10.10.
Thanks, it is a valid IP address!
Please enter the Subnet Mask:
255.255.255.
Thanks, it is a valid Subnet Mask!
```
```
OR
```
```
Please enter the Base for your IP Address (10/16): 16
Please enter the IP Address:
OO. 11 .10.KK
This is NOT a valid IP Address!
Please enter the IP Address:
00.11.10.FF
Thanks, it is a valid IP address!
Please enter the Subnet Mask:
FF.FF.FF.CO
Thanks, it is a valid Subnet Mask!
```
Please Note the following for this step:

- An IP address is a 32-bit value split into four 8 bit values (octet) each from 0 to 255.
    Therefore, you need to make the necessary checks for this format.
- In Base 10 that you can only accept numbers from 0..9.
- In Base 16 (Hexadecimal), you can only accept 0..0 and A..F.
- Make sure that your program displays an error message for the following cases:
    o When the user enters invalid base (other than base 10 and base 16)
    o When the users enter an invalid IP address or subnet mask

```
CNG 140 C Programming – Programming Assignment 1
```

b. Then your program needs to display a menu to the user for asking about the analysis to
be performed. Please note that the program will keep on promoting the menu unless the option
6 is chosen.

1. Convert IP address to binary
2. Convert subnet mask to binary
3. Specify the class of the IP address
4. Specify the number of host addresses available
5. Provide new IP Address and subnet mask
6. Exit

c. In case the user chooses option 1, the IP address will be converted to binary by converting
each octet individually. **You are not allowed to use data structures such as arrays to store
values for the conversion operation**. For the given example your program will work as follows:

```
The binary representation of IP Address:
11000000. 000010 10. 000010 10. 00000010
```
d. In case the user chooses option 2, the subnet mask will be converted to binary by
converting each octet individually. **You are not allowed to use data structures such as arrays
to store values for the conversion operation.** For the given example your program will work as
follows:

The binary representation of Subnet Mask:
_11111111. 11111111. 11111111. 11000000_

e. In case the user chooses option 3, the binary format of the IP address will be used to
specify the class of the address using the following table.

```
The first octet of the IP address Class
Starts with 0 Class A
Starts with 10 Class B
Starts with 110 Class C
The rest Class D
```
For the given example your program will work as follows:

```
The class of the given IP Address is: C
```
f. In case the user chooses option 4, the binary format of the subnet mask will be used to
specify the number of host addresses. To specify the number of host addresses, you should
first, identify the number of bits used for the host addresses. The zero bits in the subnet mask
identify the number of bits used for host addresses.

For example, if your subnet mask is 255.255.255.224 when we convert it to binary we will have
11111111.11111111.11111111.11100000. This means that there are 5 bits used for host
addresses. If there are **_n_** bits used for hosts, the formula for a number of host addresses is 2n-2.
Therefore for this example, it will be 2^5 - 2=30. For the given example n= 5, therefore your
the program will work as follows:

```
The number of available host addresses for the given Subnet Mask: 30
```
g. In case the user chooses option 5, s/he will be allowed to change the IP address and
subnet mask for new operations.

h. In case the user chooses option 6, the program will terminate.


**Grading Schema:**
Your program will be graded as follows:

**If your code does not compile, then you will automatically get zero, otherwise your code will
be graded based on the following grading points:**

```
Grading Point Mark (10 0 )
The menu (keeping the users in a loop until exit is chosen) 10
Converting IP address and the Subnet Mask to binary 20
Specify the class of the IP address 20
Specify the number of available host addresses 30
Option to change the IP address and the subnet mask 10
Code quality (e.g., variable names, formulation of selection
statements and loops, etc)
```
## 10

**Rules:**
Please make sure that you follow the restrictions for the assignment as follows.

# • Strictly obey the input-output format. Do not print extra things.

# • You are not allowed to use data structures such as arrays to store values for the

```
conversion operation.
```
# • You are not allowed to define your own functions.



