// Type: Map.ContentLoadingState
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Map/ContentLoadingState.cs
// Prior real C# source: none
// --------------------------------

// Map.ContentLoadingState$$IsFinished
// il2cpp: bool Map_ContentLoadingState__IsFinished (bool logicLoaded, bool addonsLoaded, bool mapLoaded, const MethodInfo* method);
// 0x181e868e0

bool Map_ContentLoadingState__IsFinished(bool logicLoaded,bool addonsLoaded,bool mapLoaded,MethodInfo *method)

{
  return (logicLoaded && addonsLoaded) && mapLoaded;
}


