# Ch1.  A Tour of Computer Systems

# 1.1 Information is Bits + Context

- A source program is a sequence of bytes (8 bits)
- Each byte has an integer value that correstponds to some character.
    - e.g. 35 corresponds to the charactor ‘#’
- All information in a system is represented as a bunch of bits.

# 1.2 Programs are Translated by Other Programs into Different Forms

- The individual C statements must be translated by other programs into a sequence of low-level *machine-language* instructions.
- **Compilation system**
    - **Preprocessor**
        - modifies the original C program according to directives that begin with the ‘#’ character.
        - The result is another C program, with the `.i` suffix
    - **Compiler**
        - translates the text file `hello.i` into the text file `hello.s`, which contains an *assembly-language program*.
    - **Assembler**
        - translates `hello.s` into machine-language instructions, packages them in a form known as a *relocatable object program*, and stores the result in the object file `hello.o`.
    - **Linker**
        - merges other object files with `hello.o`.
        - The result is the `hello` file. (executable object file)

# 1.3 It Pays to Understand How Comilation Systems Work

We need to understand how compilation systems work:

- to optimize program performance.
    - `switch`, `if-else`. Which one is better?
    - `while`, `for`. Which one is better?
- to understand **link-time** errors.
    - some of the most perplexing programming errors are related to the operation of the **linker**.
- to avoid secuirty holes.

# 1.4.1 Hardware Organization of a System

- Buses
    - carry bytes of information back and forth between the components.
- I/O Devices
    - are the system’s connection to the external world.
    - Each I/O device is connected to the I/O bus.
    - E.g. A keyboard, mouse, display, disk
- Main Memory
    - is a temporary storage device that holds both a program and the data while the processor is executing the program.
    - E.g. DRAM
- Processor
    - The Central processing unit (CPU)
    - repeatedly executes the instruction pointed at by the program counter and updates the program counter to point to the next instruction.

# 1.4.2 Running the `hello` Program

1. We type the characters “./hello” at the keyboard.
2. The shell program reads each character into a register and stores it in memory.
3. We hit the enter key.
4. The shell loads the executable `hello` file by executing a sequence of instructions that copies the code and data in the `hello` object file from disk to main memory.
5. The processor begins executing the machine-language instructions in the `hello` program’s `main` routine.
6. These instructions copy the bytes in the `hello, world\n` string from memory to the register file, and from there to the display device.

# 1.5 Caches Matter

The machine instructions in the `hello`  program are originally stored on disk. When the program is loaded, they are copied to main memory. As the processor runs the program, instructions are copied from main memory into the processor.

The disk drive on a typical system might be 1,000 times larger than the main memory, but it might take the processor 10,000,000 times longer to read a word from disk than from memory.

To deal with the processor–memory gap, system designers include smaller, faster storage devices called cache **memories*.*

# 1.6 **Storage Devices Form a Hierarchy**

The main idea of a **memory hierarchy** is that storage at one level serves as a cache for storage at the next lower level.