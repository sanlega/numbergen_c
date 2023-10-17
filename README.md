# 🚀 42 Norm Compliant Random Number Generator w/ Pointers and Hexadecimal Hashing 🎲

## 📖 Introduction

This random number generator harnesses the power of C pointers, converting them to hexadecimal and subsequently hashing them to produce random numbers. The randomness stems from the inherent unpredictability of memory addresses returned by malloc in different runs and systems, making the results difficult to replicate. This project is 42 school's Norminette compliant, it also doesn't use any prohibited functions apart from printf that you can change for  your own `ft_printf`

## 🌟 Features

- 📌 **Unique Hexadecimal Conversion**: Converts pointer memory addresses to their hexadecimal representation.
- 🔗 **Double Hashing Mechanism**: Uses two levels of hashing (simple and harder hash) to generate a unique number from a pointer's hexadecimal form.
- 🎯 **Dynamic Range**: Can produce a set of random numbers within a user-specified range.

## 🛠 Installation and Usage

1. **Clone the Repository**: 
    ```bash
    git clone https://github.com/yourusername/random-hash-generator.git
    ```

2. **Compilation using Makefile**:
    Navigate to the project directory and compile using the following command:
    ```bash
    make
    ```

3. **Execution**:
    After compilation, you can run the program using:
    ```bash
    ./random-num [MIN] [MAX] [QUANTITY]
    ```

   - `MIN`: The minimum value of the desired random number range.
   - `MAX`: The maximum value of the desired random number range.
   - `QUANTITY`: The quantity of random numbers to generate.

   For instance:
   ```bash
   ./random-num 10 50 5
   ```

   This will produce 5 random numbers between 10 and 50.

## 🚫 Disclaimer

This is a basic implementation, designed primarily for demonstration and educational purposes. Not all aspects are fully protected or optimized. It's recommended to use this code as a source of inspiration and understanding, rather than directly incorporating it into critical applications without thorough review and modifications.

---
## 💡 Code Details

- `ptr_to_hex`: Convert the memory address of a pointer to its hexadecimal representation.
- `is_number_repeated`: Check if a generated number is a repeat within the already generated numbers.
- `simple_hash`: Create a hash from the hexadecimal of a pointer.
- `harder_hash`: Further obfuscate the simple hash for enhanced randomness.
- `generate_numbers`: Generate a list of random numbers within the specified range using hashes.

## 🙌 Contributing

Feel free to fork the project, make changes, and submit a pull request. Any contributions are welcome!

---

**⚠️ Note**: Always remember that while this approach provides a degree of randomness, it should not be used in cryptographic or high-security applications where true randomness or unpredictability is essential.
