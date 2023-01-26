/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/

#ifndef TOOLCHAIN_SPECIFICS_H
#define TOOLCHAIN_SPECIFICS_H

    #define COMPILER_PRAGMA(arg)            _Pragma(#arg)
    #define SECTION(a)                      COMPILER_PRAGMA(location = a)
    #define NO_INIT                         __no_init
    //
    #include <stdint.h>
    #define __inline__                      inline

    // ************************************************************************
    // H3_IAR_SYS_TYPES 

    #define ssize_t                         long

    // ************************************************************************
    // Usually defined in errno.h, include extended E codes not provided in IAR errno.h
    // H3_IAR_ERRNO
        extern __attribute__((section(".bss.errno"))) int errno;

        /*
         * List of system errors numbers from:
         *
         *    The Open Group Base Specifications Issue 7
         *    IEEE Std 1003.1-2008, 2016 Edition
         *    http://pubs.opengroup.org/onlinepubs/9699919799/basedefs/errno.h.html
         */
        #define E2BIG           ( 1) /* Argument list too long */
        #define EACCES          ( 2) /* Permission denied */
        #define EADDRINUSE      ( 3) /* Address in use */
        #define EADDRNOTAVAIL   ( 4) /* Address not available */
        #define EAFNOSUPPORT    ( 5) /* Address family not supported */
        #define EAGAIN          ( 6) /* Resource unavailable, try again */
        #define EALREADY        ( 7) /* Connection already in progress */
        #define EBADF           ( 8) /* Bad file descriptor */
        #define EBADMSG         ( 9) /* Bad message */
        #define EBUSY           (10) /* Device or resource busy */
        #define ECANCELED       (11) /* Operation canceled */
        #define ECHILD          (12) /* No child processes */
        #define ECONNABORTED    (13) /* Connection aborted */
        #define ECONNREFUSED    (14) /* Connection refused */
        #define ECONNRESET      (15) /* Connection reset */
        #define EDEADLK         (16) /* Resource deadlock would occur */
        #define EDESTADDRREQ    (17) /* Destination address required */
        #define EDOM            (18) /* Mathematics argument out of domain of function */
        #define EDQUOT          (19) /* Reserved */
        #define EEXIST          (20) /* File exists */
        #define EFAULT          (21) /* Bad address */
        #define EFBIG           (22) /* File too large */
        #define EHOSTUNREACH    (23) /* Host is unreachable */
        #define EIDRM           (24) /* Identifier removed */
        #define EILSEQ          (25) /* Illegal byte sequence */
        #define EINPROGRESS     (26) /* Operation in progress */
        #define EINTR           (27) /* Interrupted function */
        #define EINVAL          (28) /* Invalid argument */
        #define EIO             (29) /* I/O error */
        #define EISCONN         (30) /* Socket is connected */
        #define EISDIR          (31) /* Is a directory */
        #define ELOOP           (32) /* Too many levels of symbolic links */
        #define EMFILE          (33) /* File descriptor value too large */
        #define EMLINK          (34) /* Too many links */
        #define EMSGSIZE        (35) /* Message too large */
        #define EMULTIHOP       (36) /* Reserved */
        #define ENAMETOOLONG    (37) /* Filename too long */
        #define ENETDOWN        (38) /* Network is down */
        #define ENETRESET       (39) /* Connection aborted by network */
        #define ENETUNREACH     (40) /* Network unreachable */
        #define ENFILE          (41) /* Too many files open in system */
        #define ENOBUFS         (42) /* No buffer space available */
        #define ENODATA         (43) /* No message is available on the STREAM head read queue */
        #define ENODEV          (44) /* No such device */
        #define ENOENT          (45) /* No such file or directory */
        #define ENOEXEC         (46) /* Executable file format error */
        #define ENOLCK          (47) /* No locks available */
        #define ENOLINK         (48) /* Reserved */
        #define ENOMEM          (49) /* Not enough space */
        #define ENOMSG          (50) /* No message of the desired type */
        #define ENOPROTOOPT     (51) /* Protocol not available */
        #define ENOSPC          (52) /* No space left on device */
        #define ENOSR           (53) /* No STREAM resources */
        #define ENOSTR          (54) /* Not a STREAM */
        #define ENOSYS          (55) /* Functionality not supported */
        #define ENOTCONN        (56) /* The socket is not connected */
        #define ENOTDIR         (57) /* Not a directory or a symbolic link to a directory */
        #define ENOTEMPTY       (58) /* Directory not empty */
        #define ENOTRECOVERABLE (59) /* State not recoverable */
        #define ENOTSOCK        (60) /* Not a socket */
        #define ENOTSUP         (61) /* Not supported */
        #define ENOTTY          (62) /* Inappropriate I/O control operation */
        #define ENXIO           (63) /* No such device or address */
        #define EOPNOTSUPP      (64) /* Operation not supported on socket */
        #define EOVERFLOW       (65) /* Value too large to be stored in data type */
        #define EOWNERDEAD      (66) /* Previous owner died */
        #define EPERM           (67) /* Operation not permitted */
        #define EPIPE           (68) /* Broken pipe */
        #define EPROTONOSUPPORT (69) /* Protocol not supported */
        #define EPROTO          (70) /* Protocol error */
        #define EPROTOTYPE      (71) /* Protocol wrong type for socket */
        #define ERANGE          (72) /* Result too large */
        #define EROFS           (73) /* Read-only file system */
        #define ESPIPE          (74) /* Invalid seek */
        #define ESRCH           (75) /* No such process */
        #define ESTALE          (76) /* Reserved */
        #define ETIMEDOUT       (77) /* Connection timed out */
        #define ETIME           (78) /* Stream ioctl() timeout */
        #define ETXTBSY         (79) /* Text file busy */
        #define EWOULDBLOCK     (80) /* Operation would block */
        #define EXDEV           (81) /* Cross-device link */



#endif // end of header

