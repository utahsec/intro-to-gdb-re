## Installing Tools on Kali
- `sudo apt update && sudo apt install gcc-multilib gdb ghex -y`
- `git clone https://github.com/longld/peda.git ~/peda`
- `echo "source ~/peda/peda.py" >> ~/.gdbinit`

## Compiling hello.asm
- `nasm -f elf hello.asm`
- `ld -m elf_i386 -s -o hello hello.o`

## Compiling challenge.c
- `gcc -m32 challenge.c -o challenge`