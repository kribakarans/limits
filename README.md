# Limits
Limits of C datatype sizes and standard Linux macros limits.

**Sample output: 64 bit machine**
```
Bytes Type
----- ----
 1  - char

 2  - short
 2  - short int

 4  - int
 4  - unsigned
 4  - float

 8  - long
 8  - long int
 8  - long long int
 8  - unsigned long

 8  - double

 16 - long double

 1  - uint8_t
 1  - u_int8_t
 2  - uint16_t
 2  - u_int16_t
 4  - uint32_t
 4  - u_int32_t
 8  - uint64_t
 8  - u_int64_t
 8  - size_t
 8  - ssize_t

 255  - MAX_INPUT
 255  - NAME_MAX
 255  - MAXNAMLEN
 4096 - PATH_MAX
 4096 - PIPE_BUF
 4096 - FILENAME_MAX
 8192 - BUFSIZ

Pointer sizes:
------- ------
sizeof int*   : 8
sizeof char*  : 8
sizeof struct*: 8

```
