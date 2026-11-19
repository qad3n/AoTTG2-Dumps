// Type: Utility.BaseCSVRowItem
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/BaseCSVRowItem.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/CSV/BaseCSVRowItem.cs
// --------------------------------

// Utility.BaseCSVRowItem$$get_Delimiter
// il2cpp: uint16_t Utility_BaseCSVRowItem__get_Delimiter (Utility_BaseCSVRowItem_o* __this, const MethodInfo* method);
// 0x5de3300

uint16_t Utility_BaseCSVRowItem__get_Delimiter(Utility_BaseCSVRowItem_o *__this,MethodInfo *method)

{
  return 0x7c;
}


// Utility.BaseCSVRowItem$$.ctor
// il2cpp: void Utility_BaseCSVRowItem___ctor (Utility_BaseCSVRowItem_o* __this, const MethodInfo* method);
// 0x5de3310

void Utility_BaseCSVRowItem___ctor(Utility_BaseCSVRowItem_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07548290 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_BaseCSVObject);
    Il2CppMethodInitialized_07548290 = '\x01';
    uVar1 = (TypeInfo_Utility_BaseCSVObject->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Utility_BaseCSVObject->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_BaseCSVObject);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


