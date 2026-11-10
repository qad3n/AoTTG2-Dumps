# AoTTG2-Dumps (November 1 2026 build)

Decompiled source for AoTTG2, taken from Ghidra dumps of the Windows standalone build.

The game is built with IL2CPP, so many original names are stripped. Some identifiers here are placeholders, but the structure and logic match the binaries.

## cpp/

Ghidra C output for each game type, with IL2CPP structs and signatures applied. This is where the real method bodies live.

## csharp_body_deref/

C# stubs for every assembly (`Assembly-CSharp`, `mscorlib`, Photon, DOTween and the rest) with tokens, field offsets and method addresses. The bodies are empty. Each file header points to its C file in `cpp/`.

## il2cpp/

Decrypts `global-metadata.dat` and recovers the renamed `il2cpp_*` exports so dumpers can read the game. It works on other IL2CPP games too. See `il2cpp/README.md`.

## reconstructed/

Readable C# for the encoding, compression and networking code, rebuilt from the stubs and the Ghidra output. Original namespaces and layout are kept.

- `ApplicationManagers/`: `ApplicationEncoder` builds the lobby and room hashes, and `ApplicationVersion` feeds them into Photon.
- `Utility/`: `CSVCompression`, `DataCompressors` and the `Algorithms/` wrappers (`Brotli`, `GZip`, `Deflate`, `LZF`).
- `Map/`: `CustomLogicTransfer` and `MapTransfer` send map and logic data over Photon in Brotli chunks, with their helpers.
- `GameManagers/`: `RPCManager`, the room `[PunRPC]` entry points (logic, map and addon transfer, map destruction, chat, kill feed, game state).
- `Characters/` and `Projectiles/`: `[PunRPC]` methods for the characters and projectiles, plus the `BaseMovementSync` stream code and its subclasses. These are `partial` files that hold only the networking members.
- `CustomLogic/`: `CustomLogicPhotonSync`, the networked map object view.
- `Anticheat/`: `ModeratorManager` (the only `IOnEventCallback` listener, moderator event codes 180 to 190, ban list types), `AnticheatManager` and the instantiate event filter.
- `Photon/`: `CustomSerialization`, which registers `UnityEngine.Color` as Photon custom type `'C'`.

`CLZF2` is left out because it is the public LibLZF port. The game keeps it as `Utility.CLZF2` and the code here references it.

*Proof of concept, for educational purposes only. No promise this gets updated again.*
