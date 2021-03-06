/*
 * base64.h
 *
 * @chuanjiong
 */

#ifndef _BASE64_H_
#define _BASE64_H_

#ifdef __cplusplus
extern "C"
{
#endif

//https://github.com/zhicheng/base64/blob/master/base64.h

enum {
    BASE64_OK = 0,
    BASE64_INVALID
};

#define BASE64_ENCODE_OUT_SIZE(s)   (((s) + 2) / 3 * 4)

#define BASE64_DECODE_OUT_SIZE(s)   (((s)) / 4 * 3)

int base64_encode(const unsigned char *in, unsigned int inlen, char *out);

int base64_decode(const char *in, unsigned int inlen, unsigned char *out);

#ifdef __cplusplus
}
#endif

#endif //_BASE64_H_


