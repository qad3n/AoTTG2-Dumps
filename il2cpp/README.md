# il2cpp

Helper code for getting IL2CPP games readable by dumpers like Il2CppDumper or Cpp2IL.

Two things can break dumping on some builds. The il2cpp exports in `GameAssembly.dll` get renamed so nothing can find `il2cpp_init`, and `global-metadata.dat` gets encrypted so the dumper refuses to load it. This code fixes both.

`Il2CppExports.cs` gets the real `il2cpp_*` names back from `UnityPlayer.dll`. One function in there looks up every renamed export in the same order as Unity's own API list, so the code pairs them up by position. That list is for Unity 6000.3, so if your game is on another version you'll need to swap it.

`MetadataDecryptor.cs` decrypts the metadata and writes a normal header back so dumpers accept it. The values that change per build (seeds, offsets, section order) go in `MetadataSchemes.cs`. There's one row in there right now, for the November 1 2026 AoTTG2 Windows build. `PeImage.cs` is a small PE reader both of them use, and `UnityVersion.cs` pulls the Unity version out of a game data file if you need to check it.

Rough usage:

```csharp
string exportMap = Il2CppExports.build(gameAssemblyPath, unityPlayerPath);

if (MetadataDecryptor.encrypted(metadataPath))
    File.WriteAllBytes(outPath, MetadataDecryptor.decrypt(gameAssemblyPath, metadataPath));
```

`exportMap` is null if the exports weren't renamed. Otherwise it has one `renamed real` pair per line.
