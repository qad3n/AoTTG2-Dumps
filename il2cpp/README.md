# il2cpp

Helper code for getting IL2CPP games readable by dumpers like Il2CppDumper or Cpp2IL.

Two things can break dumping on some builds. The il2cpp exports in `GameAssembly.dll` (or `GameAssembly.so` on Linux) get renamed so nothing can find `il2cpp_init`, and `global-metadata.dat` gets encrypted so the dumper refuses to load it. This code fixes both.

`Il2CppExports.cs` gets the real `il2cpp_*` names back from `UnityPlayer.dll` or `UnityPlayer.so`. One function in there looks up every renamed export in the same order as Unity's own API list, so the code pairs them up by position. That list is for Unity 6000.3, so if your game is on another version you'll need to swap it.

`MetadataDecryptor.cs` decrypts the metadata and writes a normal header back so dumpers accept it. The values that change per build (seeds, offsets, header record layout, section order and padding) go in `MetadataSchemes.cs`. There are two rows in there right now, for the November 1 2026 AoTTG2 Windows build and the November 16 2026 Linux build. `ModuleImage.cs` loads the game module as PE (`PeImage.cs`) or ELF (`ElfImage.cs`) for both of them, and `UnityVersion.cs` pulls the Unity version out of a game data file if you need to check it.

Rough usage:

```csharp
string exportMap = Il2CppExports.build(gameAssemblyPath, unityPlayerPath);

if (MetadataDecryptor.encrypted(metadataPath))
    File.WriteAllBytes(outPath, MetadataDecryptor.decrypt(gameAssemblyPath, metadataPath));
```

`exportMap` is null if the exports weren't renamed. Otherwise it has one `renamed real` pair per line.
