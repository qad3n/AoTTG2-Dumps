// Type: Map.ContentTransferChangeTracker
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Map/ContentTransferChangeTracker.cs
// Prior real C# source: none
// --------------------------------

// Map.ContentTransferChangeTracker$$Update
// il2cpp: bool Map_ContentTransferChangeTracker__Update (Map_ContentTransferChangeTracker_o* __this, System_String_o* identity, System_String_o* hash, const MethodInfo* method);
// 0x181e868f0

bool Map_ContentTransferChangeTracker__Update
               (Map_ContentTransferChangeTracker_o *__this,System_String_o *identity,System_String_o *hash,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__op_Inequality((__this->fields)._identity,identity,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = true;
  }
  else {
    bVar1 = System_String__op_Inequality((__this->fields)._hash,hash,(MethodInfo *)0x0);
  }
  (__this->fields)._identity = identity;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._identity,identity);
  (__this->fields)._hash = hash;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._hash,hash);
  return bVar1;
}


// Map.ContentTransferChangeTracker$$.ctor
// il2cpp: void Map_ContentTransferChangeTracker___ctor (Map_ContentTransferChangeTracker_o* __this, const MethodInfo* method);
// 0x18054c890

void
Map_ContentTransferChangeTracker___ctor(Map_ContentTransferChangeTracker_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


