// Type: Map.ContentTransferChangeTracker
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Map/ContentTransferChangeTracker.cs
// Prior real C# source: none
// --------------------------------

// Map.ContentTransferChangeTracker$$Update
// il2cpp: bool Map_ContentTransferChangeTracker__Update (Map_ContentTransferChangeTracker_o* __this, System_String_o* identity, System_String_o* hash, const MethodInfo* method);
// 0x59694e0

bool Map_ContentTransferChangeTracker__Update
               (Map_ContentTransferChangeTracker_o *__this,System_String_o *identity,System_String_o *hash,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = System_String__op_Inequality((__this->fields)._identity,identity,(MethodInfo *)0x0);
  bVar2 = true;
  if (!bVar1) {
    bVar2 = System_String__op_Inequality((__this->fields)._hash,hash,(MethodInfo *)0x0);
  }
  (__this->fields)._identity = identity;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._identity);
  (__this->fields)._hash = hash;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._hash);
  return bVar2;
}


// Map.ContentTransferChangeTracker$$.ctor
// il2cpp: void Map_ContentTransferChangeTracker___ctor (Map_ContentTransferChangeTracker_o* __this, const MethodInfo* method);
// 0x5969550

void Map_ContentTransferChangeTracker___ctor(Map_ContentTransferChangeTracker_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


