// Type: Map.BatchSlice
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/BatchSlice.cs
// Prior real C# source: none
// --------------------------------

// Map.BatchSlice$$.ctor
// il2cpp: void Map_BatchSlice___ctor (Map_BatchSlice_o __this, UnityEngine_Mesh_o* mesh, int32_t start, int32_t count, const MethodInfo* method);
// 0x5977d20

void Map_BatchSlice___ctor
               (Map_BatchSlice_o *__this,UnityEngine_Mesh_o *mesh,int32_t start,int32_t count,
               MethodInfo *method)

{
  (__this->fields).Mesh = mesh;
  Il2CppCodeGenWriteBarrier((void **)__this);
  (__this->fields).Start = start;
  (__this->fields).Count = count;
  return;
}


