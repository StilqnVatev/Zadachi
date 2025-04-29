#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <openssl/pem.h>
#include <openssl/rsa.h>
#include <openssl/err.h>

int main()
{
 RSA *r = NULL;
 BIO *bp_public = NULL, *bp_private = NULL;
 int bits = 2048;
 int result = 0;
 BIGNUM *big = BN_new();
 result = BN_set_word (big, RSA_F4)

  r = RSA_new();
  result = RSA_generate_key_ex (r,bits,big,NULL);
  bp_public = BIO_new_file ("public pem", "w+");
  result = PEM_write_bio_RSAPPublicKey(bp_public, r);
  bp_private = BIO_new_file("private pem", "w+");
  result = PEM_write_bio_RSAPPrivateKey (bp_private, r,NULL);

  printf("Done");
  Return EXIT_SUCCESS;
  }