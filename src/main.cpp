#include <fmt/core.h>

#include <mbedtls/version.h>

int main()
{
    fmt::print("Hello World!\n");
    fmt::print("Mbed-TLS {}\n", MBEDTLS_VERSION_STRING);
    return 0;
}
