/*** Copyright (c), The Regents of the University of California            ***
 *** For more information please refer to files in the COPYRIGHT directory ***/

#ifndef STREAM_CLOSE_HPP
#define STREAM_CLOSE_HPP

/* This is a Object File I/O API call */

#include "rods.hpp"
#include "rcMisc.hpp"
#include "procApiRequest.hpp"
#include "apiNumber.hpp"


#include "fileClose.hpp"

#if defined(RODS_SERVER)
#define RS_STREAM_CLOSE rsStreamClose
/* prototype for the server handler */
int
rsStreamClose( rsComm_t *rsComm, fileCloseInp_t *fileCloseInp );
#else
#define RS_STREAM_CLOSE NULL
#endif

/* prototype for the client call */
#ifdef __cplusplus
extern "C" {
#endif
int
rcStreamClose( rcComm_t *conn, fileCloseInp_t *fileCloseInp );
#ifdef __cplusplus
}
#endif

#endif	/* STREAM_CLOSE_H */
