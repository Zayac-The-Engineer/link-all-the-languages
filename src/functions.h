extern const void hello_c();
extern const void hello_cpp();
extern const void hello_carp();
extern const void hello_d();
extern const void hello_fortran();
extern const void hello_rust();
extern const void hello_zig();

const void (*hello[])() = { hello_c, hello_cpp, hello_carp, hello_d, hello_fortran, hello_rust, hello_zig };
#define NUMBER_OF_LANGUAGES sizeof(hello) / sizeof(hello[0])
