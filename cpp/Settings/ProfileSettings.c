// Type: Settings.ProfileSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/ProfileSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/ProfileSettings.cs
// --------------------------------

// Settings.ProfileSettings$$get_FileName
// il2cpp: System_String_o* Settings_ProfileSettings__get_FileName (Settings_ProfileSettings_o* __this, const MethodInfo* method);
// 0x5b53df0

System_String_o *
Settings_ProfileSettings__get_FileName(Settings_ProfileSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075472c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Profile.json");
    Il2CppMethodInitialized_075472c8 = '\x01';
  }
  return "Profile.json";
}


// Settings.ProfileSettings$$.ctor
// il2cpp: void Settings_ProfileSettings___ctor (Settings_ProfileSettings_o* __this, const MethodInfo* method);
// 0x5b53e20

void Settings_ProfileSettings___ctor(Settings_UnsavedProfileSettings_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *pSVar2;
  Settings_NameSetting_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Utility_Color255_o *pUVar5;
  Settings_ColorSetting_o *pSVar6;
  int32_t local_44;
  System_Guid_o local_40;
  
  if (Il2CppMethodInitialized_075472c9 == '\0') {
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
    Il2CppMethodInitialized_075472c9 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar1,"Levi1",100,(MethodInfo *)0x0);
  (__this->fields).ProfileIcon = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ProfileIcon);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar1,"MainBackground0Texture",100,(MethodInfo *)0x0);
  (__this->fields).ProfileBanner = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ProfileBanner);
  local_44 = UnityEngine_Random__Range_690e2b0(0,100000,(MethodInfo *)0x0);
  pSVar2 = System_Int32__ToString(&local_44,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_52f0320("GUEST",pSVar2,(MethodInfo *)0x0);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_NameSetting);
  Settings_NameSetting___ctor_5b7b780(pSVar3,pSVar2,200,0x1f,(MethodInfo *)0x0);
  (__this->fields).Name = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Name);
  pSVar2 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_NameSetting);
  Settings_NameSetting___ctor_5b7b780(pSVar3,pSVar2,200,0x1f,(MethodInfo *)0x0);
  (__this->fields).Guild = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Guild);
  pSVar2 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar1,pSVar2,0x32,(MethodInfo *)0x0);
  (__this->fields).GuildRoleSprite = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GuildRoleSprite);
  pSVar2 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar1,pSVar2,0x100,(MethodInfo *)0x0);
  (__this->fields).Social = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Social);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar1,"[]",0x800,(MethodInfo *)0x0);
  (__this->fields).SocialLinksJson = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SocialLinksJson);
  pSVar2 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar1,pSVar2,0x200,(MethodInfo *)0x0);
  (__this->fields).About = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).About);
  pSVar2 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar1,pSVar2,0x10000,(MethodInfo *)0x0);
  (__this->fields).CharacterInfoJson = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CharacterInfoJson);
  local_40 = System_Guid__NewGuid((MethodInfo *)0x0);
  pSVar2 = System_Guid__ToString(&local_40,(MethodInfo *)0x0);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar1,pSVar2,200,(MethodInfo *)0x0);
  (__this->fields).ID = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ID);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar1,"Normal",0x20,(MethodInfo *)0x0);
  (__this->fields).NameFont = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).NameFont);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar1,"Normal",0x20,(MethodInfo *)0x0);
  (__this->fields).GuildFont = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GuildFont);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar4,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).NameEffectEnabled = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).NameEffectEnabled);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar1,"Holographic",0x32,(MethodInfo *)0x0);
  (__this->fields).NameEffect = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).NameEffect);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar5,0xff,0x40,0x40,0xff,(MethodInfo *)0x0);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  if (Il2CppMethodInitialized_075472da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_075472da = '\x01';
  }
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_42DA2B0 *)MethodInfo_Settings_TypedSetting_Color255_ctor);
  (pSVar6->fields).MinAlpha = 0;
  pUVar5 = (*(pSVar6->klass->vtable)._11_SanitizeValue.methodPtr)
                     (pSVar6,pUVar5,(pSVar6->klass->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = pUVar5;
  Il2CppCodeGenWriteBarrier(&(pSVar6->fields).DefaultValue);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar6->fields).DefaultValue,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  (__this->fields).NameEffectColorA = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).NameEffectColorA);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar5,0xff,0xe6,0x40,0xff,(MethodInfo *)0x0);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  if (Il2CppMethodInitialized_075472da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_075472da = '\x01';
  }
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_42DA2B0 *)MethodInfo_Settings_TypedSetting_Color255_ctor);
  (pSVar6->fields).MinAlpha = 0;
  pUVar5 = (*(pSVar6->klass->vtable)._11_SanitizeValue.methodPtr)
                     (pSVar6,pUVar5,(pSVar6->klass->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = pUVar5;
  Il2CppCodeGenWriteBarrier(&(pSVar6->fields).DefaultValue);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar6->fields).DefaultValue,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  (__this->fields).NameEffectColorB = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).NameEffectColorB);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar5,0x40,0xff,0xff,0xff,(MethodInfo *)0x0);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  if (Il2CppMethodInitialized_075472da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_075472da = '\x01';
  }
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_42DA2B0 *)MethodInfo_Settings_TypedSetting_Color255_ctor);
  (pSVar6->fields).MinAlpha = 0;
  pUVar5 = (*(pSVar6->klass->vtable)._11_SanitizeValue.methodPtr)
                     (pSVar6,pUVar5,(pSVar6->klass->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = pUVar5;
  Il2CppCodeGenWriteBarrier(&(pSVar6->fields).DefaultValue);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar6->fields).DefaultValue,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  (__this->fields).NameEffectColorC = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).NameEffectColorC);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar5,0xff,0x40,0xff,0xff,(MethodInfo *)0x0);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  if (Il2CppMethodInitialized_075472da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_075472da = '\x01';
  }
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_42DA2B0 *)MethodInfo_Settings_TypedSetting_Color255_ctor);
  (pSVar6->fields).MinAlpha = 0;
  pUVar5 = (*(pSVar6->klass->vtable)._11_SanitizeValue.methodPtr)
                     (pSVar6,pUVar5,(pSVar6->klass->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = pUVar5;
  Il2CppCodeGenWriteBarrier(&(pSVar6->fields).DefaultValue);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar6->fields).DefaultValue,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  (__this->fields).NameEffectColorD = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).NameEffectColorD);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar4,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).GuildEffectEnabled = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GuildEffectEnabled);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar1,"Holographic",0x32,(MethodInfo *)0x0);
  (__this->fields).GuildEffect = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GuildEffect);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar5,0xff,0x40,0x40,0xff,(MethodInfo *)0x0);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  if (Il2CppMethodInitialized_075472da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_075472da = '\x01';
  }
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_42DA2B0 *)MethodInfo_Settings_TypedSetting_Color255_ctor);
  (pSVar6->fields).MinAlpha = 0;
  pUVar5 = (*(pSVar6->klass->vtable)._11_SanitizeValue.methodPtr)
                     (pSVar6,pUVar5,(pSVar6->klass->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = pUVar5;
  Il2CppCodeGenWriteBarrier(&(pSVar6->fields).DefaultValue);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar6->fields).DefaultValue,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  (__this->fields).GuildEffectColorA = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GuildEffectColorA);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar5,0xff,0xe6,0x40,0xff,(MethodInfo *)0x0);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  if (Il2CppMethodInitialized_075472da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_075472da = '\x01';
  }
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_42DA2B0 *)MethodInfo_Settings_TypedSetting_Color255_ctor);
  (pSVar6->fields).MinAlpha = 0;
  pUVar5 = (*(pSVar6->klass->vtable)._11_SanitizeValue.methodPtr)
                     (pSVar6,pUVar5,(pSVar6->klass->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = pUVar5;
  Il2CppCodeGenWriteBarrier(&(pSVar6->fields).DefaultValue);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar6->fields).DefaultValue,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  (__this->fields).GuildEffectColorB = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GuildEffectColorB);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar5,0x40,0xff,0xff,0xff,(MethodInfo *)0x0);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  if (Il2CppMethodInitialized_075472da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_075472da = '\x01';
  }
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_42DA2B0 *)MethodInfo_Settings_TypedSetting_Color255_ctor);
  (pSVar6->fields).MinAlpha = 0;
  pUVar5 = (*(pSVar6->klass->vtable)._11_SanitizeValue.methodPtr)
                     (pSVar6,pUVar5,(pSVar6->klass->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = pUVar5;
  Il2CppCodeGenWriteBarrier(&(pSVar6->fields).DefaultValue);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar6->fields).DefaultValue,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  (__this->fields).GuildEffectColorC = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GuildEffectColorC);
  pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar5,0xff,0x40,0xff,0xff,(MethodInfo *)0x0);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  if (Il2CppMethodInitialized_075472da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_075472da = '\x01';
  }
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)pSVar6,
             (MethodInfo_42DA2B0 *)MethodInfo_Settings_TypedSetting_Color255_ctor);
  (pSVar6->fields).MinAlpha = 0;
  pUVar5 = (*(pSVar6->klass->vtable)._11_SanitizeValue.methodPtr)
                     (pSVar6,pUVar5,(pSVar6->klass->vtable)._11_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = pUVar5;
  Il2CppCodeGenWriteBarrier(&(pSVar6->fields).DefaultValue);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar6->fields).DefaultValue,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  (__this->fields).GuildEffectColorD = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GuildEffectColorD);
  Settings_SaveableSettingsContainer___ctor((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


