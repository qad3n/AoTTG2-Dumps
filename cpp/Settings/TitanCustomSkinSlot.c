// Type: Settings.TitanCustomSkinSlot
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Settings/TitanCustomSkinSlot.cs
// Prior real C# source: none
// --------------------------------

// Settings.TitanCustomSkinSlot$$.ctor
// il2cpp: void Settings_TitanCustomSkinSlot___ctor (Settings_TitanCustomSkinSlot_o* __this, const MethodInfo* method);
// 0x181dcfa90

void Settings_TitanCustomSkinSlot___ctor(Settings_TitanCustomSkinSlot_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  
  if (Il2CppMethodInitialized_184344a13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_184344a13 = '\x01';
  }
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar2,0,0,2,(MethodInfo *)0x0);
  (__this->fields).Target = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Target,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar3,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Body = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Body,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar3,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Head = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Head,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar3,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Eye = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Eye,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar3,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Hair = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Hair,pSVar3);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar2,0,0,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).BodyModel = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).BodyModel,pSVar2);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar2,0,0,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HeadModel = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HeadModel,pSVar2);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar2,0,0,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).EyeModel = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).EyeModel,pSVar2);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar2,0,0,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).HairModel = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HairModel,pSVar2);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


