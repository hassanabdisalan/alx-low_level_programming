#ifndef ELF_HEADER_H
#define ELF_HEADER_H

#include <stdint.h>
#include <elf.h>

/* Function prototypes */

/**
 * print_error - Print an error message and exit.
 * @exit_code: Exit status code.
 * @format: Format string for the error message.
 * @...: Additional arguments for the format string.
 */
void print_error(int exit_code, const char *format, ...);

/**
 * print_magic - Print the ELF magic number.
 * @header: Pointer to the ELF header structure.
 */
void print_magic(Elf64_Ehdr *header);

/**
 * print_class - Print the ELF class.
 * @header: Pointer to the ELF header structure.
 */
void print_class(Elf64_Ehdr *header);

/**
 * print_data - Print the data encoding of the ELF file.
 * @header: Pointer to the ELF header structure.
 */
void print_data(Elf64_Ehdr *header);

/**
 * print_version - Print the ELF version.
 * @header: Pointer to the ELF header structure.
 */
void print_version(Elf64_Ehdr *header);

/**
 * print_os_abi - Print the OS/ABI.
 * @header: Pointer to the ELF header structure.
 */
void print_os_abi(Elf64_Ehdr *header);

/**
 * print_elf_type - Print the ELF file type.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_type(Elf64_Ehdr *header);

/**
 * print_entry - Print the entry point address.
 * @header: Pointer to the ELF header structure.
 */
void print_entry(Elf64_Ehdr *header);

/**
 * print_elf_header_info - Print the ELF header information.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_header_info(Elf64_Ehdr *header);

#endif /* ELF_HEADER_H */
