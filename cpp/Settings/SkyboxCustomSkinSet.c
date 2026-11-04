// Type: Settings.SkyboxCustomSkinSet
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/SkyboxCustomSkinSet.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/SkyboxCustomSkinSet.cs
// --------------------------------

// Settings.SkyboxCustomSkinSet$$.ctor
// il2cpp: void Settings_SkyboxCustomSkinSet___ctor (Settings_SkyboxCustomSkinSet_o* __this, const MethodInfo* method);
// 0x181dcf080

void Settings_SkyboxCustomSkinSet___ctor(Settings_SkyboxCustomSkinSet_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344a10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_184344a10 = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Front = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Front,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Back = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Back,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Left = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Left,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Right = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Right,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Up = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Up,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Down = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Down,pSVar2);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


