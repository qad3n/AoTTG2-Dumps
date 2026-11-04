// Type: Settings.HumanCustomSkinSettings
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/HumanCustomSkinSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/HumanCustomSkinSettings.cs
// --------------------------------

// Settings.HumanCustomSkinSettings$$.ctor
// il2cpp: void Settings_HumanCustomSkinSettings___ctor (Settings_HumanCustomSkinSettings_o* __this, const MethodInfo* method);
// 0x181dc0250

void Settings_HumanCustomSkinSettings___ctor(Settings_HumanCustomSkinSettings_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344a0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_BaseCustomSkinSettings_HumanCustomSkinSet_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    Il2CppMethodInitialized_184344a0e = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_1f11be0(pSVar1,true,(MethodInfo *)0x0);
  (__this->fields).GasEnabled = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GasEnabled,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_1f11be0(pSVar1,true,(MethodInfo *)0x0);
  (__this->fields).HookEnabled = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HookEnabled,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_1f11be0(pSVar1,true,(MethodInfo *)0x0);
  (__this->fields).SetSpecificSkinsEnabled = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SetSpecificSkinsEnabled,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_1f11be0(pSVar1,true,(MethodInfo *)0x0);
  (__this->fields).GlobalSkinOverridesEnabled = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GlobalSkinOverridesEnabled,pSVar1);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar2,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).SkinMode = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinMode,pSVar2);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar2,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).SelectedCharacterIndex = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SelectedCharacterIndex,pSVar2);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar2,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).LastGlobalPresetIndex = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).LastGlobalPresetIndex,pSVar2);
  Settings_BaseCustomSkinSettings_object____ctor
            ((Settings_BaseCustomSkinSettings_T__o *)__this,
             (MethodInfo_FF5F20 *)MethodInfo_Settings_BaseCustomSkinSettings_HumanCustomSkinSet_ctor);
  return;
}


