// Type: Settings.AbilitySettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Settings/AbilitySettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/AbilitySettings.cs
// --------------------------------

// Settings.AbilitySettings$$get_FileName
// il2cpp: System_String_o* Settings_AbilitySettings__get_FileName (Settings_AbilitySettings_o* __this, const MethodInfo* method);
// 0x59d1150

System_String_o *
Settings_AbilitySettings__get_FileName(Settings_AbilitySettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545c75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Ability_001.json");
    Il2CppMethodInitialized_07545c75 = '\x01';
  }
  return "Ability_001.json";
}


// Settings.AbilitySettings$$.ctor
// il2cpp: void Settings_AbilitySettings___ctor (Settings_AbilitySettings_o* __this, const MethodInfo* method);
// 0x59d1180

void Settings_AbilitySettings___ctor(Settings_AbilitySettings_o *__this,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  Settings_ColorSetting_o *__this_01;
  Settings_IntSetting_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_07545c76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    Il2CppMethodInitialized_07545c76 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(__this_00,0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_5a451c0(__this_01,__this_00,0x80,(MethodInfo *)0x0);
  (__this->fields).BombColor = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).BombColor);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar1,6,0,10,(MethodInfo *)0x0);
  (__this->fields).BombRadius = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).BombRadius);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar1,4,0,10,(MethodInfo *)0x0);
  (__this->fields).BombRange = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).BombRange);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar1,6,0,10,(MethodInfo *)0x0);
  (__this->fields).BombSpeed = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).BombSpeed);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(pSVar1,4,0,10,(MethodInfo *)0x0);
  (__this->fields).BombCooldown = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).BombCooldown);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar2,false,(MethodInfo *)0x0);
  (__this->fields).CursorCooldown = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CursorCooldown);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar2,false,(MethodInfo *)0x0);
  (__this->fields).ShowBombColors = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ShowBombColors);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar2,false,(MethodInfo *)0x0);
  (__this->fields).UseOldEffect = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).UseOldEffect);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar2,false,(MethodInfo *)0x0);
  (__this->fields).BombCollision = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).BombCollision);
  Settings_SaveableSettingsContainer___ctor((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


