# wrap_mpack 
`wrap_mpack` is an Eiffel binding of [mpack](https://github.com/ludocode/mpack) C library
using [WrapC](https://github.com/eiffel-wrap-c/WrapC) tool.

`mpack` is a C implementation of an encoder and decoder for the [MessagePack](https://msgpack.org/) serialization format.

## Requirements 

*  [WrapC](https://github.com/eiffel-wrap-c/WrapC) tool.
*  [Mpack](https://github.com/ludocode/mpack).

### Status
The binding is work in progress.
Tested on Linux and Windows 64 bits.

### Download and Install
The MPack code is small enough so it's embedded directly into wrap_mpack codebase. 
Using the [amalgamation package](https://github.com/ludocode/mpack/releases), so the mpack.h and mpack.c are already part of the wrap_mpack library


#### Linux

	cd library
	./generator.sh

#### Windows

	cd library
	generator.bat

## Examples 

* [Writer API](./examples/write_api) 		`shows how to encodes structured data to MessagePack.`
* [Node API](./examples/node_api)	`shows how to parse a chunk of MessagePack data into an immutable tree of dynamically-typed nodes.` 





