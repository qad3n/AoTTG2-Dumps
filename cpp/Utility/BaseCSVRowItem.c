// Type: Utility.BaseCSVRowItem
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Utility/BaseCSVRowItem.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/CSV/BaseCSVRowItem.cs  [prior source available (delta unverified)]
// --------------------------------

// Utility.BaseCSVRowItem$$get_Delimiter
// il2cpp: uint16_t Utility_BaseCSVRowItem__get_Delimiter (Utility_BaseCSVRowItem_o* __this, const MethodInfo* method);
// 0x4153d00

uint16_t Utility_BaseCSVRowItem__get_Delimiter(Utility_BaseCSVRowItem_o *__this,MethodInfo *method)

{
  return 0x7c;
}


// Utility.BaseCSVRowItem$$.ctor
// il2cpp: void Utility_BaseCSVRowItem___ctor (Utility_BaseCSVRowItem_o* __this, const MethodInfo* method);
// 0x4153d10

void Utility_BaseCSVRowItem___ctor(Utility_BaseCSVRowItem_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057049fc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseCSVObject);
    DAT_057049fc = '\x01';
    iVar1 = *(int *)(TypeInfo_BaseCSVObject + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BaseCSVObject + 0xe4);
  }
  if (iVar1 != 0) {
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


