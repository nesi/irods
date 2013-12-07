/* -*- mode: c++; fill-column: 132; c-basic-offset: 4; indent-tabs-mode: nil -*- */

/*** Copyright (c), The Regents of the University of California            ***
 *** For more information please refer to files in the COPYRIGHT directory ***/
/* fileClose.h - This file may be generated by a program or script
 */

#ifndef FILE_CLOSE_HPP
#define FILE_CLOSE_HPP

/* This is a low level file type API call */

#include "rods.hpp"
#include "rcMisc.hpp"
#include "procApiRequest.hpp"
#include "apiNumber.hpp"
#include "initServer.hpp"

#include "fileDriver.hpp"

typedef struct FileCloseInp {
    int fileInx;
    char in_pdmo[MAX_NAME_LEN];
} fileCloseInp_t;

#define fileCloseInp_PI "int fileInx; str in_pdmo[MAX_NAME_LEN];"

#if defined(RODS_SERVER)
#define RS_FILE_CLOSE rsFileClose
/* prototype for the server handler */
int
rsFileClose( rsComm_t *rsComm, fileCloseInp_t *fileCloseInp );
int
_rsFileClose( rsComm_t *rsComm, fileCloseInp_t *fileCloseInp );
int
remoteFileClose( rsComm_t *rsComm, fileCloseInp_t *fileCloseInp,
                 rodsServerHost_t *rodsServerHost );
#else
#define RS_FILE_CLOSE NULL
#endif

/* prototype for the client call */
int
rcFileClose( rcComm_t *conn, fileCloseInp_t *fileCloseInp );

#endif  /* FILE_CLOSE_H */