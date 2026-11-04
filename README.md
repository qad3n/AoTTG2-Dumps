# AoTTG2-Dumps (Version: November 1 2026)

Disassembled source for AoTTG2, taken from Ghidra dumps of the Windows standalone build.

The game is built with IL2CPP, so a lot of the original names are stripped out. Some identifiers here are placeholders, but the structure and logic still match the real binaries.

---

### il2cpp/

Code for decrypting `global-metadata.dat` and recovering the renamed `il2cpp_*` exports so dumpers can read the game. It works for other IL2CPP games too. See `il2cpp/README.md`.

---

### reconstructed/

Readable C# for the game's encoding, compression and networking code, rebuilt from the IL2CPP stubs and the Ghidra output. The original namespaces and layout are kept.

- `ApplicationManagers/`: `ApplicationEncoder`, the obfuscator that builds the lobby and room hashes, and `ApplicationVersion`, which feeds them into Photon.
- `Utility/`: `CSVCompression`, `DataCompressors`, and the `Algorithms/` wrappers (`Brotli`, `GZip`, `Deflate`, `LZF`).
- `Map/`: `CustomLogicTransfer` and `MapTransfer`, which send map and logic data over Photon in Brotli compressed chunks, plus the helpers they use: `CustomLogicTransferData`, `OrderedTransferReceiver` and `ContentTransferChangeTracker`.
- `GameManagers/`: `RPCManager`, the room level `[PunRPC]` entry points (logic, map and addon transfer, map destruction, chat, kill feed, game state).
- `Characters/` and `Projectiles/`: the `[PunRPC]` methods of `BaseCharacter`, `Human`, `Horse`, `BaseTitan`, `BasicTitan`, `BaseShifter`, `WallColossalShifter`, `BaseProjectile` and `BladeThrowProjectile`, plus the `IPunObservable` stream code in `BaseMovementSync` and its `Human`, `BasicTitan` and `WallColossal` subclasses.
- `CustomLogic/`: `CustomLogicPhotonSync`, the networked map object view (instantiate data, RPCs and stream serialization).
- `Anticheat/`: `ModeratorManager`, the game's only `IOnEventCallback` listener, with the moderator event codes (180 to 190), request and response keys and the ban list types; `AnticheatManager` and the instantiate event filter.
- `Photon/`: `CustomSerialization`, which registers `UnityEngine.Color` as Photon custom type `'C'`.

The `Characters/` and `Projectiles/` files are `partial` fragments that hold only the networking members of much larger classes.

`CLZF2` is not included, since it is just the public LibLZF port. The game keeps it as `Utility.CLZF2` and the code here references it.

---

*Proof of concept, for educational purposes only. No promise that this or anything related gets updated again.*
