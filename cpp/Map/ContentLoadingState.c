// Type: Map.ContentLoadingState
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Map/ContentLoadingState.cs
// Prior real C# source: none
// --------------------------------

// Map.ContentLoadingState$$IsFinished
// il2cpp: bool Map_ContentLoadingState__IsFinished (bool logicLoaded, bool addonsLoaded, bool mapLoaded, const MethodInfo* method);
// 0x5969560

bool Map_ContentLoadingState__IsFinished(bool logicLoaded,bool addonsLoaded,bool mapLoaded,MethodInfo *method)

{
  return (logicLoaded && addonsLoaded) && mapLoaded;
}


