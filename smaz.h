#ifndef _SMAZ_H
#define _SMAZ_H

#ifdef __cplusplus
extern "C" {
#endif

extern int MAX_LEN_ONE_SYMBOL_ENCODED;

int smaz_compress(char* in, int inlen, char* out, int outlen);
int smaz_decompress(char* in, int inlen, char* out, int outlen);

#ifdef __cplusplus
}
#endif

#endif
