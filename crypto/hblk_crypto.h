#ifndef HBLK_CRYPTO_H
#define HBLK_CRYPTO_H
#define SHA256_DIGEST_LENGTH 64
#include <openssl/sha.h>
#include <stdint.h>
uint8_t *sha256(int8_t const *s, size_t len, uint8_t digest[SHA256_DIGEST_LENGTH]);
#endif
