// Type: Settings.ProfileSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/ProfileSettings.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/ProfileSettings.cs  [prior source available (delta unverified)]
// --------------------------------

// Settings.ProfileSettings$$get_FileName
// il2cpp: System_String_o* Settings_ProfileSettings__get_FileName (Settings_ProfileSettings_o* __this, const MethodInfo* method);
// 0x3f0a6f0

System_String_o *
Settings_ProfileSettings__get_FileName(Settings_ProfileSettings_o *__this,MethodInfo *method)

{
  if (DAT_05703c62 == '\0') {
    il2cpp_init_method_metadata(&"Profile.json");
    DAT_05703c62 = '\x01';
  }
  return "Profile.json";
}


// Settings.ProfileSettings$$.ctor
// il2cpp: void Settings_ProfileSettings___ctor (Settings_ProfileSettings_o* __this, const MethodInfo* method);
// 0x3f0a720

void Settings_ProfileSettings___ctor(Settings_ProfileSettings_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *pSVar2;
  Settings_NameSetting_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Utility_Color255_o *pUVar5;
  Settings_ColorSetting_o *pSVar6;
  MethodInfo *method_00;
  Il2CppObject *pIVar7;
  System_Guid_o __this_00;
  int32_t local_4c;
  System_Guid_Fields local_48;
  
  if (DAT_05703c63 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&TypeInfo_Color255);
    il2cpp_init_method_metadata(&TypeInfo_ColorSetting);
    il2cpp_init_method_metadata(&TypeInfo_NameSetting);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&"Normal");
    il2cpp_init_method_metadata(&"Levi1");
    il2cpp_init_method_metadata(&"[]");
    il2cpp_init_method_metadata(&"GUEST");
    il2cpp_init_method_metadata(&"MainBackground0Texture");
    il2cpp_init_method_metadata(&"Holographic");
    DAT_05703c63 = '\x01';
  }
  local_4c = 0;
  local_48 = (System_Guid_Fields)ZEXT816(0);
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  pIVar7 = "Levi1";
  if (DAT_05703c99 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_String);
    DAT_05703c99 = '\x01';
  }
  (pSVar1->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)pSVar1,pIVar7,MethodInfo_TypedSetting_1_System_String);
  (pSVar1->fields).MaxLength = 100;
  (__this->fields).ProfileIcon = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).ProfileIcon,pSVar1);
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  pIVar7 = "MainBackground0Texture";
  if (DAT_05703c99 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_String);
    DAT_05703c99 = '\x01';
  }
  (pSVar1->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)pSVar1,pIVar7,MethodInfo_TypedSetting_1_System_String);
  (pSVar1->fields).MaxLength = 100;
  (__this->fields).ProfileBanner = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).ProfileBanner,pSVar1);
  local_4c = UnityEngine_Random__Range(0,100000,(MethodInfo *)0x0);
  pSVar2 = System_Int32__ToString((int32_t)&local_4c,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat("GUEST",pSVar2,(MethodInfo *)0x0);
  pSVar3 = (Settings_NameSetting_o *)il2cpp_runtime_glue(TypeInfo_NameSetting);
  (pSVar3->fields).MaxStrippedLength = 0x7fffffff;
  if (DAT_05703c99 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_String);
    DAT_05703c99 = '\x01';
  }
  (pSVar3->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting<object>___ctor
            ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)pSVar2,MethodInfo_TypedSetting_1_System_String);
  (pSVar3->fields).MaxLength = 200;
  (pSVar3->fields).MaxStrippedLength = 0x1f;
  (__this->fields).Name = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).Name,pSVar3);
  pIVar7 = (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar3 = (Settings_NameSetting_o *)il2cpp_runtime_glue(TypeInfo_NameSetting);
  (pSVar3->fields).MaxStrippedLength = 0x7fffffff;
  if (DAT_05703c99 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_String);
    DAT_05703c99 = '\x01';
  }
  (pSVar3->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)pSVar3,pIVar7,MethodInfo_TypedSetting_1_System_String);
  (pSVar3->fields).MaxLength = 200;
  (pSVar3->fields).MaxStrippedLength = 0x1f;
  (__this->fields).Guild = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).Guild,pSVar3);
  pIVar7 = (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  if (DAT_05703c99 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_String);
    DAT_05703c99 = '\x01';
  }
  (pSVar1->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)pSVar1,pIVar7,MethodInfo_TypedSetting_1_System_String);
  (pSVar1->fields).MaxLength = 0x32;
  (__this->fields).GuildRoleSprite = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).GuildRoleSprite,pSVar1);
  pIVar7 = (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  if (DAT_05703c99 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_String);
    DAT_05703c99 = '\x01';
  }
  (pSVar1->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)pSVar1,pIVar7,MethodInfo_TypedSetting_1_System_String);
  (pSVar1->fields).MaxLength = 0x100;
  (__this->fields).Social = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).Social,pSVar1);
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  pIVar7 = "[]";
  if (DAT_05703c99 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_String);
    DAT_05703c99 = '\x01';
  }
  (pSVar1->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)pSVar1,pIVar7,MethodInfo_TypedSetting_1_System_String);
  (pSVar1->fields).MaxLength = 0x800;
  (__this->fields).SocialLinksJson = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).SocialLinksJson,pSVar1);
  pIVar7 = (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  if (DAT_05703c99 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_String);
    DAT_05703c99 = '\x01';
  }
  (pSVar1->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)pSVar1,pIVar7,MethodInfo_TypedSetting_1_System_String);
  (pSVar1->fields).MaxLength = 0x200;
  (__this->fields).About = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).About,pSVar1);
  pIVar7 = (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  if (DAT_05703c99 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_String);
    DAT_05703c99 = '\x01';
  }
  (pSVar1->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)pSVar1,pIVar7,MethodInfo_TypedSetting_1_System_String);
  (pSVar1->fields).MaxLength = 0x10000;
  (__this->fields).CharacterInfoJson = pSVar1;
  il2cpp_runtime_glue();
  local_48 = (System_Guid_Fields)System_Guid__NewGuid((MethodInfo *)0x0);
  __this_00.fields._d = '\0';
  __this_00.fields._e = '\0';
  __this_00.fields._f = '\0';
  __this_00.fields._g = '\0';
  __this_00.fields._h = '\0';
  __this_00.fields._i = '\0';
  __this_00.fields._j = '\0';
  __this_00.fields._k = '\0';
  __this_00.fields._0_8_ = &local_48;
  pSVar2 = System_Guid__ToString(__this_00,local_48._8_8_);
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  if (DAT_05703c99 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_String);
    DAT_05703c99 = '\x01';
  }
  (pSVar1->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting<object>___ctor
            ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)pSVar2,MethodInfo_TypedSetting_1_System_String);
  (pSVar1->fields).MaxLength = 200;
  (__this->fields).ID = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).ID,pSVar1);
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  pIVar7 = "Normal";
  if (DAT_05703c99 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_String);
    DAT_05703c99 = '\x01';
  }
  (pSVar1->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)pSVar1,pIVar7,MethodInfo_TypedSetting_1_System_String);
  (pSVar1->fields).MaxLength = 0x20;
  (__this->fields).NameFont = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).NameFont,pSVar1);
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  pIVar7 = "Normal";
  if (DAT_05703c99 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_String);
    DAT_05703c99 = '\x01';
  }
  (pSVar1->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)pSVar1,pIVar7,MethodInfo_TypedSetting_1_System_String);
  (pSVar1->fields).MaxLength = 0x20;
  (__this->fields).GuildFont = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).GuildFont);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  if (DAT_05703c6e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_Boolean);
    DAT_05703c6e = '\x01';
  }
  Settings_TypedSetting<bool>___ctor((Settings_TypedSetting_bool__o *)pSVar4,0,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).NameEffectEnabled = pSVar4;
  il2cpp_runtime_glue(&(__this->fields).NameEffectEnabled,pSVar4);
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  pIVar7 = "Holographic";
  if (DAT_05703c99 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_String);
    DAT_05703c99 = '\x01';
  }
  (pSVar1->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)pSVar1,pIVar7,MethodInfo_TypedSetting_1_System_String);
  (pSVar1->fields).MaxLength = 0x32;
  (__this->fields).NameEffect = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).NameEffect,pSVar1);
  pUVar5 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar5,0xff,0x40,0x40,0xff,(MethodInfo *)0x0);
  pSVar6 = (Settings_ColorSetting_o *)il2cpp_runtime_glue(TypeInfo_ColorSetting);
  if (DAT_05703c72 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_Utility_Color255);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05703c72 = '\x01';
  }
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)pSVar6,MethodInfo_TypedSetting_1_Utility_Color255);
  (pSVar6->fields).MinAlpha = 0;
  pUVar5 = (Utility_Color255_o *)
           (*(pSVar6->klass->vtable)._10_SanitizeValue.methodPtr)
                     (pSVar6,pUVar5,(pSVar6->klass->vtable)._10_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = pUVar5;
  il2cpp_runtime_glue(&pSVar6->fields,pUVar5);
  Settings_TypedSetting<object>__set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar6->fields).DefaultValue,
             MethodInfo_Void_set_Value);
  (__this->fields).NameEffectColorA = pSVar6;
  il2cpp_runtime_glue(&(__this->fields).NameEffectColorA,pSVar6);
  pUVar5 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar5,0xff,0xe6,0x40,0xff,(MethodInfo *)0x0);
  pSVar6 = (Settings_ColorSetting_o *)il2cpp_runtime_glue(TypeInfo_ColorSetting);
  if (DAT_05703c72 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_Utility_Color255);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05703c72 = '\x01';
  }
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)pSVar6,MethodInfo_TypedSetting_1_Utility_Color255);
  (pSVar6->fields).MinAlpha = 0;
  pUVar5 = (Utility_Color255_o *)
           (*(pSVar6->klass->vtable)._10_SanitizeValue.methodPtr)
                     (pSVar6,pUVar5,(pSVar6->klass->vtable)._10_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = pUVar5;
  il2cpp_runtime_glue(&pSVar6->fields,pUVar5);
  Settings_TypedSetting<object>__set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar6->fields).DefaultValue,
             MethodInfo_Void_set_Value);
  (__this->fields).NameEffectColorB = pSVar6;
  il2cpp_runtime_glue(&(__this->fields).NameEffectColorB,pSVar6);
  pUVar5 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar5,0x40,0xff,0xff,0xff,(MethodInfo *)0x0);
  pSVar6 = (Settings_ColorSetting_o *)il2cpp_runtime_glue(TypeInfo_ColorSetting);
  if (DAT_05703c72 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_Utility_Color255);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05703c72 = '\x01';
  }
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)pSVar6,MethodInfo_TypedSetting_1_Utility_Color255);
  (pSVar6->fields).MinAlpha = 0;
  pUVar5 = (Utility_Color255_o *)
           (*(pSVar6->klass->vtable)._10_SanitizeValue.methodPtr)
                     (pSVar6,pUVar5,(pSVar6->klass->vtable)._10_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = pUVar5;
  il2cpp_runtime_glue(&pSVar6->fields,pUVar5);
  Settings_TypedSetting<object>__set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar6->fields).DefaultValue,
             MethodInfo_Void_set_Value);
  (__this->fields).NameEffectColorC = pSVar6;
  il2cpp_runtime_glue(&(__this->fields).NameEffectColorC,pSVar6);
  pUVar5 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar5,0xff,0x40,0xff,0xff,(MethodInfo *)0x0);
  pSVar6 = (Settings_ColorSetting_o *)il2cpp_runtime_glue(TypeInfo_ColorSetting);
  if (DAT_05703c72 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_Utility_Color255);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05703c72 = '\x01';
  }
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)pSVar6,MethodInfo_TypedSetting_1_Utility_Color255);
  (pSVar6->fields).MinAlpha = 0;
  pUVar5 = (Utility_Color255_o *)
           (*(pSVar6->klass->vtable)._10_SanitizeValue.methodPtr)
                     (pSVar6,pUVar5,(pSVar6->klass->vtable)._10_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = pUVar5;
  il2cpp_runtime_glue(&pSVar6->fields,pUVar5);
  Settings_TypedSetting<object>__set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar6->fields).DefaultValue,
             MethodInfo_Void_set_Value);
  (__this->fields).NameEffectColorD = pSVar6;
  il2cpp_runtime_glue(&(__this->fields).NameEffectColorD);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  if (DAT_05703c6e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_Boolean);
    DAT_05703c6e = '\x01';
  }
  Settings_TypedSetting<bool>___ctor((Settings_TypedSetting_bool__o *)pSVar4,0,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).GuildEffectEnabled = pSVar4;
  il2cpp_runtime_glue(&(__this->fields).GuildEffectEnabled,pSVar4);
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  pIVar7 = "Holographic";
  if (DAT_05703c99 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_String);
    DAT_05703c99 = '\x01';
  }
  (pSVar1->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)pSVar1,pIVar7,MethodInfo_TypedSetting_1_System_String);
  (pSVar1->fields).MaxLength = 0x32;
  (__this->fields).GuildEffect = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).GuildEffect,pSVar1);
  pUVar5 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar5,0xff,0x40,0x40,0xff,(MethodInfo *)0x0);
  pSVar6 = (Settings_ColorSetting_o *)il2cpp_runtime_glue(TypeInfo_ColorSetting);
  if (DAT_05703c72 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_Utility_Color255);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05703c72 = '\x01';
  }
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)pSVar6,MethodInfo_TypedSetting_1_Utility_Color255);
  (pSVar6->fields).MinAlpha = 0;
  pUVar5 = (Utility_Color255_o *)
           (*(pSVar6->klass->vtable)._10_SanitizeValue.methodPtr)
                     (pSVar6,pUVar5,(pSVar6->klass->vtable)._10_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = pUVar5;
  il2cpp_runtime_glue(&pSVar6->fields,pUVar5);
  Settings_TypedSetting<object>__set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar6->fields).DefaultValue,
             MethodInfo_Void_set_Value);
  (__this->fields).GuildEffectColorA = pSVar6;
  il2cpp_runtime_glue(&(__this->fields).GuildEffectColorA,pSVar6);
  pUVar5 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar5,0xff,0xe6,0x40,0xff,(MethodInfo *)0x0);
  pSVar6 = (Settings_ColorSetting_o *)il2cpp_runtime_glue(TypeInfo_ColorSetting);
  if (DAT_05703c72 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_Utility_Color255);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05703c72 = '\x01';
  }
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)pSVar6,MethodInfo_TypedSetting_1_Utility_Color255);
  (pSVar6->fields).MinAlpha = 0;
  pUVar5 = (Utility_Color255_o *)
           (*(pSVar6->klass->vtable)._10_SanitizeValue.methodPtr)
                     (pSVar6,pUVar5,(pSVar6->klass->vtable)._10_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = pUVar5;
  il2cpp_runtime_glue(&pSVar6->fields,pUVar5);
  Settings_TypedSetting<object>__set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar6->fields).DefaultValue,
             MethodInfo_Void_set_Value);
  (__this->fields).GuildEffectColorB = pSVar6;
  il2cpp_runtime_glue(&(__this->fields).GuildEffectColorB,pSVar6);
  pUVar5 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar5,0x40,0xff,0xff,0xff,(MethodInfo *)0x0);
  pSVar6 = (Settings_ColorSetting_o *)il2cpp_runtime_glue(TypeInfo_ColorSetting);
  if (DAT_05703c72 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_Utility_Color255);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05703c72 = '\x01';
  }
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)pSVar6,MethodInfo_TypedSetting_1_Utility_Color255);
  (pSVar6->fields).MinAlpha = 0;
  pUVar5 = (Utility_Color255_o *)
           (*(pSVar6->klass->vtable)._10_SanitizeValue.methodPtr)
                     (pSVar6,pUVar5,(pSVar6->klass->vtable)._10_SanitizeValue.method);
  (pSVar6->fields).DefaultValue = pUVar5;
  il2cpp_runtime_glue(&pSVar6->fields,pUVar5);
  Settings_TypedSetting<object>__set_Value
            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)(pSVar6->fields).DefaultValue,
             MethodInfo_Void_set_Value);
  (__this->fields).GuildEffectColorC = pSVar6;
  il2cpp_runtime_glue(&(__this->fields).GuildEffectColorC,pSVar6);
  pUVar5 = (Utility_Color255_o *)il2cpp_runtime_glue(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar5,0xff,0x40,0xff,0xff,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_ColorSetting);
  if (DAT_05703c72 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_Utility_Color255);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05703c72 = '\x01';
  }
  Settings_TypedSetting<object>___ctor((Settings_TypedSetting_T__o *)method_00,MethodInfo_TypedSetting_1_Utility_Color255);
  *(undefined4 *)&method_00->klass = 0;
  pIVar7 = (Il2CppObject *)
           (*(((Settings_TypedSetting_T__c *)method_00->methodPointer)->vtable)._10_SanitizeValue.
             methodPtr)(method_00,pUVar5,
                        (((Settings_TypedSetting_T__c *)method_00->methodPointer)->vtable).
                        _10_SanitizeValue.method);
  ((Settings_TypedSetting_T__Fields *)&method_00->invoker_method)->DefaultValue = pIVar7;
  il2cpp_runtime_glue((Settings_TypedSetting_T__Fields *)&method_00->invoker_method,pIVar7);
  Settings_TypedSetting<object>__set_Value
            ((Settings_TypedSetting_T__o *)method_00,
             ((Settings_TypedSetting_T__Fields *)&method_00->invoker_method)->DefaultValue,
             MethodInfo_Void_set_Value);
  (__this->fields).GuildEffectColorD = (Settings_ColorSetting_o *)method_00;
  il2cpp_runtime_glue(&(__this->fields).GuildEffectColorD);
  Settings_BaseSettingsContainer___ctor((Settings_SaveableSettingsContainer_o *)__this,method_00);
  return;
}


