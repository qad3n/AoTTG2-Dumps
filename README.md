# AoTTG2-Dumps - Version: July 04 2026

Disassembled source for AoTTG2, taken from Ghidra dumps of the Linux standalone build.

The game is built with IL2CPP, so a lot of the original names are stripped out. Some identifiers here are placeholders, but the structure and logic still match the real binaries.

## reconstructed/

Readable C# for the game's encoding and compression code, rebuilt from the IL2CPP stubs and the Ghidra output. The original namespaces and layout are kept.

- `ApplicationManagers/`: `ApplicationEncoder`, the obfuscator that builds the lobby and room hashes, and `ApplicationVersion`, which feeds them into Photon.
- `Utility/`: `CSVCompression`, `DataCompressors`, and the `Algorithms/` wrappers (`Brotli`, `GZip`, `Deflate`, `LZF`).
- `Map/`: `CustomLogicTransfer` and `MapTransfer`, which send map and logic data over Photon in Brotli compressed chunks.

`CLZF2` is not included, since it is just the public LibLZF port. The game keeps it as `Utility.CLZF2` and the code here references it.

## Bugs worth noting

- `ApplicationEncoder.Encode` has no input check. An empty string crashes with a divide by zero (452 % 0), and null throws a null reference.
- `ApplicationEncoder.Encode2` is in the binary but never called.
- `CSVCompression` ships its symbol table pass (`CompressSymbol` / `DecompressSymbol`) with the call sites disabled, so it does nothing and always returns an empty table.
- `LZFAlgorithm.Decompress` ignores the size limits, so LZF decompression can be used as a decompression bomb.
- The in game `CLZF2` is not thread safe. `lzf_compress` shares one static hash table, so concurrent calls corrupt each other. Its decompressor also grows its buffer forever whenever `lzf_decompress` returns 0, which malformed input can trigger, so it can be made to exhaust memory.
- `CustomLogicTransfer` never sends an end frame when the logic is empty, so the receiver never finishes loading it.
- `DataCompressors.ZLib` is misnamed. It is raw deflate with no zlib header or checksum. `GZip`, `ZLib`, and `LZF` are all defined but unused, since only `Brotli` actually runs.

## Notes

`MapTransfer` sends three compressed metadata strings whose original field names could not be recovered, so they are just called `MetaGeneral`, `MetaOptions`, and `MetaExtra`. The byte layout is correct, the names are not. The `Map/` classes also call into live game types like `MapManager` and Photon, so they are behavioral references, not something you can compile on its own.

---

*Proof of concept, for educational purposes only. No promise that this or anything related gets updated again.*
