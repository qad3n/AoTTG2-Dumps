// Type: Settings.ProfileSettings
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/ProfileSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/ProfileSettings.cs
// --------------------------------

// Settings.ProfileSettings$$get_FileName
// il2cpp: System_String_o* Settings_ProfileSettings__get_FileName (Settings_ProfileSettings_o* __this, const MethodInfo* method);
// 0x181f25090

System_String_o *
Settings_ProfileSettings__get_FileName(Settings_ProfileSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434547c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Profile.json");
    Il2CppMethodInitialized_18434547c = '\x01';
  }
  return "Profile.json";
}


// Settings.ProfileSettings$$.ctor
// il2cpp: void Settings_ProfileSettings___ctor (Settings_ProfileSettings_o* __this, const MethodInfo* method);
// 0x181f245c0

void Settings_ProfileSettings___ctor(Settings_ProfileSettings_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *pSVar3;
  Settings_NameSetting_o *pSVar4;
  System_Guid_o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  Utility_Color255_o *pUVar7;
  Settings_ColorSetting_o *pSVar8;
  bool bVar9;
  int32_t local_res8 [8];
  System_Guid_Fields local_48;
  System_Guid_o local_38;
  
  if (Il2CppMethodInitialized_18434547d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_NameSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"Levi1");
    il2cpp_codegen_initialize_runtime_metadata(&"[]");
    il2cpp_codegen_initialize_runtime_metadata(&"GUEST");
    il2cpp_codegen_initialize_runtime_metadata(&"MainBackground0Texture");
    il2cpp_codegen_initialize_runtime_metadata(&"Holographic");
    Il2CppMethodInitialized_18434547d = '\x01';
  }
  local_res8[0] = 0;
  local_48._a = 0;
  local_48._b = 0;
  local_48._c = 0;
  local_48._d = '\0';
  local_48._e = '\0';
  local_48._f = '\0';
  local_48._g = '\0';
  local_48._h = '\0';
  local_48._i = '\0';
  local_48._j = '\0';
  local_48._k = '\0';
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  pSVar3 = "Levi1";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar2->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)pSVar3,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar2->fields).MaxLength = 100;
  (__this->fields).ProfileIcon = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ProfileIcon,pSVar2);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  pSVar3 = "MainBackground0Texture";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar2->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)pSVar3,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar2->fields).MaxLength = 100;
  (__this->fields).ProfileBanner = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ProfileBanner,pSVar2);
  local_res8[0] = UnityEngine_Random__RandomRangeInt(0,100000,(MethodInfo *)0x0);
  pSVar3 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_1969e50("GUEST",pSVar3,(MethodInfo *)0x0);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_NameSetting);
  bVar9 = Il2CppMethodInitialized_1843454ba == '\0';
  (pSVar4->fields).MaxStrippedLength = 0x7fffffff;
  if (bVar9) {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar4->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)pSVar3,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar4->fields).MaxLength = 200;
  (pSVar4->fields).MaxStrippedLength = 0x1f;
  (__this->fields).Name = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Name,pSVar4);
  pIVar1 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_NameSetting);
  bVar9 = Il2CppMethodInitialized_1843454ba == '\0';
  (pSVar4->fields).MaxStrippedLength = 0x7fffffff;
  if (bVar9) {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar4->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar4,pIVar1,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar4->fields).MaxLength = 200;
  (pSVar4->fields).MaxStrippedLength = 0x1f;
  (__this->fields).Guild = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Guild,pSVar4);
  pIVar1 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar2->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar2,pIVar1,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar2->fields).MaxLength = 0x32;
  (__this->fields).GuildRoleSprite = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GuildRoleSprite,pSVar2);
  pIVar1 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar2->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar2,pIVar1,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar2->fields).MaxLength = 0x100;
  (__this->fields).Social = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Social,pSVar2);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  pSVar3 = "[]";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar2->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)pSVar3,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar2->fields).MaxLength = 0x800;
  (__this->fields).SocialLinksJson = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SocialLinksJson,pSVar2);
  pIVar1 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar2->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar2,pIVar1,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar2->fields).MaxLength = 0x200;
  (__this->fields).About = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).About,pSVar2);
  pIVar1 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar2->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar2,pIVar1,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar2->fields).MaxLength = 0x10000;
  (__this->fields).CharacterInfoJson = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CharacterInfoJson,pSVar2);
  pSVar5 = System_Guid__NewGuid(&local_38,(MethodInfo *)0x0);
  local_48._a = (pSVar5->fields)._a;
  local_48._b = (pSVar5->fields)._b;
  local_48._c = (pSVar5->fields)._c;
  local_48._d = (pSVar5->fields)._d;
  local_48._e = (pSVar5->fields)._e;
  local_48._f = (pSVar5->fields)._f;
  local_48._g = (pSVar5->fields)._g;
  local_48._h = (pSVar5->fields)._h;
  local_48._i = (pSVar5->fields)._i;
  local_48._j = (pSVar5->fields)._j;
  local_48._k = (pSVar5->fields)._k;
  pSVar3 = System_Guid__ToString((System_Guid_o *)&local_48,(MethodInfo *)0x0);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar2->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)pSVar3,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar2->fields).MaxLength = 200;
  (__this->fields).ID = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ID,pSVar2);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  pSVar3 = "Normal";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar2->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)pSVar3,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar2->fields).MaxLength = 0x20;
  (__this->fields).NameFont = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).NameFont,pSVar2);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  pSVar3 = "Normal";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar2->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)pSVar3,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar2->fields).MaxLength = 0x20;
  (__this->fields).GuildFont = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GuildFont,pSVar2);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar6,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).NameEffectEnabled = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).NameEffectEnabled,pSVar6);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  pSVar3 = "Holographic";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar2->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)pSVar3,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar2->fields).MaxLength = 0x32;
  (__this->fields).NameEffect = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).NameEffect,pSVar2);
  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar7,0xff,0x40,0x40,0xff,
             (MethodInfo *)0x0);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar8,pUVar7,0,(MethodInfo *)0x0);
  (__this->fields).NameEffectColorA = pSVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields).NameEffectColorA,pSVar8);
  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar7,0xff,0xe6,0x40,0xff,
             (MethodInfo *)0x0);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar8,pUVar7,0,(MethodInfo *)0x0);
  (__this->fields).NameEffectColorB = pSVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields).NameEffectColorB,pSVar8);
  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar7,0x40,0xff,0xff,0xff,
             (MethodInfo *)0x0);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar8,pUVar7,0,(MethodInfo *)0x0);
  (__this->fields).NameEffectColorC = pSVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields).NameEffectColorC,pSVar8);
  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar7,0xff,0x40,0xff,0xff,
             (MethodInfo *)0x0);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar8,pUVar7,0,(MethodInfo *)0x0);
  (__this->fields).NameEffectColorD = pSVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields).NameEffectColorD,pSVar8);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar6,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).GuildEffectEnabled = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GuildEffectEnabled,pSVar6);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  pSVar3 = "Holographic";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar2->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)pSVar3,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar2->fields).MaxLength = 0x32;
  (__this->fields).GuildEffect = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GuildEffect,pSVar2);
  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar7,0xff,0x40,0x40,0xff,
             (MethodInfo *)0x0);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar8,pUVar7,0,(MethodInfo *)0x0);
  (__this->fields).GuildEffectColorA = pSVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GuildEffectColorA,pSVar8);
  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar7,0xff,0xe6,0x40,0xff,
             (MethodInfo *)0x0);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar8,pUVar7,0,(MethodInfo *)0x0);
  (__this->fields).GuildEffectColorB = pSVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GuildEffectColorB,pSVar8);
  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar7,0x40,0xff,0xff,0xff,
             (MethodInfo *)0x0);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar8,pUVar7,0,(MethodInfo *)0x0);
  (__this->fields).GuildEffectColorC = pSVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GuildEffectColorC,pSVar8);
  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar7,0xff,0x40,0xff,0xff,
             (MethodInfo *)0x0);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar8,pUVar7,0,(MethodInfo *)0x0);
  (__this->fields).GuildEffectColorD = pSVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GuildEffectColorD,pSVar8);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


