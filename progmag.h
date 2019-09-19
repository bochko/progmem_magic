

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

// To disable compiler output whenever a literal
// is moved to program memory,
// define CONFIG_SUPPRESS_PROGMAG_WARN
#ifndef CONFIG_SUPPRESS_PROGMAG_WARN
#define PROGMAG_WARN() _Pragma("message (\"Preprocessor action: String literal => PROGMEM\")")
// This is the preprocessor that concatenates the unique variable name
// for the static constant to be created with the literal.
#define PROGMAG_GEN(string_input, unique) ({ \
    static const char progmag_ltop##unique[] = string_input; \
    PROGMAG_WARN(); \
    progmag_ltop##unique; })
#else
// Version without compiler message output.
#define PROGMAG_GEN(string_input, unique) ({ \
    static const char progmag_ltop##unique[] = string_input; \
    progmag_ltop##unique; })
#endif



// This is the macro that should be called by the user
#define PROGMAG_LTOP(string_input) 

#endif // PROGMAG_H_
