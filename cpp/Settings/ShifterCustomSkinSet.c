// Type: Settings.ShifterCustomSkinSet
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/ShifterCustomSkinSet.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/ShifterCustomSkinSet.cs
// --------------------------------

// Settings.ShifterCustomSkinSet$$.ctor
// il2cpp: void Settings_ShifterCustomSkinSet___ctor (Settings_ShifterCustomSkinSet_o* __this, const MethodInfo* method);
// 0x181dcef60

void Settings_ShifterCustomSkinSet___ctor(Settings_ShifterCustomSkinSet_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344a0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_184344a0f = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Eren = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Eren,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Annie = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Annie,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Colossal = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Colossal,pSVar2);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


