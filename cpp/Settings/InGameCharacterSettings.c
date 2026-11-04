// Type: Settings.InGameCharacterSettings
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Settings/InGameCharacterSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameCharacterSettings.cs
// --------------------------------

// Settings.InGameCharacterSettings$$CopyHumanChoices
// il2cpp: void Settings_InGameCharacterSettings__CopyHumanChoices (Settings_InGameCharacterSettings_o* __this, Settings_InGameCharacterSettings_o* source, const MethodInfo* method);
// 0x181f19580

void Settings_InGameCharacterSettings__CopyHumanChoices
               (Settings_InGameCharacterSettings_o *__this,Settings_InGameCharacterSettings_o *source,
               MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  
  if (Il2CppMethodInitialized_184345443 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184345443 = '\x01';
  }
  if (((source != (Settings_InGameCharacterSettings_o *)0x0) &&
      (pSVar1 = (source->fields).CustomSet, pSVar1 != (Settings_IntSetting_o *)0x0)) &&
     (pSVar2 = (__this->fields).CustomSet, pSVar2 != (Settings_IntSetting_o *)0x0)) {
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar2,(pSVar1->fields)._value,
               (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    pSVar1 = (source->fields).Costume;
    if ((pSVar1 != (Settings_IntSetting_o *)0x0) &&
       (pSVar2 = (__this->fields).Costume, pSVar2 != (Settings_IntSetting_o *)0x0)) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar2,(pSVar1->fields)._value,
                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      pSVar3 = (source->fields).Loadout;
      if ((pSVar3 != (Settings_StringSetting_o *)0x0) &&
         (pSVar4 = (__this->fields).Loadout, pSVar4 != (Settings_StringSetting_o *)0x0)) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)(pSVar3->fields)._value,
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        pSVar3 = (source->fields).Special;
        if ((pSVar3 != (Settings_StringSetting_o *)0x0) &&
           (pSVar4 = (__this->fields).Special, pSVar4 != (Settings_StringSetting_o *)0x0)) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)(pSVar3->fields)._value,
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.InGameCharacterSettings$$.ctor
// il2cpp: void Settings_InGameCharacterSettings___ctor (Settings_InGameCharacterSettings_o* __this, const MethodInfo* method);
// 0x181f19680

void Settings_InGameCharacterSettings___ctor(Settings_InGameCharacterSettings_o *__this,MethodInfo *method)

{
  Settings_IntSetting_c *pSVar1;
  Il2CppObject *pIVar2;
  System_String_o *defaultValue;
  int32_t iVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  
  if (Il2CppMethodInitialized_184345444 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"Blue");
    Il2CppMethodInitialized_184345444 = '\x01';
  }
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar4,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar4->klass;
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  iVar3 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar4,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = iVar3;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).ChooseStatus = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ChooseStatus,pSVar4);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar5->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar5,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar5->fields).MaxLength = 0x7fffffff;
  (__this->fields).CharacterType = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CharacterType,pSVar5);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar5->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar5,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar5->fields).MaxLength = 0x7fffffff;
  (__this->fields).Loadout = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Loadout,pSVar5);
  pIVar2 = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar5->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar5,pIVar2,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar5->fields).MaxLength = 0x7fffffff;
  (__this->fields).Special = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Special,pSVar5);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar4,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar4->klass;
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  iVar3 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar4,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = iVar3;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).CustomSet = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CustomSet,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar4,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = pSVar4->klass;
  (pSVar4->fields).MinValue = -0x80000000;
  (pSVar4->fields).MaxValue = 0x7fffffff;
  iVar3 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)(pSVar4,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (pSVar4->fields).DefaultValue = iVar3;
  (*(pSVar4->klass->vtable)._4_SetDefault.methodPtr)(pSVar4,(pSVar4->klass->vtable)._4_SetDefault.method);
  (__this->fields).Costume = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Costume,pSVar4);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  defaultValue = "Blue";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar5->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)defaultValue,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar5->fields).MaxLength = 0x7fffffff;
  (__this->fields).Team = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Team,pSVar5);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


