// Type: Settings.TitanCustomSkinSet
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Settings/TitanCustomSkinSet.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/TitanCustomSkinSet.cs
// --------------------------------

// Settings.TitanCustomSkinSet$$Validate
// il2cpp: bool Settings_TitanCustomSkinSet__Validate (Settings_TitanCustomSkinSet_o* __this, const MethodInfo* method);
// 0x59d24c0

bool Settings_TitanCustomSkinSet__Validate(Settings_TitanCustomSkinSet_o *__this,MethodInfo *method)

{
  Settings_ListSetting_TitanCustomSkinSlot__o *__this_00;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_07545c82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
    Il2CppMethodInitialized_07545c82 = '\x01';
  }
  __this_00 = (__this->fields).Slots;
  if (__this_00 == (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = Settings_ListSetting_object___GetCount
                    ((Settings_ListSetting_T__o *)__this_00,
                     (MethodInfo_515DE80 *)MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
  return iVar1 < 0x15;
}


// Settings.TitanCustomSkinSet$$.ctor
// il2cpp: void Settings_TitanCustomSkinSet___ctor (Settings_TitanCustomSkinSet_o* __this, const MethodInfo* method);
// 0x59d2510

void Settings_TitanCustomSkinSet___ctor(Settings_TitanCustomSkinSet_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  Settings_TitanCustomSkinSlot_o *__this_00;
  Settings_ListSetting_TitanCustomSkinSlot__o *__this_01;
  
  if (Il2CppMethodInitialized_07545c83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ListSetting_TitanCustomSkinSlot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSkinSlot);
    Il2CppMethodInitialized_07545c83 = '\x01';
  }
  method_00 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0((Settings_BoolSetting_o *)method_00,false,(MethodInfo *)0x0);
  (__this->fields).OverrideModels = (Settings_BoolSetting_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OverrideModels);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_TitanCustomSkinSlot);
  Settings_TitanCustomSkinSlot___ctor(__this_00,method_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_TitanCustomSkinSlot);
  Settings_ListSetting_object____ctor_515d3f0
            ((Settings_ListSetting_T__o *)__this_01,(Il2CppObject *)__this_00,
             (MethodInfo_515D3F0 *)MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_ctor);
  (__this->fields).Slots = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Slots);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


