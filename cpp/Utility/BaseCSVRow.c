// Type: Utility.BaseCSVRow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/BaseCSVRow.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/CSV/BaseCSVRow.cs
// --------------------------------

// Utility.BaseCSVRow$$.ctor
// il2cpp: void Utility_BaseCSVRow___ctor (Utility_BaseCSVRow_o* __this, const MethodInfo* method);
// 0x448edc0

void Utility_BaseCSVRow___ctor(Utility_BaseCSVRow_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae8f2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCSVObject);
    g_data_057ae8f2 = '\x01';
    iVar1 = *(int *)(TypeInfo_BaseCSVObject + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BaseCSVObject + 0xe4);
  }
  if (iVar1 != 0) {
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


