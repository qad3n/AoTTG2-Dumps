// Type: Settings.InGameCharacterSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Settings/InGameCharacterSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameCharacterSettings.cs
// --------------------------------

// Settings.InGameCharacterSettings$$CopyHumanChoices
// il2cpp: void Settings_InGameCharacterSettings__CopyHumanChoices (Settings_InGameCharacterSettings_o* __this, Settings_InGameCharacterSettings_o* source, const MethodInfo* method);
// 0x5b46af0

void Settings_InGameCharacterSettings__CopyHumanChoices
               (Settings_InGameCharacterSettings_o *__this,Settings_InGameCharacterSettings_o *source,
               MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  
  if (Il2CppMethodInitialized_0754728b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_0754728b = '\x01';
  }
  if (((source != (Settings_InGameCharacterSettings_o *)0x0) &&
      (pSVar1 = (source->fields).CustomSet, pSVar1 != (Settings_IntSetting_o *)0x0)) &&
     (pSVar2 = (__this->fields).CustomSet, pSVar2 != (Settings_IntSetting_o *)0x0)) {
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar2,(pSVar1->fields)._value,
               (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    pSVar1 = (source->fields).Costume;
    if ((pSVar1 != (Settings_IntSetting_o *)0x0) &&
       (pSVar2 = (__this->fields).Costume, pSVar2 != (Settings_IntSetting_o *)0x0)) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar2,(pSVar1->fields)._value,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      pSVar3 = (source->fields).Loadout;
      if ((pSVar3 != (Settings_StringSetting_o *)0x0) &&
         (pSVar4 = (__this->fields).Loadout, pSVar4 != (Settings_StringSetting_o *)0x0)) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)(pSVar3->fields)._value,
                   (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        pSVar3 = (source->fields).Special;
        if ((pSVar3 != (Settings_StringSetting_o *)0x0) &&
           (pSVar4 = (__this->fields).Special, pSVar4 != (Settings_StringSetting_o *)0x0)) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)(pSVar3->fields)._value,
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.InGameCharacterSettings$$.ctor
// il2cpp: void Settings_InGameCharacterSettings___ctor (Settings_InGameCharacterSettings_o* __this, const MethodInfo* method);
// 0x5b46be0

void Settings_InGameCharacterSettings___ctor(Settings_InGameCharacterSettings_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t iVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754728c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"Blue");
    Il2CppMethodInitialized_0754728c = '\x01';
  }
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar3,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).ChooseStatus = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ChooseStatus);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).CharacterType = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CharacterType);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Loadout = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Loadout);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar4,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Special = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Special);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar3,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).CustomSet = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CustomSet);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)pSVar3,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (pSVar3->fields).MinValue = -0x80000000;
  (pSVar3->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = iVar2;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).Costume = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Costume);
  method_00 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730
            ((Settings_StringSetting_o *)method_00,"Blue",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Team = (Settings_StringSetting_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Team);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,method_00);
  return;
}


