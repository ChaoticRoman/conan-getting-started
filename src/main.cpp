#include <fmt/core.h>

#include <mbedtls/version.h>
#include <mbedtls/sha3.h>

int main()
{
    fmt::print("Hello World!\n");
    fmt::print("Mbed-TLS {}\n", MBEDTLS_VERSION_STRING);

    uint8_t input[0] = {};
    size_t ilen = 0;
    uint8_t output[32] = {};
    size_t olen = 32;

    mbedtls_sha3(MBEDTLS_SHA3_256, input, ilen, output, olen);

    fmt::print("My buffer: ");
    for (uint8_t b: output) {
       fmt::print("{:02x}", b);
    }
    fmt::print("\n");


    return 0;
}
