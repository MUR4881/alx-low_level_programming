*************__0x14. C-Bit manipution__**************************************
.Starting bit manipution project;
so, what are bit manipulations ?
Bit manipulation, also known as bitwise operations, involves manipulating individual bits of data rather than whole bytes or larger units. This technique is commonly used in various programming scenarios for optimizing code, conserving memory, and implementing certain algorithms efficiently. Here are some applications of bit manipulation:

1. **Flag Manipulation:** Flags are often used to store binary state information. Bit manipulation is frequently used to set, clear, toggle, or check these flags in a memory-efficient manner.

2. **Bit Masks:** Bit masks are used to extract specific bits from a larger set of bits or to isolate certain bits. This is useful for extracting specific fields from binary data structures.

3. **Checking Odd/Even:** You can determine whether an integer is odd or even by looking at its least significant bit (LSB). If the LSB is 0, the number is even; if it's 1, the number is odd.

4. **Setting and Clearing Bits:** Bit manipulation can be used to set or clear specific bits in a number without affecting the other bits. This is useful for toggling specific flags or options.

5. **Bitwise Operations in Encryption:** Certain encryption algorithms and hashing functions utilize bitwise operations to transform and manipulate data efficiently, often in ways that are difficult to reverse-engineer.

6. **Binary Representation:** Bit manipulation is useful for converting between binary and decimal representations of numbers.

7. **Counting Bits:** Bit manipulation techniques can be used to count the number of set (1) bits in an integer, a process known as "bit counting" or "population count."

8. **Sparse Data Structures:** Bit manipulation can be used to implement sparse data structures, such as bitmaps and bloom filters, where memory efficiency is crucial.

9. **Finding Unique Elements:** Bit manipulation can help find unique elements in an array by treating elements as bitsets and using XOR operations.

10. **Optimizing Arithmetic Operations:** Some arithmetic operations, such as multiplication and division by powers of 2, can be optimized using bit manipulation.

11. **Bitwise Shifts:** Left and right shifts can be used to multiply or divide integers by powers of 2. They are also used in creating bit masks and extracting specific bit ranges.

12. **Memory Allocation:** Bit manipulation can be used for efficient memory allocation in embedded systems or resource-constrained environments.

13. **Error Detection and Correction:** Bit manipulation techniques are used in error detection and correction codes, where specific bits are manipulated to add redundancy and enable error recovery.

14. **Cryptography:** Bit manipulation is crucial in cryptographic algorithms for operations like key generation, encryption, and decryption.

15. **Networking and Protocol Implementation:** Bit manipulation is used to create and interpret network protocols and data packets.

Overall, bit manipulation is a powerful tool for optimizing code, reducing memory usage, and implementing algorithms that rely on binary data representation and manipulation. It's particularly important in low-level programming, embedded systems, cryptography, and various algorithmic challenges.
_____________Functions(created for the tasks so far)____________________________
 
 * binary_to_uint - converts a binary number(quoted as string) to unsigned int
 * get_endianness - of the machine it is compiled and ran on
 * print_binary - prints the binary representation of a number
 * get_bit - get the value of a bit at a given index
 * set_bit - at a given index to 1 at a given index
 * clear_bit - sets the value of a bit to 0 at a given index
 * flip_bits - determines the number of bit to be flipped to get from
 * _putchar - prints a char to the screen using a syscall
