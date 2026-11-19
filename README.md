# AoTTG2-Dumps (November 16 2026 build)

Decompiled source for AoTTG2, taken from Ghidra dumps of the Linux standalone build (game version `11.15.2026`, Unity 6000.3.27f2).

The game is built with IL2CPP, so many original names are stripped. Some identifiers here are placeholders, but the structure and logic match the binaries. 99.9% of methods match their machine code on every call, string literal and virtual call. The 30 methods that do not carry a `// fidelity:` comment under their address listing what the C leaves out.

## cpp/

Ghidra C output for each game type, with IL2CPP structs and signatures applied. This is where the real method bodies live.

## csharp_body_deref/

C# stubs for every assembly (`Assembly-CSharp`, `Scripts`, `mscorlib`, Photon, DOTween and the rest) with tokens, field offsets and method addresses. The bodies are empty. Each file header points to its C file in `cpp/`.

## csharp_lifted/

The same C# tree with each method body lifted from the C into C# syntax. Each method says which C file it came from and whether it lifted cleanly. Lines with no C# equivalent (Ghidra byte slices such as `x._8_4_`) are kept as they are.

## il2cpp/

Decrypts `global-metadata.dat` and recovers the renamed `il2cpp_*` exports so dumpers can read the game. It reads Windows (PE) builds and has one scheme row, for the November 1 2026 Windows build. The Linux build in this dump uses a different header layout that it does not handle yet. See `il2cpp/README.md`.

## reconstructed/

Readable C# for the encoding, compression and networking code, rebuilt from the stubs and the Ghidra output and checked against this Linux build. Original namespaces and layout are kept. Private helpers marked "the game inlines this" do not exist in the binary; they stand for code the compiler repeats at each call site.

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
