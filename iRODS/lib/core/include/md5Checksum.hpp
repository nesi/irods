/*** Copyright (c), The Regents of the University of California            ***
 *** For more information please refer to files in the COPYRIGHT directory ***/
/* md5Checksum.h - Extern global declaration for client API */

#ifndef MD5_CHECKSUM_HPP
#define MD5_CHECKSUM_HPP

#include <stdio.h>
#include <time.h>
#include <string.h>
#include "rods.hpp"
#include "global.hpp"
#include "md5.hpp"
#include "sha1.hpp"

#ifdef  __cplusplus
extern "C" {
#endif

    int
    chksumLocFile( char *fileName, char *chksumStr );
    int
    md5ToStr( unsigned char *digest, char *chksumStr );
    int
    hashToStr( unsigned char *digest, char *digestStr );
    int
    rcChksumLocFile( char *fileName, char *chksumFlag, keyValPair_t *condInput );

#ifdef  __cplusplus
}
#endif

#endif	/* MD5_CHECKSUM_H */