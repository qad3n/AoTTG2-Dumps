// Type: Map.BatchSlice
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Map/BatchSlice.cs
// Prior real C# source: none
// --------------------------------

// Map.BatchSlice$$.ctor
// il2cpp: void Map_BatchSlice___ctor (Map_BatchSlice_o __this, UnityEngine_Mesh_o* mesh, int32_t start, int32_t count, const MethodInfo* method);
// 0x180a44ea0

void
Map_BatchSlice___ctor(Map_BatchSlice_o __this, UnityEngine_Mesh_o* mesh, int32_t start, int32_t count, MethodInfo* method)

{
  (__this->fields)._word = word;
  Il2CppCodeGenWriteBarrier((void **)__this,word);
  (__this->fields)._op = op;
  (__this->fields)._token = token;
  return;
}


