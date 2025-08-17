#include <foo/foo.h> // public header import 
#include "baz.h" // internal header import
#include <bar/bar.h> // cross module, public header import

#include <stdio.h>

void foo(void) {
    baz();
    bar();
    printf("Hello from foo!\n");
}
