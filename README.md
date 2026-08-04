# AoTTG2-Dumps (Version: July 28 2026)

Disassembled source for AoTTG2, taken from Ghidra dumps of the Linux standalone build.

The game is built with IL2CPP, so a lot of the original names are stripped out. Some identifiers here are placeholders, but the structure and logic still match the real binaries.

---

### reconstructed/

Readable C# for the game's encoding and compression code, rebuilt from the IL2CPP stubs and the Ghidra output. The original namespaces and layout are kept.

- `ApplicationManagers/`: `ApplicationEncoder`, the obfuscator that builds the lobby and room hashes, and `ApplicationVersion`, which feeds them into Photon.
- `Utility/`: `CSVCompression`, `DataCompressors`, and the `Algorithms/` wrappers (`Brotli`, `GZip`, `Deflate`, `LZF`).
- `Map/`: `CustomLogicTransfer` and `MapTransfer`, which send map and logic data over Photon in Brotli compressed chunks.

`CLZF2` is not included, since it is just the public LibLZF port. The game keeps it as `Utility.CLZF2` and the code here references it.

---

*Proof of concept, for educational purposes only. No promise that this or anything related gets updated again.*
