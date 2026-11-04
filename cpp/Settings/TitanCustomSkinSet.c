// Type: Settings.TitanCustomSkinSet
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Settings/TitanCustomSkinSet.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/TitanCustomSkinSet.cs
// --------------------------------

// Settings.TitanCustomSkinSet$$Validate
// il2cpp: bool Settings_TitanCustomSkinSet__Validate (Settings_TitanCustomSkinSet_o* __this, const MethodInfo* method);
// 0x181dcf950

bool Settings_TitanCustomSkinSet__Validate(Settings_TitanCustomSkinSet_o *__this,MethodInfo *method)

{
  Settings_ListSetting_TitanCustomSkinSlot__o *__this_00;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_184344a11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
    Il2CppMethodInitialized_184344a11 = '\x01';
  }
  __this_00 = (__this->fields).Slots;
  if (__this_00 != (Settings_ListSetting_TitanCustomSkinSlot__o *)0x0) {
    iVar1 = Settings_ListSetting_object___GetCount
                      ((Settings_ListSetting_T__o *)__this_00,
                       (MethodInfo_182B100 *)MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetCount);
    return iVar1 < 0x15;
  }
  ThrowNullReferenceException();
}


// Settings.TitanCustomSkinSet$$.ctor
// il2cpp: void Settings_TitanCustomSkinSet___ctor (Settings_TitanCustomSkinSet_o* __this, const MethodInfo* method);
// 0x181dcf9a0

void Settings_TitanCustomSkinSet___ctor(Settings_TitanCustomSkinSet_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *__this_00;
  Settings_TitanCustomSkinSlot_o *__this_01;
  Settings_ListSetting_TitanCustomSkinSlot__o *__this_02;
  
  if (Il2CppMethodInitialized_184344a12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ListSetting_TitanCustomSkinSlot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSkinSlot);
    Il2CppMethodInitialized_184344a12 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_1f11be0(__this_00,false,(MethodInfo *)0x0);
  (__this->fields).OverrideModels = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OverrideModels,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_TitanCustomSkinSlot);
  Settings_TitanCustomSkinSlot___ctor(__this_01,(MethodInfo *)0x0);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ListSetting_TitanCustomSkinSlot);
  Settings_ListSetting_object____ctor_182b830
            ((Settings_ListSetting_T__o *)__this_02,(Il2CppObject *)__this_01,
             (MethodInfo_182B830 *)MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_ctor);
  (__this->fields).Slots = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Slots,__this_02);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


