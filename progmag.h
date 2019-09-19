

#ifndef PROGMAG_H_
#define PROGMAG_H_

// This is only guaranteed to work with GCC,
// as it uses the GCC Preprocessor Extensions.
// For more information, see:
// https://gcc.gnu.org/onlinedocs/cpp/Common-Predefined-Macros.html

// To run this with another compiler, define
// CONFIG_ALLOW_FOREIGN_COMPILER
#ifndef CONFIG_ALLOW_FOREIGN_COMPILER
// Check if current compiler is GCC
#ifndef __GNUC__
#error "Define \"CONFIG_ALLOW_FOREIGN_COMPILER\" to run with non-GCC compiler."
#endif
#endif

#endif // PROGMAG_H_