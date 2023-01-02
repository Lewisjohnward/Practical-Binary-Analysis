# Practical Binary Analysis

Working through the book Practical [Binary Analysis](https://www.amazon.co.uk/Practical-Binary-Analysis-Dennis-Andriesse/dp/1593279124) by Dennis Andriesse
The books website is [Here](https://practicalbinaryanalysis.com/)

## Table of contents
* [Chapter 1 : Anatomy of a Binary](#Chapter-1-:-Anatomy-of-a-Binary)

### Chapter 1 : Anatomy of a Binary

Compilation of a binary from source code. 

Symbols and stripped binaries

Disassembling a binary

Loading and executing a binary

Preprocess source code

`gcc -E -P file`

Output assembly code from source

`gcc -S file`

Output object file

`gcc -o file`

Disassemble with att syntax

`objdump -M att -d file`

Display file info

`file filename`

Display relocation symbols from ELF

`readelf --relocs`

Strip ELF of symbols

`strip --strip-all file`




