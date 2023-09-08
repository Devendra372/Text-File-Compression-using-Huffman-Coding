# Text-File-Compression-using-Huffman-Coding

Text File Compression can be used to transfer large text files by compressing them. Approximately 30% compression is done.

## Compression

Compile the given code to generate a executable.
```bash
gcc compress.c
```
Use the path of file which you want to compress as a command line argument.
```bash
./a.out Trail.txt
```
This will create a compressed file with .hzip extension. (e.g. Trail.txt.hzip)

## Decompression
To retrieve the original file from compressed file, we need to decompress it.

First of all compile the given file to generate a executable.
```bash
gcc decompress.c
```
Use the path of file which you want to decompress as a command line argument.
```bash
./a.out Trail.txt.hzip
```
This will create a decompressed file. The contents of this file will be same as the original file

