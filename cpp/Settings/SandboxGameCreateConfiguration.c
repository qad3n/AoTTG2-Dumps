// Type: Settings.SandboxGameCreateConfiguration
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Settings/SandboxGameCreateConfiguration.cs
// Prior real C# source: none
// --------------------------------

// Settings.SandboxGameCreateConfiguration.<>c$$.cctor
// il2cpp: void Settings_SandboxGameCreateConfiguration___c___cctor (const MethodInfo* method);
// 0x5b40030

void Settings_SandboxGameCreateConfiguration___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_0754726f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SandboxGameCreateConfiguration_c);
    Il2CppMethodInitialized_0754726f = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_SandboxGameCreateConfiguration_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Settings_SandboxGameCreateConfiguration_c->static_fields->__9 =
       (Settings_SandboxGameCreateConfiguration___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_SandboxGameCreateConfiguration_c->static_fields->__9);
  return;
}


// Settings.SandboxGameCreateConfiguration.<>c$$.ctor
// il2cpp: void Settings_SandboxGameCreateConfiguration___c___ctor (Settings_SandboxGameCreateConfiguration___c_o* __this, const MethodInfo* method);
// 0x5b400a0

void Settings_SandboxGameCreateConfiguration___c___ctor
               (Settings_SandboxGameCreateConfiguration___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.SandboxGameCreateConfiguration.<>c$$<GetGameModes>b__18_0
// il2cpp: bool Settings_SandboxGameCreateConfiguration___c___GetGameModes_b__18_0 (Settings_SandboxGameCreateConfiguration___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5b400b0

bool Settings_SandboxGameCreateConfiguration___c___GetGameModes_b__18_0
               (Settings_SandboxGameCreateConfiguration___c_o *__this,System_String_o *value,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  return !bVar1;
}


// Settings.SandboxGameCreateConfiguration.<>c$$<SyncAddonSettings>b__25_0
// il2cpp: bool Settings_SandboxGameCreateConfiguration___c___SyncAddonSettings_b__25_0 (Settings_SandboxGameCreateConfiguration___c_o* __this, Settings_StringSetting_o* item, const MethodInfo* method);
// 0x5b400c0

bool Settings_SandboxGameCreateConfiguration___c___SyncAddonSettings_b__25_0
               (Settings_SandboxGameCreateConfiguration___c_o *__this,Settings_StringSetting_o *item,
               MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547270 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07547270 = '\x01';
  }
  if (item == (Settings_StringSetting_o *)0x0) {
    return false;
  }
  bVar1 = System_String__IsNullOrWhiteSpace((item->fields)._value,(MethodInfo *)0x0);
  return !bVar1;
}


// Settings.SandboxGameCreateConfiguration.<>c$$<SyncAddonSettings>b__25_1
// il2cpp: System_String_o* Settings_SandboxGameCreateConfiguration___c___SyncAddonSettings_b__25_1 (Settings_SandboxGameCreateConfiguration___c_o* __this, Settings_StringSetting_o* item, const MethodInfo* method);
// 0x5b40100

System_String_o *
Settings_SandboxGameCreateConfiguration___c___SyncAddonSettings_b__25_1
          (Settings_SandboxGameCreateConfiguration___c_o *__this,Settings_StringSetting_o *item,
          MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547271 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07547271 = '\x01';
  }
  if (item == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (item->fields)._value;
}


// Settings.SandboxGameCreateConfiguration.<>c$$<SyncAddonSettings>b__25_2
// il2cpp: System_String_o* Settings_SandboxGameCreateConfiguration___c___SyncAddonSettings_b__25_2 (Settings_SandboxGameCreateConfiguration___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5b40130

System_String_o *
Settings_SandboxGameCreateConfiguration___c___SyncAddonSettings_b__25_2
          (Settings_SandboxGameCreateConfiguration___c_o *__this,System_String_o *value,MethodInfo *method)

{
  return value;
}


// Settings.SandboxGameCreateConfiguration.<>c$$<SafeOptions>b__31_0
// il2cpp: bool Settings_SandboxGameCreateConfiguration___c___SafeOptions_b__31_0 (Settings_SandboxGameCreateConfiguration___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5b40140

bool Settings_SandboxGameCreateConfiguration___c___SafeOptions_b__31_0
               (Settings_SandboxGameCreateConfiguration___c_o *__this,System_String_o *value,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  return !bVar1;
}


// Settings.SandboxGameCreateConfiguration.<>c__DisplayClass16_0$$.ctor
// il2cpp: void Settings_SandboxGameCreateConfiguration___c__DisplayClass16_0___ctor (Settings_SandboxGameCreateConfiguration___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x5b3d280

void Settings_SandboxGameCreateConfiguration___c__DisplayClass16_0___ctor
               (Settings_SandboxGameCreateConfiguration___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.SandboxGameCreateConfiguration.<>c__DisplayClass16_0$$<GetMapNames>b__0
// il2cpp: System_String_array* Settings_SandboxGameCreateConfiguration___c__DisplayClass16_0___GetMapNames_b__0 (Settings_SandboxGameCreateConfiguration___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x5b40150

System_String_array *
Settings_SandboxGameCreateConfiguration___c__DisplayClass16_0___GetMapNames_b__0
          (Settings_SandboxGameCreateConfiguration___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *category;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_07547272 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    Il2CppMethodInitialized_07547272 = '\x01';
    category = (__this->fields).category;
  }
  else {
    category = (__this->fields).category;
  }
  if (category == (System_String_o *)0x0) {
    category = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    uVar1 = (((Il2CppClass *)TypeInfo_Map_BuiltinLevels)->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Map_BuiltinLevels)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    pSVar2 = Map_BuiltinLevels__GetMapNames(category,(MethodInfo *)0x0);
    return pSVar2;
  }
  pSVar2 = Map_BuiltinLevels__GetMapNames(category,(MethodInfo *)0x0);
  return pSVar2;
}


// Settings.SandboxGameCreateConfiguration.<>c__DisplayClass24_0$$.ctor
// il2cpp: void Settings_SandboxGameCreateConfiguration___c__DisplayClass24_0___ctor (Settings_SandboxGameCreateConfiguration___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5b3f8f0

void Settings_SandboxGameCreateConfiguration___c__DisplayClass24_0___ctor
               (Settings_SandboxGameCreateConfiguration___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.SandboxGameCreateConfiguration.<>c__DisplayClass24_0$$<GetModeDefaults>b__0
// il2cpp: System_String_o* Settings_SandboxGameCreateConfiguration___c__DisplayClass24_0___GetModeDefaults_b__0 (Settings_SandboxGameCreateConfiguration___c__DisplayClass24_0_o* __this, const MethodInfo* method);
// 0x5b401e0

System_String_o *
Settings_SandboxGameCreateConfiguration___c__DisplayClass24_0___GetModeDefaults_b__0
          (Settings_SandboxGameCreateConfiguration___c__DisplayClass24_0_o *__this,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07547273 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07547273 = '\x01';
  }
  pSVar1 = (__this->fields).settings;
  if (((pSVar1 == (Settings_InGameSet_o *)0x0) ||
      (pSVar2 = (pSVar1->fields).General, pSVar2 == (Settings_InGameGeneralSettings_o *)0x0)) ||
     (pSVar3 = (pSVar2->fields).GameMode, pSVar3 == (Settings_StringSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar4 = (pSVar3->fields)._value;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    pSVar4 = Map_BuiltinLevels__LoadLogic(pSVar4,(MethodInfo *)0x0);
    return pSVar4;
  }
  pSVar4 = Map_BuiltinLevels__LoadLogic(pSVar4,(MethodInfo *)0x0);
  return pSVar4;
}


// Settings.SandboxGameCreateConfiguration.<>c__DisplayClass25_0$$.ctor
// il2cpp: void Settings_SandboxGameCreateConfiguration___c__DisplayClass25_0___ctor (Settings_SandboxGameCreateConfiguration___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x5b3fcd0

void Settings_SandboxGameCreateConfiguration___c__DisplayClass25_0___ctor
               (Settings_SandboxGameCreateConfiguration___c__DisplayClass25_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.SandboxGameCreateConfiguration.<>c__DisplayClass25_0$$<SyncAddonSettings>b__3
// il2cpp: System_String_o* Settings_SandboxGameCreateConfiguration___c__DisplayClass25_0___SyncAddonSettings_b__3 (Settings_SandboxGameCreateConfiguration___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x5b40260

System_String_o *
Settings_SandboxGameCreateConfiguration___c__DisplayClass25_0___SyncAddonSettings_b__3
          (Settings_SandboxGameCreateConfiguration___c__DisplayClass25_0_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547274 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    Il2CppMethodInitialized_07547274 = '\x01';
  }
  pSVar1 = (__this->fields).addonName;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    pSVar1 = Map_BuiltinLevels__LoadAddon(pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
  pSVar1 = Map_BuiltinLevels__LoadAddon(pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Settings.SandboxGameCreateConfiguration.<>c__DisplayClass29_0$$.ctor
// il2cpp: void Settings_SandboxGameCreateConfiguration___c__DisplayClass29_0___ctor (Settings_SandboxGameCreateConfiguration___c__DisplayClass29_0_o* __this, const MethodInfo* method);
// 0x5b40010

void Settings_SandboxGameCreateConfiguration___c__DisplayClass29_0___ctor
               (Settings_SandboxGameCreateConfiguration___c__DisplayClass29_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.SandboxGameCreateConfiguration.<>c__DisplayClass29_0$$<NormalizeMode>b__0
// il2cpp: System_String_array* Settings_SandboxGameCreateConfiguration___c__DisplayClass29_0___NormalizeMode_b__0 (Settings_SandboxGameCreateConfiguration___c__DisplayClass29_0_o* __this, const MethodInfo* method);
// 0x5b402c0

System_String_array *
Settings_SandboxGameCreateConfiguration___c__DisplayClass29_0___NormalizeMode_b__0
          (Settings_SandboxGameCreateConfiguration___c__DisplayClass29_0_o *__this,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Map_MapScript_o *pMVar5;
  System_String_o *category;
  System_String_o *mapName;
  bool bVar6;
  System_String_array *pSVar7;
  int32_t local_1c;
  
  if (Il2CppMethodInitialized_07547275 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07547275 = '\x01';
  }
  local_1c = 0;
  pSVar1 = (__this->fields).settings;
  if ((((pSVar1 == (Settings_InGameSet_o *)0x0) ||
       (pSVar2 = (pSVar1->fields).General, pSVar2 == (Settings_InGameGeneralSettings_o *)0x0)) ||
      (pSVar3 = (pSVar2->fields).MapCategory, pSVar3 == (Settings_StringSetting_o *)0x0)) ||
     ((pSVar4 = (pSVar2->fields).MapName, pSVar4 == (Settings_StringSetting_o *)0x0 ||
      (pMVar5 = (__this->fields).script, pMVar5 == (Map_MapScript_o *)0x0)))) {
    ThrowNullReferenceException();
  }
  category = (pSVar3->fields)._value;
  mapName = (pSVar4->fields)._value;
  bVar6 = System_String__IsNullOrWhiteSpace((pMVar5->fields).Logic,(MethodInfo *)0x0);
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar7 = Map_BuiltinLevels__GetSandboxGameModes(category,mapName,!bVar6,&local_1c,(MethodInfo *)0x0);
  return pSVar7;
}


// Settings.SandboxGameCreateConfiguration$$get_LastError
// il2cpp: System_String_o* Settings_SandboxGameCreateConfiguration__get_LastError (Settings_SandboxGameCreateConfiguration_o* __this, const MethodInfo* method);
// 0x5b3cd30

System_String_o *
Settings_SandboxGameCreateConfiguration__get_LastError
          (Settings_SandboxGameCreateConfiguration_o *__this,MethodInfo *method)

{
  return (__this->fields)._LastError_k__BackingField;
}


// Settings.SandboxGameCreateConfiguration$$set_LastError
// il2cpp: void Settings_SandboxGameCreateConfiguration__set_LastError (Settings_SandboxGameCreateConfiguration_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5b3cd40

void Settings_SandboxGameCreateConfiguration__set_LastError
               (Settings_SandboxGameCreateConfiguration_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._LastError_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._LastError_k__BackingField);
  return;
}


// Settings.SandboxGameCreateConfiguration$$get_MapDescription
// il2cpp: System_String_o* Settings_SandboxGameCreateConfiguration__get_MapDescription (Settings_SandboxGameCreateConfiguration_o* __this, const MethodInfo* method);
// 0x5b3cd50

System_String_o *
Settings_SandboxGameCreateConfiguration__get_MapDescription
          (Settings_SandboxGameCreateConfiguration_o *__this,MethodInfo *method)

{
  return (__this->fields)._MapDescription_k__BackingField;
}


// Settings.SandboxGameCreateConfiguration$$set_MapDescription
// il2cpp: void Settings_SandboxGameCreateConfiguration__set_MapDescription (Settings_SandboxGameCreateConfiguration_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5b3cd60

void Settings_SandboxGameCreateConfiguration__set_MapDescription
               (Settings_SandboxGameCreateConfiguration_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._MapDescription_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._MapDescription_k__BackingField);
  return;
}


// Settings.SandboxGameCreateConfiguration$$get_ModeDescription
// il2cpp: System_String_o* Settings_SandboxGameCreateConfiguration__get_ModeDescription (Settings_SandboxGameCreateConfiguration_o* __this, const MethodInfo* method);
// 0x5b3cd70

System_String_o *
Settings_SandboxGameCreateConfiguration__get_ModeDescription
          (Settings_SandboxGameCreateConfiguration_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__BaseSetting__o *settings;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754725b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_0754725b = '\x01';
  }
  settings = (__this->fields)._cachedModeSettings;
  if (settings == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pSVar1 = CustomLogic_CustomLogicManager__GetModeDescription(settings,(MethodInfo *)0x0);
    return pSVar1;
  }
  pSVar1 = CustomLogic_CustomLogicManager__GetModeDescription(settings,(MethodInfo *)0x0);
  return pSVar1;
}


// Settings.SandboxGameCreateConfiguration$$Reset
// il2cpp: void Settings_SandboxGameCreateConfiguration__Reset (Settings_SandboxGameCreateConfiguration_o* __this, const MethodInfo* method);
// 0x5b3cdf0

void Settings_SandboxGameCreateConfiguration__Reset
               (Settings_SandboxGameCreateConfiguration_o *__this,MethodInfo *method)

{
  (__this->fields)._cachedLogicSource = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedLogicSource);
  (__this->fields)._cachedModeSettings = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedModeSettings);
  (__this->fields)._cachedAddonSelectionKey = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedAddonSelectionKey);
  (__this->fields)._cachedAddonSettings =
       (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedAddonSettings);
  (__this->fields)._LastError_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._LastError_k__BackingField);
  (__this->fields)._MapDescription_k__BackingField = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8)
  ;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._MapDescription_k__BackingField);
  return;
}


// Settings.SandboxGameCreateConfiguration$$GetMapCategories
// il2cpp: System_String_array* Settings_SandboxGameCreateConfiguration__GetMapCategories (Settings_SandboxGameCreateConfiguration_o* __this, const MethodInfo* method);
// 0x5b3ce80

System_String_array *
Settings_SandboxGameCreateConfiguration__GetMapCategories
          (Settings_SandboxGameCreateConfiguration_o *__this,MethodInfo *method)

{
  System_Func_string____o *__this_00;
  System_String_array *pSVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754725c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_BuiltinLevels_GetMapCategories);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_array);
    Il2CppMethodInitialized_0754725c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_array);
  System_Func_object____ctor
            ((System_Func_object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Map_BuiltinLevels_GetMapCategories,(MethodInfo_4F0C6A0 *)0x0);
  pSVar1 = Settings_SandboxGameCreateConfiguration__SafeOptions(__this,__this_00,method_00);
  return pSVar1;
}


// Settings.SandboxGameCreateConfiguration$$GetMapNames
// il2cpp: System_String_array* Settings_SandboxGameCreateConfiguration__GetMapNames (Settings_SandboxGameCreateConfiguration_o* __this, System_String_o* category, const MethodInfo* method);
// 0x5b3d1c0

System_String_array *
Settings_SandboxGameCreateConfiguration__GetMapNames
          (Settings_SandboxGameCreateConfiguration_o *__this,System_String_o *category,MethodInfo *method)

{
  Settings_SandboxGameCreateConfiguration___c__DisplayClass16_0_o *__this_00;
  System_Func_string____o *__this_01;
  System_String_array *pSVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754725d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SandboxGameCreateConfiguration_c__DisplayClass16_0_GetMapNames_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Settings_SandboxGameCreateConfiguration_c__DisplayClass16_0);
    Il2CppMethodInitialized_0754725d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Settings_SandboxGameCreateConfiguration_c__DisplayClass16_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Settings_SandboxGameCreateConfiguration___c__DisplayClass16_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).category = category;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).category);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_array);
  System_Func_object____ctor
            ((System_Func_object__o *)__this_01,(Il2CppObject *)__this_00,
             (intptr_t)MethodInfo_Settings_SandboxGameCreateConfiguration_c__DisplayClass16_0_GetMapNames_b__0
             ,(MethodInfo_4F0C6A0 *)0x0);
  pSVar1 = Settings_SandboxGameCreateConfiguration__SafeOptions(__this,__this_01,method_00);
  return pSVar1;
}


// Settings.SandboxGameCreateConfiguration$$FindMapCategory
// il2cpp: System_String_o* Settings_SandboxGameCreateConfiguration__FindMapCategory (Settings_SandboxGameCreateConfiguration_o* __this, System_String_o* mapName, System_String_o* preferredCategory, const MethodInfo* method);
// 0x5b3d290
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b3d2f3: cmp byte ptr [rip + 0x1a0558c], 0
// asm:   0x5b3d2fa: je 0x5b3d487
// asm:   0x5b3d438: jmp 0x5b3d4b9

System_String_o *
Settings_SandboxGameCreateConfiguration__FindMapCategory
          (Settings_SandboxGameCreateConfiguration_o *__this,System_String_o *mapName,
          System_String_o *preferredCategory,MethodInfo *method)

{
  uint32_t uVar1;
  uint uVar2;
  System_String_o *category;
  bool bVar3;
  System_String_array *pSVar4;
  System_Func_string____o *__this_00;
  ulong uVar5;
  System_String_array *source;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar6;
  MethodInfo *extraout_RDX_01;
  ulong uVar7;
  
  pMVar6 = (MethodInfo *)preferredCategory;
  if (Il2CppMethodInitialized_0754725e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Contains_string_71a8300);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_0754725e = '\x01';
    pMVar6 = extraout_RDX;
  }
  pSVar4 = Settings_SandboxGameCreateConfiguration__GetMapNames(__this,preferredCategory,pMVar6);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_07542886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  bVar3 = System_Linq_Enumerable__Contains_object__34e6650
                    ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,(Il2CppObject *)mapName,
                     (System_Collections_Generic_IEqualityComparer_TSource__o *)
                     TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                     (MethodInfo_34E6650 *)MethodInfo_System_Linq_Enumerable_Contains_string_71a8300);
  if (!bVar3) {
    if (Il2CppMethodInitialized_0754725c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_BuiltinLevels_GetMapCategories);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_array);
      Il2CppMethodInitialized_0754725c = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_array);
    System_Func_object____ctor
              ((System_Func_object__o *)__this_00,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Map_BuiltinLevels_GetMapCategories,(MethodInfo_4F0C6A0 *)0x0);
    pSVar4 = Settings_SandboxGameCreateConfiguration__SafeOptions(__this,__this_00,method_00);
    if (pSVar4 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    if (0 < (int)pSVar4->max_length) {
      uVar5 = pSVar4->max_length & 0xffffffff;
      uVar7 = 0;
      pMVar6 = extraout_RDX_00;
      do {
        if (uVar5 <= uVar7) {
          ThrowIndexOutOfRangeException();
        }
        category = pSVar4->m_Items[uVar7];
        source = Settings_SandboxGameCreateConfiguration__GetMapNames(__this,category,pMVar6);
        if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
          if (Il2CppMethodInitialized_07542886 == '\0') goto label_05b3d44e;
label_05b3d3f4:
          uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
        }
        else {
          if (Il2CppMethodInitialized_07542886 != '\0') goto label_05b3d3f4;
label_05b3d44e:
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
          Il2CppMethodInitialized_07542886 = '\x01';
          uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
        }
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
        }
        bVar3 = System_Linq_Enumerable__Contains_object__34e6650
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,(Il2CppObject *)mapName
                           ,(System_Collections_Generic_IEqualityComparer_TSource__o *)
                            TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                           (MethodInfo_34E6650 *)MethodInfo_System_Linq_Enumerable_Contains_string_71a8300);
        if (bVar3) {
          return category;
        }
        uVar7 = uVar7 + 1;
        uVar2 = (uint)pSVar4->max_length;
        uVar5 = (ulong)uVar2;
        pMVar6 = extraout_RDX_01;
      } while ((long)uVar7 < (long)(int)uVar2);
    }
    preferredCategory = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  return preferredCategory;
}


// Settings.SandboxGameCreateConfiguration$$GetGameModes
// il2cpp: System_String_array* Settings_SandboxGameCreateConfiguration__GetGameModes (Settings_SandboxGameCreateConfiguration_o* __this, Settings_InGameSet_o* settings, int32_t* recommendedModeCount, const MethodInfo* method);
// 0x5b3d4f0
// eh: try 0x5b3d600..0x5b3d7d2 -> pad 0x5b3d7d6 (+12 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5b3d801..0x5b3d86e -> pad 0x5b3d86e (+1 call sites) cleanup
// eh: try 0x5b3d871..0x5b3d876 -> pad 0x5b3d87e catch (...) [compiler noexcept guard]
// asm: 52 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b3d64c: jmp 0x5b3d6ae
// asm:   0x5b3d755: jmp 0x5b3d777
// asm:   0x5b3d7d2: jmp 0x5b3d7ea
// asm:   0x5b3d7d4: jmp 0x5b3d7ea
// asm:   0x5b3d7d6: jmp 0x5b3d7ea
// asm:   0x5b3d7d8: jmp 0x5b3d7ea
// asm:   0x5b3d7da: jmp 0x5b3d7ea
// asm:   0x5b3d7dc: jmp 0x5b3d7ea
// asm:   0x5b3d7de: jmp 0x5b3d7ea
// asm:   0x5b3d7e0: jmp 0x5b3d7ea
// asm:   0x5b3d7e2: jmp 0x5b3d7ea
// asm:   0x5b3d7e4: jmp 0x5b3d7ea
// asm:   0x5b3d7e6: jmp 0x5b3d7ea
// asm:   0x5b3d7e8: jmp 0x5b3d7ea
// asm:   0x5b3d7ea: mov rbx, rax
// asm:   0x5b3d7ed: cmp edx, 1
// asm:   0x5b3d7f0: jne 0x5b3d876
// asm:   0x5b3d7f6: mov rdi, rbx
// asm:   0x5b3d7f9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b3d7fe: mov rbx, rax
// asm:   0x5b3d801: lea rdi, [rip + 0x173a8b8]  ; TypeInfo_System_Exception
// asm:   0x5b3d808: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b3d80d: mov rcx, qword ptr [rbx]
// asm:   0x5b3d810: mov rsi, qword ptr [rcx]
// asm:   0x5b3d813: mov rdi, rax
// asm:   0x5b3d816: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5b3d81b: test al, al
// asm:   0x5b3d81d: je 0x5b3d84d
// asm:   0x5b3d81f: mov rbx, qword ptr [rbx]
// asm:   0x5b3d822: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3d827: mov rdi, r14
// asm:   0x5b3d82a: mov rsi, rbx
// asm:   0x5b3d82d: call 0x5b3dad0  ; Settings_SandboxGameCreateConfiguration__SetError()
// asm:   0x5b3d832: mov dword ptr [r15], 0
// asm:   0x5b3d839: lea rdi, [rip + 0x17370f8]  ; TypeInfo_string_array
// asm:   0x5b3d840: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b3d845: mov rdi, rax
// asm:   0x5b3d848: jmp 0x5b3d658
// asm:   0x5b3d84d: mov edi, 8
// asm:   0x5b3d852: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5b3d857: mov rcx, qword ptr [rbx]
// asm:   0x5b3d85a: mov qword ptr [rax], rcx
// asm:   0x5b3d85d: lea rsi, [rip + 0x12efc9c]
// asm:   0x5b3d864: mov rdi, rax
// asm:   0x5b3d867: xor edx, edx
// asm:   0x5b3d869: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5b3d86e: mov rbx, rax
// asm:   0x5b3d871: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3d876: mov rdi, rbx
// asm:   0x5b3d879: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b3d87e: mov rdi, rax
// asm:   0x5b3d881: call 0x2ab61e0  ; __clang_call_terminate()

System_String_array *
Settings_SandboxGameCreateConfiguration__GetGameModes
          (Settings_SandboxGameCreateConfiguration_o *__this,Settings_InGameSet_o *settings,
          int32_t *recommendedModeCount,MethodInfo *method)

{
  uint32_t uVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  System_String_o *category;
  System_String_o *mapName;
  Il2CppObject *object;
  bool bVar5;
  Map_MapScript_o *pMVar6;
  System_String_array *pSVar7;
  Settings_SandboxGameCreateConfiguration___c_StaticFields *pSVar8;
  System_Func_string__bool__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar9;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)recommendedModeCount;
  if (Il2CppMethodInitialized_0754725f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Distinct_string_71a8388);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SandboxGameCreateConfiguration_c_GetGameModes_b__18_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SandboxGameCreateConfiguration_c);
    Il2CppMethodInitialized_0754725f = '\x01';
    method_00 = extraout_RDX;
  }
  *recommendedModeCount = 0;
  if (settings == (Settings_InGameSet_o *)0x0) {
    pSVar7 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
    return pSVar7;
  }
  pMVar6 = Settings_SandboxGameCreateConfiguration__LoadMapScript(__this,settings,method_00);
  if (pMVar6 == (Map_MapScript_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar5 = System_String__IsNullOrWhiteSpace((pMVar6->fields).Logic,(MethodInfo *)0x0);
  pSVar2 = (settings->fields).General;
  if (pSVar2 == (Settings_InGameGeneralSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar3 = (pSVar2->fields).MapCategory;
  if (pSVar3 == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar4 = (pSVar2->fields).MapName;
  if (pSVar4 == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  category = (pSVar3->fields)._value;
  mapName = (pSVar4->fields)._value;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar7 = Map_BuiltinLevels__GetSandboxGameModes
                     (category,mapName,!bVar5,recommendedModeCount,(MethodInfo *)0x0);
  if (pSVar7 == (System_String_array *)0x0) {
    pSVar7 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
    uVar1 = (TypeInfo_Settings_SandboxGameCreateConfiguration_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Settings_SandboxGameCreateConfiguration_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_SandboxGameCreateConfiguration_c);
    pSVar8 = TypeInfo_Settings_SandboxGameCreateConfiguration_c->static_fields;
    __this_00 = pSVar8->__9__18_0;
  }
  else {
    pSVar8 = ((Il2CppClass *)TypeInfo_Settings_SandboxGameCreateConfiguration_c)->static_fields;
    __this_00 = pSVar8->__9__18_0;
  }
  if (__this_00 == (System_Func_string__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Settings_SandboxGameCreateConfiguration_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_SandboxGameCreateConfiguration_c);
      pSVar8 = TypeInfo_Settings_SandboxGameCreateConfiguration_c->static_fields;
    }
    object = (Il2CppObject *)pSVar8->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_00,object,
               (intptr_t)MethodInfo_Settings_SandboxGameCreateConfiguration_c_GetGameModes_b__18_0,
               (MethodInfo_4F19300 *)0x0);
    pSVar8 = TypeInfo_Settings_SandboxGameCreateConfiguration_c->static_fields;
    pSVar8->__9__18_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&pSVar8->__9__18_0);
  }
  pSVar9 = System_Linq_Enumerable__Where_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar7,
                      (System_Func_TSource__bool__o *)__this_00,
                      (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_string);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_07542886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  pSVar9 = System_Linq_Enumerable__Distinct_object__34e8be0
                     (pSVar9,(System_Collections_Generic_IEqualityComparer_TSource__o *)
                             TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                      (MethodInfo_34E8BE0 *)MethodInfo_System_Linq_Enumerable_Distinct_string_71a8388);
  pSVar7 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     (pSVar9,(MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar7;
}


// Settings.SandboxGameCreateConfiguration$$ApplyMapChange
// il2cpp: void Settings_SandboxGameCreateConfiguration__ApplyMapChange (Settings_SandboxGameCreateConfiguration_o* __this, Settings_InGameSet_o* settings, const MethodInfo* method);
// 0x5b3db50

void Settings_SandboxGameCreateConfiguration__ApplyMapChange
               (Settings_SandboxGameCreateConfiguration_o *__this,Settings_InGameSet_o *settings,
               MethodInfo *method)

{
  uint32_t uVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *pSVar4;
  bool bVar5;
  uint in_EAX;
  System_String_array *source;
  MethodInfo *in_RCX;
  undefined8 uStack_28;
  
  uStack_28._0_4_ = in_EAX;
  if (Il2CppMethodInitialized_07547260 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Contains_string_71a8300);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_07547260 = '\x01';
  }
  uStack_28 = (ulong)(uint)uStack_28;
  source = Settings_SandboxGameCreateConfiguration__GetGameModes
                     (__this,settings,(int32_t *)((long)&uStack_28 + 4),in_RCX);
  if (source == (System_String_array *)0x0) goto label_05b3dd7b;
  if (source->max_length == 0) {
    if (settings == (Settings_InGameSet_o *)0x0) goto label_05b3dd7b;
  }
  else {
    if (((settings == (Settings_InGameSet_o *)0x0) ||
        (pSVar2 = (settings->fields).General, pSVar2 == (Settings_InGameGeneralSettings_o *)0x0)) ||
       (pSVar3 = (pSVar2->fields).GameMode, pSVar3 == (Settings_StringSetting_o *)0x0)) goto label_05b3dd7b;
    pSVar4 = (pSVar3->fields)._value;
    if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
      if (Il2CppMethodInitialized_07542886 != '\0') goto label_05b3dc25;
label_05b3dd49:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
      Il2CppMethodInitialized_07542886 = '\x01';
      uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (Il2CppMethodInitialized_07542886 == '\0') goto label_05b3dd49;
label_05b3dc25:
      uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
    }
    bVar5 = System_Linq_Enumerable__Contains_object__34e6650
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,(Il2CppObject *)pSVar4,
                       (System_Collections_Generic_IEqualityComparer_TSource__o *)
                       TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                       (MethodInfo_34E6650 *)MethodInfo_System_Linq_Enumerable_Contains_string_71a8300);
    if (!bVar5) {
      pSVar2 = (settings->fields).General;
      if (pSVar2 == (Settings_InGameGeneralSettings_o *)0x0) goto label_05b3dd7b;
      if ((int)source->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      pSVar3 = (pSVar2->fields).GameMode;
      if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_05b3dd7b;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)source->m_Items[0],
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    }
  }
  pSVar2 = (settings->fields).General;
  if ((pSVar2 == (Settings_InGameGeneralSettings_o *)0x0) ||
     (pSVar3 = (pSVar2->fields).GameMode, pSVar3 == (Settings_StringSetting_o *)0x0)) {
label_05b3dd7b:
    ThrowNullReferenceException();
  }
  pSVar4 = (pSVar3->fields)._value;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  bVar5 = System_String__op_Equality
                    (pSVar4,TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic,(MethodInfo *)0x0);
  if (bVar5) {
    pSVar2 = (settings->fields).General;
    if ((pSVar2 == (Settings_InGameGeneralSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).PrevGameMode, pSVar3 == (Settings_StringSetting_o *)0x0)) goto label_05b3dd7b;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8),
               (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  }
  return;
}


// Settings.SandboxGameCreateConfiguration$$GetAddonNames
// il2cpp: System_String_array* Settings_SandboxGameCreateConfiguration__GetAddonNames (Settings_SandboxGameCreateConfiguration_o* __this, const MethodInfo* method);
// 0x5b3dd90

System_String_array *
Settings_SandboxGameCreateConfiguration__GetAddonNames
          (Settings_SandboxGameCreateConfiguration_o *__this,MethodInfo *method)

{
  System_Func_string____o *__this_00;
  System_String_array *pSVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547261 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_BuiltinLevels_GetAddonNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_array);
    Il2CppMethodInitialized_07547261 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_array);
  System_Func_object____ctor
            ((System_Func_object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Map_BuiltinLevels_GetAddonNames,(MethodInfo_4F0C6A0 *)0x0);
  pSVar1 = Settings_SandboxGameCreateConfiguration__SafeOptions(__this,__this_00,method_00);
  return pSVar1;
}


// Settings.SandboxGameCreateConfiguration$$Refresh
// il2cpp: void Settings_SandboxGameCreateConfiguration__Refresh (Settings_SandboxGameCreateConfiguration_o* __this, Settings_InGameSet_o* settings, const MethodInfo* method);
// 0x5b3de00

void Settings_SandboxGameCreateConfiguration__Refresh
               (Settings_SandboxGameCreateConfiguration_o *__this,Settings_InGameSet_o *settings,
               MethodInfo *method)

{
  Map_MapScript_o *script;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  (__this->fields)._LastError_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._LastError_k__BackingField);
  if (settings == (Settings_InGameSet_o *)0x0) {
    return;
  }
  Settings_SandboxGameCreateConfiguration__NormalizeMap(__this,settings,method_00);
  script = Settings_SandboxGameCreateConfiguration__LoadMapScript(__this,settings,method_01);
  Settings_SandboxGameCreateConfiguration__NormalizeMode(__this,settings,script,in_RCX);
  Settings_SandboxGameCreateConfiguration__SyncModeSettings(__this,settings,script,in_RCX);
  Settings_SandboxGameCreateConfiguration__SyncAddonSettings(__this,settings,method_02);
  return;
}


// Settings.SandboxGameCreateConfiguration$$SyncModeSettings
// il2cpp: System_Collections_Generic_Dictionary_string__BaseSetting__o* Settings_SandboxGameCreateConfiguration__SyncModeSettings (Settings_SandboxGameCreateConfiguration_o* __this, Settings_InGameSet_o* settings, Map_MapScript_o* script, const MethodInfo* method);
// 0x5b3e470

System_Collections_Generic_Dictionary_string__BaseSetting__o *
Settings_SandboxGameCreateConfiguration__SyncModeSettings
          (Settings_SandboxGameCreateConfiguration_o *__this,Settings_InGameSet_o *settings,
          Map_MapScript_o *script,MethodInfo *method)

{
  uint uVar1;
  Settings_InGameModeSettings_o *pSVar2;
  Il2CppObject *key;
  bool bVar3;
  int iVar4;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar5;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *source;
  System_Object_array *pSVar6;
  ulong uVar7;
  System_Type_o *left;
  Settings_BaseSetting_o *pSVar8;
  System_Type_o *right;
  Settings_BaseSetting_o *source_00;
  MethodInfo *method_00;
  ulong uVar9;
  Settings_BaseSetting_o *local_48;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *local_40;
  Settings_InGameSet_o *local_38;
  
  if (Il2CppMethodInitialized_07547262 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    Il2CppMethodInitialized_07547262 = '\x01';
  }
  local_48 = (Settings_BaseSetting_o *)0x0;
  if (settings == (Settings_InGameSet_o *)0x0) {
    pSVar5 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_object__object__o *)pSVar5,
               (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor)
    ;
    return pSVar5;
  }
  pSVar5 = Settings_SandboxGameCreateConfiguration__GetModeDefaults(__this,settings,script,method);
  pSVar2 = (settings->fields).Mode;
  if (pSVar2 != (Settings_InGameModeSettings_o *)0x0) {
    local_40 = (pSVar2->fields).Current;
    if (local_40 == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
      local_40 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
      System_Collections_Generic_Dictionary_object__object____ctor
                ((System_Collections_Generic_Dictionary_object__object__o *)local_40,
                 (MethodInfo_4AAC8D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
    }
    if (pSVar5 != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
      source = System_Collections_Generic_Dictionary_object__object___get_Keys
                         ((System_Collections_Generic_Dictionary_object__object__o *)pSVar5,
                          (MethodInfo_4AAD0F0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys);
      pSVar6 = System_Linq_Enumerable__ToArray_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                          (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
      if (pSVar6 != (System_Object_array *)0x0) {
        iVar4 = (int)pSVar6->max_length;
        local_38 = settings;
        if (local_40 == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
          if (0 < iVar4) goto label_05b3e72c;
        }
        else if (0 < iVar4) {
          uVar7 = pSVar6->max_length & 0xffffffff;
          uVar9 = 0;
          do {
            if (uVar7 <= uVar9) {
              ThrowIndexOutOfRangeException();
            }
            key = pSVar6->m_Items[uVar9];
            bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                              ((System_Collections_Generic_Dictionary_object__object__o *)local_40,key,
                               (Il2CppObject **)&local_48,
                               (MethodInfo_4AAF440 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue
                              );
            if (bVar3) {
              if (local_48 == (Settings_BaseSetting_o *)0x0) goto label_05b3e72c;
              left = System_Object__GetType((Il2CppObject *)local_48,(MethodInfo *)0x0);
              pSVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                                 ((System_Collections_Generic_Dictionary_object__object__o *)pSVar5,key,
                                  (MethodInfo_4AAD450 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item
                                 );
              if (pSVar8 == (Settings_BaseSetting_o *)0x0) goto label_05b3e72c;
              right = System_Object__GetType((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
              if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init(g_data_075567a8);
              }
              bVar3 = System_Type__op_Inequality(left,right,(MethodInfo *)0x0);
              if (!bVar3) {
                source_00 = System_Collections_Generic_Dictionary_object__object___get_Item
                                      ((System_Collections_Generic_Dictionary_object__object__o *)pSVar5,key,
                                       (MethodInfo_4AAD450 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item
                                      );
                pSVar8 = local_48;
                if ((source_00 == (Settings_BaseSetting_o *)0x0) ||
                   (local_48 == (Settings_BaseSetting_o *)0x0)) goto label_05b3e72c;
                (local_48->fields).InspectorMetadata = (source_00->fields).InspectorMetadata;
                Il2CppCodeGenWriteBarrier(&(local_48->fields).InspectorMetadata);
                Settings_SandboxGameCreateConfiguration__CopyInspectorBounds(source_00,pSVar8,method_00);
                System_Collections_Generic_Dictionary_object__object___set_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)pSVar5,key,
                           (Il2CppObject *)local_48,
                           (MethodInfo_4AAD4C0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_set_Item);
              }
            }
            uVar9 = uVar9 + 1;
            uVar1 = (uint)pSVar6->max_length;
            uVar7 = (ulong)uVar1;
          } while ((long)uVar9 < (long)(int)uVar1);
        }
        pSVar2 = (local_38->fields).Mode;
        if (pSVar2 != (Settings_InGameModeSettings_o *)0x0) {
          (pSVar2->fields).Current = pSVar5;
          Il2CppCodeGenWriteBarrier(&(pSVar2->fields).Current);
          return pSVar5;
        }
      }
    }
  }
label_05b3e72c:
  ThrowNullReferenceException();
}


// Settings.SandboxGameCreateConfiguration$$RefreshDescriptions
// il2cpp: void Settings_SandboxGameCreateConfiguration__RefreshDescriptions (Settings_SandboxGameCreateConfiguration_o* __this, Settings_InGameSet_o* settings, const MethodInfo* method);
// 0x5b3f830

void Settings_SandboxGameCreateConfiguration__RefreshDescriptions
               (Settings_SandboxGameCreateConfiguration_o *__this,Settings_InGameSet_o *settings,
               MethodInfo *method)

{
  System_String_o **targetAddress;
  bool bVar1;
  Map_MapScript_o *script;
  System_String_o *message;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547263 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&"Could not load experience descriptions: ");
    Il2CppMethodInitialized_07547263 = '\x01';
  }
  targetAddress = &(__this->fields)._LastError_k__BackingField;
  (__this->fields)._LastError_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  script = Settings_SandboxGameCreateConfiguration__LoadMapScript(__this,settings,method_00);
  Settings_SandboxGameCreateConfiguration__GetModeDefaults(__this,settings,script,in_RCX);
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._LastError_k__BackingField,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  message = System_String__Concat_52f0320("Could not load experience descriptions: ",*targetAddress,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// Settings.SandboxGameCreateConfiguration$$GetModeDefaults
// il2cpp: System_Collections_Generic_Dictionary_string__BaseSetting__o* Settings_SandboxGameCreateConfiguration__GetModeDefaults (Settings_SandboxGameCreateConfiguration_o* __this, Settings_InGameSet_o* settings, Map_MapScript_o* script, const MethodInfo* method);
// 0x5b3f450
// eh: try 0x5b3f538..0x5b3f6b5 -> pad 0x5b3f767 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5b3f6d0..0x5b3f755 -> pad 0x5b3f755 (+1 call sites) cleanup
// eh: try 0x5b3f758..0x5b3f75d -> pad 0x5b3f75f catch (...) [compiler noexcept guard]
// eh: try 0x5b3f77c..0x5b3f7d3 -> pad 0x5b3f7d3 (+1 call sites) cleanup
// eh: try 0x5b3f7d6..0x5b3f7db -> pad 0x5b3f7e3 catch (...) [compiler noexcept guard]
// asm: 80 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b3f6b5: jmp 0x5b3f6b9
// asm:   0x5b3f6b7: jmp 0x5b3f6b9
// asm:   0x5b3f6b9: mov rbx, rax
// asm:   0x5b3f6bc: cmp edx, 1
// asm:   0x5b3f6bf: jne 0x5b3f7db
// asm:   0x5b3f6c5: mov rdi, rbx
// asm:   0x5b3f6c8: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b3f6cd: mov rbx, rax
// asm:   0x5b3f6d0: lea rdi, [rip + 0x17389e9]  ; TypeInfo_System_Exception
// asm:   0x5b3f6d7: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b3f6dc: mov rcx, qword ptr [rbx]
// asm:   0x5b3f6df: mov rsi, qword ptr [rcx]
// asm:   0x5b3f6e2: mov rdi, rax
// asm:   0x5b3f6e5: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5b3f6ea: test al, al
// asm:   0x5b3f6ec: je 0x5b3f734
// asm:   0x5b3f6ee: mov rbx, qword ptr [rbx]
// asm:   0x5b3f6f1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3f6f6: mov rdi, r14
// asm:   0x5b3f6f9: mov rsi, rbx
// asm:   0x5b3f6fc: call 0x5b3dad0  ; Settings_SandboxGameCreateConfiguration__SetError()
// asm:   0x5b3f701: lea rdi, [rip + 0x172ec78]  ; TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting
// asm:   0x5b3f708: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b3f70d: mov rdi, rax
// asm:   0x5b3f710: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5b3f715: mov rbx, rax
// asm:   0x5b3f718: lea rdi, [rip + 0x174bbe1]  ; MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor
// asm:   0x5b3f71f: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b3f724: mov rdi, rbx
// asm:   0x5b3f727: mov rsi, rax
// asm:   0x5b3f72a: call 0x4bac8d0  ; System_Collections_Generic_Dictionary_object__object____ctor()
// asm:   0x5b3f72f: jmp 0x5b3f67b
// asm:   0x5b3f734: mov edi, 8
// asm:   0x5b3f739: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5b3f73e: mov rcx, qword ptr [rbx]
// asm:   0x5b3f741: mov qword ptr [rax], rcx
// asm:   0x5b3f744: lea rsi, [rip + 0x12eddb5]
// asm:   0x5b3f74b: mov rdi, rax
// asm:   0x5b3f74e: xor edx, edx
// asm:   0x5b3f750: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5b3f755: mov rbx, rax
// asm:   0x5b3f758: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3f75d: jmp 0x5b3f7db
// asm:   0x5b3f75f: mov rdi, rax
// asm:   0x5b3f762: call 0x2ab61e0  ; __clang_call_terminate()
// asm:   0x5b3f767: jmp 0x5b3f769
// asm:   0x5b3f769: mov rbx, rax
// asm:   0x5b3f76c: cmp edx, 1
// asm:   0x5b3f76f: jne 0x5b3f7db
// asm:   0x5b3f771: mov rdi, rbx
// asm:   0x5b3f774: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b3f779: mov rbx, rax
// asm:   0x5b3f77c: lea rdi, [rip + 0x173893d]  ; TypeInfo_System_Exception
// asm:   0x5b3f783: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b3f788: mov rcx, qword ptr [rbx]
// asm:   0x5b3f78b: mov rsi, qword ptr [rcx]
// asm:   0x5b3f78e: mov rdi, rax
// asm:   0x5b3f791: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5b3f796: test al, al
// asm:   0x5b3f798: je 0x5b3f7b2
// asm:   0x5b3f79a: mov rbx, qword ptr [rbx]
// asm:   0x5b3f79d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3f7a2: mov rdi, r14
// asm:   0x5b3f7a5: mov rsi, rbx
// asm:   0x5b3f7a8: call 0x5b3dad0  ; Settings_SandboxGameCreateConfiguration__SetError()
// asm:   0x5b3f7ad: jmp 0x5b3f543
// asm:   0x5b3f7b2: mov edi, 8
// asm:   0x5b3f7b7: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5b3f7bc: mov rcx, qword ptr [rbx]
// asm:   0x5b3f7bf: mov qword ptr [rax], rcx
// asm:   0x5b3f7c2: lea rsi, [rip + 0x12edd37]
// asm:   0x5b3f7c9: mov rdi, rax
// asm:   0x5b3f7cc: xor edx, edx
// asm:   0x5b3f7ce: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5b3f7d3: mov rbx, rax
// asm:   0x5b3f7d6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3f7db: mov rdi, rbx
// asm:   0x5b3f7de: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b3f7e3: mov rdi, rax
// asm:   0x5b3f7e6: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_Dictionary_string__BaseSetting__o *
Settings_SandboxGameCreateConfiguration__GetModeDefaults
          (Settings_SandboxGameCreateConfiguration_o *__this,Settings_InGameSet_o *settings,
          Map_MapScript_o *script,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__BaseSetting__o *dictionary;
  bool bVar1;
  Settings_SandboxGameCreateConfiguration___c__DisplayClass24_0_o *__this_00;
  System_Func_string__o *__this_01;
  System_String_o *a;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_02;
  
  if (Il2CppMethodInitialized_07547264 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SandboxGameCreateConfiguration_c__DisplayClass24_0_GetModeDefaults_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Settings_SandboxGameCreateConfiguration_c__DisplayClass24_0);
    Il2CppMethodInitialized_07547264 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Settings_SandboxGameCreateConfiguration_c__DisplayClass24_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Settings_SandboxGameCreateConfiguration___c__DisplayClass24_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).settings = settings;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).settings);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string);
  System_Func_object____ctor
            ((System_Func_object__o *)__this_01,(Il2CppObject *)__this_00,
             (intptr_t)
             MethodInfo_Settings_SandboxGameCreateConfiguration_c__DisplayClass24_0_GetModeDefaults_b__0,
             (MethodInfo_4F0C6A0 *)0x0);
  if (__this_01 == (System_Func_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  a = (System_String_o *)
      (*(code *)(__this_01->fields).invoke_impl)((__this_01->fields).method_code,(__this_01->fields).method);
  if (a == (System_String_o *)0x0) {
    a = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  bVar1 = System_String__op_Equality
                    (a,TypeInfo_Map_BuiltinLevels->static_fields->UseMapLogic,(MethodInfo *)0x0);
  if ((bVar1) &&
     ((script == (Map_MapScript_o *)0x0 || (a = (script->fields).Logic, a == (System_String_o *)0x0)))) {
    a = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  bVar1 = System_String__op_Equality((__this->fields)._cachedLogicSource,a,(MethodInfo *)0x0);
  if ((bVar1) &&
     (dictionary = (__this->fields)._cachedModeSettings,
     dictionary != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0)) {
    if (Il2CppMethodInitialized_0754726d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor_718b308);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
      Il2CppMethodInitialized_0754726d = '\x01';
    }
    __this_02 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
    System_Collections_Generic_Dictionary_object__object____ctor_4aacab0
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
               (System_Collections_Generic_IDictionary_TKey__TValue__o *)dictionary,
               (MethodInfo_4AACAB0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor_718b308);
  }
  else {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    __this_02 = CustomLogic_CustomLogicManager__GetModeSettings(a,(MethodInfo *)0x0);
    if (__this_02 == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
      __this_02 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting)
      ;
      System_Collections_Generic_Dictionary_object__object____ctor
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
                 (MethodInfo_4AAC8D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
    }
    (__this->fields)._cachedLogicSource = a;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedLogicSource);
    (__this->fields)._cachedModeSettings = __this_02;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedModeSettings);
  }
  return __this_02;
}


// Settings.SandboxGameCreateConfiguration$$SyncAddonSettings
// il2cpp: System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o* Settings_SandboxGameCreateConfiguration__SyncAddonSettings (Settings_SandboxGameCreateConfiguration_o* __this, Settings_InGameSet_o* settings, const MethodInfo* method);
// 0x5b3e740
// eh: try 0x5b3ecca..0x5b3ed5d -> pad 0x5b3f3e1 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b3ed7c..0x5b3eebb -> pad 0x5b3ee8b (+10 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5b3eecb..0x5b3eed5 -> pad 0x5b3f3be catch (...) [compiler noexcept guard]
// eh: try 0x5b3eee9..0x5b3f3be -> pad 0x5b3f3cc (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b3f3d2..0x5b3f3d7 -> pad 0x5b3f445 catch (...) [compiler noexcept guard]
// eh: try 0x5b3f403..0x5b3f408 -> pad 0x5b3f42d cleanup
// eh: try 0x5b3f430..0x5b3f43d -> pad 0x5b3f445 catch (...) [compiler noexcept guard]
// asm: 105 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b3e9d5: jmp 0x5b3ea18
// asm:   0x5b3eaaa: jmp 0x5b3eac4
// asm:   0x5b3edee: nop 
// asm:   0x5b3ee61: jmp 0x5b3f36f
// asm:   0x5b3ee70: mov rdi, rbp
// asm:   0x5b3ee73: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b3ee87: jmp 0x5b3ee9b
// asm:   0x5b3ee89: jmp 0x5b3ee9b
// asm:   0x5b3ee8b: jmp 0x5b3ee91
// asm:   0x5b3ee8d: jmp 0x5b3ee91
// asm:   0x5b3ee8f: jmp 0x5b3ee91
// asm:   0x5b3ee91: mov rbp, rdx
// asm:   0x5b3ee94: mov rbx, rax
// asm:   0x5b3ee97: jmp 0x5b3eed5
// asm:   0x5b3ee99: jmp 0x5b3ee9b
// asm:   0x5b3ee9b: mov rbp, rdx
// asm:   0x5b3ee9e: mov rbx, rax
// asm:   0x5b3eea1: cmp ebp, 1
// asm:   0x5b3eea4: jne 0x5b3eecb
// asm:   0x5b3eea6: mov rdi, rbx
// asm:   0x5b3eea9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b3eeae: mov rbp, qword ptr [rax]
// asm:   0x5b3eeb1: mov qword ptr [rsp + 0x60], rbp
// asm:   0x5b3eeb6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3eebb: xor ebx, ebx
// asm:   0x5b3eebd: mov r12b, 1
// asm:   0x5b3eec0: jmp 0x5b3ee39
// asm:   0x5b3eec5: mov rbp, rdx
// asm:   0x5b3eec8: mov rbx, rax
// asm:   0x5b3eecb: lea rdi, [rsp + 0x60]
// asm:   0x5b3eed0: call 0x2fd6d20  ; il2cpp_runtime_helper_02fd6d20()
// asm:   0x5b3eed5: cmp ebp, 1
// asm:   0x5b3eed8: jne 0x5b3f3eb
// asm:   0x5b3eede: mov rdi, rbx
// asm:   0x5b3eee1: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b3eee6: mov rbx, rax
// asm:   0x5b3eee9: lea rdi, [rip + 0x17391d0]  ; TypeInfo_System_Exception
// asm:   0x5b3eef0: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b3eef5: mov rcx, qword ptr [rbx]
// asm:   0x5b3eef8: mov rsi, qword ptr [rcx]
// asm:   0x5b3eefb: mov rdi, rax
// asm:   0x5b3eefe: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5b3ef03: test al, al
// asm:   0x5b3ef05: je 0x5b3f39d
// asm:   0x5b3ef0b: mov rbx, qword ptr [rbx]
// asm:   0x5b3ef0e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3ef13: mov rdi, qword ptr [rsp + 0x10]
// asm:   0x5b3ef18: mov rsi, rbx
// asm:   0x5b3ef1b: call 0x5b3dad0  ; Settings_SandboxGameCreateConfiguration__SetError()
// asm:   0x5b3ef20: jmp 0x5b3ecc0
// asm:   0x5b3f36f: lea rax, [rip + 0x174f782]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5b3f376: mov rsi, qword ptr [rax]
// asm:   0x5b3f379: lea rdi, [rsp + 0x30]
// asm:   0x5b3f37e: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b3f383: test r12b, r12b
// asm:   0x5b3f386: mov rbp, qword ptr [rsp + 8]
// asm:   0x5b3f38b: jne 0x5b3ef3e
// asm:   0x5b3f391: jmp 0x5b3f35a
// asm:   0x5b3f39d: mov edi, 8
// asm:   0x5b3f3a2: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5b3f3a7: mov rcx, qword ptr [rbx]
// asm:   0x5b3f3aa: mov qword ptr [rax], rcx
// asm:   0x5b3f3ad: lea rsi, [rip + 0x12ee14c]
// asm:   0x5b3f3b4: mov rdi, rax
// asm:   0x5b3f3b7: xor edx, edx
// asm:   0x5b3f3b9: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5b3f3be: mov rdi, rax
// asm:   0x5b3f3c1: call 0x2ab61e0  ; __clang_call_terminate()
// asm:   0x5b3f3c6: jmp 0x5b3f3e5
// asm:   0x5b3f3c8: jmp 0x5b3f3e5
// asm:   0x5b3f3ca: jmp 0x5b3f3cc
// asm:   0x5b3f3cc: mov rbp, rdx
// asm:   0x5b3f3cf: mov rbx, rax
// asm:   0x5b3f3d2: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3f3d7: jmp 0x5b3f3eb
// asm:   0x5b3f3d9: jmp 0x5b3f3e5
// asm:   0x5b3f3db: jmp 0x5b3f3e5
// asm:   0x5b3f3dd: jmp 0x5b3f3e5
// asm:   0x5b3f3df: jmp 0x5b3f3e5
// asm:   0x5b3f3e1: jmp 0x5b3f3e5
// asm:   0x5b3f3e3: jmp 0x5b3f3e5
// asm:   0x5b3f3e5: mov rbp, rdx
// asm:   0x5b3f3e8: mov rbx, rax
// asm:   0x5b3f3eb: cmp ebp, 1
// asm:   0x5b3f3ee: jne 0x5b3f430
// asm:   0x5b3f3f0: mov rdi, rbx
// asm:   0x5b3f3f3: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b3f3f8: mov rbx, qword ptr [rax]
// asm:   0x5b3f3fb: mov qword ptr [rsp + 0x90], rbx
// asm:   0x5b3f403: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3f408: lea rax, [rip + 0x174f6e9]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5b3f40f: mov rsi, qword ptr [rax]
// asm:   0x5b3f412: lea rdi, [rsp + 0x30]
// asm:   0x5b3f417: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b3f41c: test rbx, rbx
// asm:   0x5b3f41f: je 0x5b3ef39
// asm:   0x5b3f425: mov rdi, rbx
// asm:   0x5b3f428: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b3f42d: mov rbx, rax
// asm:   0x5b3f430: lea rdi, [rsp + 0x90]
// asm:   0x5b3f438: call 0x2fd6d50  ; il2cpp_runtime_helper_02fd6d50()
// asm:   0x5b3f43d: mov rdi, rbx
// asm:   0x5b3f440: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b3f445: mov rdi, rax
// asm:   0x5b3f448: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *
Settings_SandboxGameCreateConfiguration__SyncAddonSettings
          (Settings_SandboxGameCreateConfiguration_o *__this,Settings_InGameSet_o *settings,MethodInfo *method
          )

{
  uint32_t uVar1;
  uint uVar2;
  Settings_InGameGeneralSettings_o *pSVar3;
  Settings_ListSetting_StringSetting__o *pSVar4;
  System_Collections_Generic_List_T__o *source;
  Il2CppObject *pIVar5;
  System_String_o *addonName;
  Settings_InGameAddonSettings_o *pSVar6;
  Il2CppObject *key;
  bool bVar7;
  System_Func_StringSetting__bool__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Func_StringSetting__string__o *__this_01;
  System_Collections_Generic_IEnumerable_TResult__o *source_01;
  System_Linq_IOrderedEnumerable_TSource__o *source_02;
  System_Collections_Generic_List_TSource__o *__this_02;
  System_String_array *value;
  MethodInfo *pMVar8;
  Settings_SandboxGameCreateConfiguration___c__DisplayClass25_0_o *__this_03;
  System_Func_string__o *__this_04;
  System_String_o *value_00;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *pSVar9;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar10;
  System_Object_array *pSVar11;
  System_Collections_Generic_Dictionary_object__object__o *pSVar12;
  ulong uVar13;
  System_Type_o *left;
  Settings_BaseSetting_o *pSVar14;
  System_Type_o *right;
  Settings_BaseSetting_o *source_03;
  Settings_SandboxGameCreateConfiguration___c_StaticFields *pSVar15;
  System_Func_TSource__TKey__o *__this_05;
  int iVar16;
  MethodInfo *method_00;
  MethodInfo *pMVar17;
  MethodInfo *method_01;
  ulong uVar18;
  System_Collections_Generic_Dictionary_object__object__o *local_f0;
  System_Collections_Generic_Dictionary_object__object__o *local_e0;
  Settings_BaseSetting_o *local_d8;
  MethodInfo *local_d0;
  undefined1 local_c8 [8];
  System_Collections_Generic_Dictionary_Enumerator_object__object__o *pSStack_c0;
  System_String_o *local_b8;
  Settings_InGameSet_o *local_a8;
  System_Collections_Generic_Dictionary_object__object__o *local_a0;
  undefined1 local_98 [16];
  System_String_o *local_88;
  Il2CppObject *pIStack_80;
  int32_t local_78;
  undefined4 uStack_74;
  System_Object_array *local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 local_58 [8];
  System_Collections_Generic_Dictionary_Enumerator_object__object__o *pSStack_50;
  System_String_o *local_48;
  Il2CppObject *pIStack_40;
  undefined8 local_38;
  
  if (Il2CppMethodInitialized_07547265 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Keys
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderBy_string_string_71a8728);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_StringSetting_string)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_BaseSetting_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_BaseSetting_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_BaseSetting_get_Curren
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_StringSetting_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_StringSetting_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_KeyValuePair_string_Dictionary_string_BaseSetting_get_Key
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_KeyValuePair_string_Dictionary_string_BaseSetting_get_Value
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SandboxGameCreateConfiguration_c_SyncAddonSettings_b__25_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SandboxGameCreateConfiguration_c_SyncAddonSettings_b__25_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SandboxGameCreateConfiguration_c_SyncAddonSettings_b__25_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SandboxGameCreateConfiguration_c__DisplayClass25_0_SyncAddonSettings_b__3)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Settings_SandboxGameCreateConfiguration_c__DisplayClass25_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SandboxGameCreateConfiguration_c);
    il2cpp_codegen_initialize_runtime_metadata(&"|");
    Il2CppMethodInitialized_07547265 = '\x01';
  }
  local_c8 = (undefined1  [8])0x0;
  pSStack_c0 = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)0x0;
  local_b8 = (System_String_o *)0x0;
  local_48 = (System_String_o *)0x0;
  pIStack_40 = (Il2CppObject *)0x0;
  local_58 = (undefined1  [8])0x0;
  pSStack_50 = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)0x0;
  local_38._0_4_ = 0;
  local_38._4_4_ = 0;
  local_a0 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  local_d8 = (Settings_BaseSetting_o *)0x0;
  if (settings == (Settings_InGameSet_o *)0x0) {
    pSVar9 = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting);
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_object__object__o *)pSVar9,
               (MethodInfo_4AAC8D0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_ctor);
    return pSVar9;
  }
  pSVar3 = (settings->fields).General;
  if ((pSVar3 == (Settings_InGameGeneralSettings_o *)0x0) ||
     (pSVar4 = (pSVar3->fields).Addons, pSVar4 == (Settings_ListSetting_StringSetting__o *)0x0))
  goto label_05b3f253;
  source = (pSVar4->fields)._value;
  if ((TypeInfo_Settings_SandboxGameCreateConfiguration_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_SandboxGameCreateConfiguration_c);
    pSVar15 = TypeInfo_Settings_SandboxGameCreateConfiguration_c->static_fields;
    __this_00 = pSVar15->__9__25_0;
  }
  else {
    pSVar15 = TypeInfo_Settings_SandboxGameCreateConfiguration_c->static_fields;
    __this_00 = pSVar15->__9__25_0;
  }
  if (__this_00 == (System_Func_StringSetting__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Settings_SandboxGameCreateConfiguration_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_SandboxGameCreateConfiguration_c);
      pSVar15 = TypeInfo_Settings_SandboxGameCreateConfiguration_c->static_fields;
    }
    pIVar5 = (Il2CppObject *)pSVar15->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_StringSetting_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_00,pIVar5,
               (intptr_t)MethodInfo_Settings_SandboxGameCreateConfiguration_c_SyncAddonSettings_b__25_0,
               (MethodInfo_4F19300 *)0x0);
    pSVar15 = TypeInfo_Settings_SandboxGameCreateConfiguration_c->static_fields;
    pSVar15->__9__25_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&pSVar15->__9__25_0);
  }
  source_00 = System_Linq_Enumerable__Where_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__bool__o *)__this_00,
                         (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_StringSetting);
  if ((TypeInfo_Settings_SandboxGameCreateConfiguration_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_SandboxGameCreateConfiguration_c);
    pSVar15 = TypeInfo_Settings_SandboxGameCreateConfiguration_c->static_fields;
    __this_01 = pSVar15->__9__25_1;
  }
  else {
    pSVar15 = TypeInfo_Settings_SandboxGameCreateConfiguration_c->static_fields;
    __this_01 = pSVar15->__9__25_1;
  }
  if (__this_01 == (System_Func_StringSetting__string__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Settings_SandboxGameCreateConfiguration_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_SandboxGameCreateConfiguration_c);
      pSVar15 = TypeInfo_Settings_SandboxGameCreateConfiguration_c->static_fields;
    }
    pIVar5 = (Il2CppObject *)pSVar15->__9;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_StringSetting_string);
    System_Func_object__object____ctor
              ((System_Func_object__object__o *)__this_01,pIVar5,
               (intptr_t)MethodInfo_Settings_SandboxGameCreateConfiguration_c_SyncAddonSettings_b__25_1,
               (MethodInfo_4F19B50 *)0x0);
    pSVar15 = TypeInfo_Settings_SandboxGameCreateConfiguration_c->static_fields;
    pSVar15->__9__25_1 = __this_01;
    Il2CppCodeGenWriteBarrier(&pSVar15->__9__25_1);
  }
  source_01 = System_Linq_Enumerable__Select_object__object_
                        (source_00,(System_Func_TSource__TResult__o *)__this_01,
                         (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_StringSetting_string);
  if ((TypeInfo_Settings_SandboxGameCreateConfiguration_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_SandboxGameCreateConfiguration_c);
    pSVar15 = TypeInfo_Settings_SandboxGameCreateConfiguration_c->static_fields;
    __this_05 = (System_Func_TSource__TKey__o *)pSVar15->__9__25_2;
    if (__this_05 != (System_Func_TSource__TKey__o *)0x0) goto label_05b3eb5e;
label_05b3f274:
    if ((TypeInfo_Settings_SandboxGameCreateConfiguration_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_SandboxGameCreateConfiguration_c);
      pSVar15 = TypeInfo_Settings_SandboxGameCreateConfiguration_c->static_fields;
    }
    pIVar5 = (Il2CppObject *)pSVar15->__9;
    __this_05 = (System_Func_TSource__TKey__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
    System_Func_object__object____ctor
              ((System_Func_object__object__o *)__this_05,pIVar5,
               (intptr_t)MethodInfo_Settings_SandboxGameCreateConfiguration_c_SyncAddonSettings_b__25_2,
               (MethodInfo_4F19B50 *)0x0);
    pSVar15 = TypeInfo_Settings_SandboxGameCreateConfiguration_c->static_fields;
    pSVar15->__9__25_2 = (System_Func_string__string__o *)__this_05;
    Il2CppCodeGenWriteBarrier(&pSVar15->__9__25_2);
    if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor != 0) goto label_05b3eb75;
label_05b3f2e9:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
    if (g_data_075435b6 != '\0') goto label_05b3eb82;
label_05b3f2fb:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    g_data_075435b6 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    pSVar15 = TypeInfo_Settings_SandboxGameCreateConfiguration_c->static_fields;
    __this_05 = (System_Func_TSource__TKey__o *)pSVar15->__9__25_2;
    if (__this_05 == (System_Func_TSource__TKey__o *)0x0) goto label_05b3f274;
label_05b3eb5e:
    if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) goto label_05b3f2e9;
label_05b3eb75:
    if (g_data_075435b6 == '\0') goto label_05b3f2fb;
label_05b3eb82:
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  source_02 = System_Linq_Enumerable__OrderBy_object__object__34f2050
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source_01,__this_05,
                         (System_Collections_Generic_IComparer_TKey__o *)
                         TypeInfo_System_StringComparer->static_fields->s_ordinal,
                         (MethodInfo_34F2050 *)MethodInfo_System_Linq_Enumerable_OrderBy_string_string_71a8728
                        );
  __this_02 = System_Linq_Enumerable__ToList_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source_02,
                         (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_string);
  if (__this_02 != (System_Collections_Generic_List_TSource__o *)0x0) {
    value = (System_String_array *)
            System_Collections_Generic_List_object___ToArray
                      ((System_Collections_Generic_List_object__o *)__this_02,
                       (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
    pMVar8 = (MethodInfo *)System_String__Join("|",value,(MethodInfo *)0x0);
    pMVar17 = pMVar8;
    bVar7 = System_String__op_Equality
                      ((__this->fields)._cachedAddonSelectionKey,(System_String_o *)pMVar8,(MethodInfo *)0x0);
    local_a8 = settings;
    if ((bVar7) &&
       (pSVar9 = (__this->fields)._cachedAddonSettings,
       pSVar9 != (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0)) {
      local_f0 = (System_Collections_Generic_Dictionary_object__object__o *)
                 Settings_SandboxGameCreateConfiguration__CloneNestedDictionary(pSVar9,pMVar17);
    }
    else {
      local_d0 = pMVar8;
      local_f0 = (System_Collections_Generic_Dictionary_object__object__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting
                           );
      System_Collections_Generic_Dictionary_object__object____ctor
                (local_f0,(MethodInfo_4AAC8D0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_ctor
                );
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_98,
                 (System_Collections_Generic_List_object__o *)__this_02,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      local_b8 = local_88;
      local_c8 = (undefined1  [8])local_98._0_8_;
      pSStack_c0 = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_98._8_8_;
      local_68 = 0;
      local_60 = local_c8;
      while (bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)local_c8,
                                (MethodInfo_4C45C50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext), bVar7)
      {
        __this_03 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_Settings_SandboxGameCreateConfiguration_c__DisplayClass25_0);
        System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
        if (__this_03 == (Settings_SandboxGameCreateConfiguration___c__DisplayClass25_0_o *)0x0) {
          ThrowNullReferenceException();
        }
        (__this_03->fields).addonName = local_b8;
        Il2CppCodeGenWriteBarrier(&(__this_03->fields).addonName);
        __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string);
        System_Func_object____ctor
                  ((System_Func_object__o *)__this_04,(Il2CppObject *)__this_03,
                   (intptr_t)
                   MethodInfo_Settings_SandboxGameCreateConfiguration_c__DisplayClass25_0_SyncAddonSettings_b__3
                   ,(MethodInfo_4F0C6A0 *)0x0);
        value_00 = Settings_SandboxGameCreateConfiguration__SafeContent(__this,__this_04,method_00);
        bVar7 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
        if (!bVar7) {
          addonName = (__this_03->fields).addonName;
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          pSVar9 = CustomLogic_CustomLogicManager__GetAddonSettingsGrouped
                             (addonName,value_00,(MethodInfo *)0x0);
          if (pSVar9 == (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)
                        0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_98,
                     (System_Collections_Generic_Dictionary_object__object__o *)pSVar9,
                     (MethodInfo_4AAD970 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_GetEnumerator
                    );
          local_38._0_4_ = local_78;
          local_38._4_4_ = uStack_74;
          local_48 = local_88;
          pIStack_40 = pIStack_80;
          local_58 = (undefined1  [8])local_98._0_8_;
          pSStack_50 = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_98._8_8_;
          local_98._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          local_98._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_58;
          if (local_f0 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            bVar7 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                              ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_58,
                               (MethodInfo_4CE66D0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_BaseSetting_MoveNext
                              );
            if (bVar7) {
              ThrowNullReferenceException();
            }
          }
          else {
            while (bVar7 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                                     ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)
                                      local_58,(MethodInfo_4CE66D0 *)
                                               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_BaseSetting_MoveNext
                                     ), bVar7) {
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (local_f0,(Il2CppObject *)local_48,pIStack_40,
                         (MethodInfo_4AAD4C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_set_Item
                        );
            }
          }
          System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                    ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_58,
                     (MethodInfo_4CE67F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_BaseSetting_Dispose
                    );
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_c8,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      (__this->fields)._cachedAddonSelectionKey = (System_String_o *)local_d0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedAddonSelectionKey);
      (__this->fields)._cachedAddonSettings =
           (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)local_f0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._cachedAddonSettings);
      settings = local_a8;
    }
    pSVar6 = (settings->fields).Addons;
    if (pSVar6 != (Settings_InGameAddonSettings_o *)0x0) {
      local_e0 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar6->fields).Current;
      if (local_e0 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        local_e0 = (System_Collections_Generic_Dictionary_object__object__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting
                             );
        System_Collections_Generic_Dictionary_object__object____ctor
                  (local_e0,(MethodInfo_4AAC8D0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_ctor
                  );
      }
      if (local_f0 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pSVar10 = System_Collections_Generic_Dictionary_object__object___get_Keys
                            (local_f0,(MethodInfo_4AAD0F0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Keys
                            );
        pSVar11 = System_Linq_Enumerable__ToArray_object_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar10,
                             (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
        if (pSVar11 != (System_Object_array *)0x0) {
          iVar16 = (int)pSVar11->max_length;
          if (local_e0 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            if (0 < iVar16) goto label_05b3f253;
          }
          else if (0 < iVar16) {
            pMVar17 = (MethodInfo *)(pSVar11->max_length & 0xffffffff);
            pMVar8 = (MethodInfo *)0x0;
            local_70 = pSVar11;
            do {
              if (pMVar17 <= pMVar8) {
label_05b3f393:
                ThrowIndexOutOfRangeException();
              }
              pIVar5 = local_70->m_Items[(long)pMVar8];
              local_d0 = pMVar8;
              bVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                (local_e0,pIVar5,(Il2CppObject **)&local_a0,
                                 (MethodInfo_4AAF440 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_TryGetValue
                                );
              if (bVar7) {
                pSVar12 = (System_Collections_Generic_Dictionary_object__object__o *)
                          System_Collections_Generic_Dictionary_object__object___get_Item
                                    (local_f0,pIVar5,
                                     (MethodInfo_4AAD450 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Item
                                    );
                if (pSVar12 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                goto label_05b3f253;
                pSVar10 = System_Collections_Generic_Dictionary_object__object___get_Keys
                                    (pSVar12,(MethodInfo_4AAD0F0 *)
                                             MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Keys
                                    );
                pSVar11 = System_Linq_Enumerable__ToArray_object_
                                    ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar10,
                                     (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
                if (pSVar11 == (System_Object_array *)0x0) goto label_05b3f253;
                if (0 < (int)pSVar11->max_length) {
                  uVar13 = pSVar11->max_length & 0xffffffff;
                  uVar18 = 0;
                  do {
                    if (uVar13 <= uVar18) goto label_05b3f393;
                    if (local_a0 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                    goto label_05b3f253;
                    key = pSVar11->m_Items[uVar18];
                    bVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                      (local_a0,key,(Il2CppObject **)&local_d8,
                                       (MethodInfo_4AAF440 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_TryGetValue
                                      );
                    if (bVar7) {
                      if (local_d8 == (Settings_BaseSetting_o *)0x0) goto label_05b3f253;
                      left = System_Object__GetType((Il2CppObject *)local_d8,(MethodInfo *)0x0);
                      pSVar12 = (System_Collections_Generic_Dictionary_object__object__o *)
                                System_Collections_Generic_Dictionary_object__object___get_Item
                                          (local_f0,pIVar5,
                                           (MethodInfo_4AAD450 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Item
                                          );
                      if ((pSVar12 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
                         (pSVar14 = System_Collections_Generic_Dictionary_object__object___get_Item
                                              (pSVar12,key,
                                               (MethodInfo_4AAD450 *)
                                               MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item
                                              ), pSVar14 == (Settings_BaseSetting_o *)0x0)) goto label_05b3f253;
                      right = System_Object__GetType((Il2CppObject *)pSVar14,(MethodInfo *)0x0);
                      if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init(g_data_075567a8);
                      }
                      bVar7 = System_Type__op_Inequality(left,right,(MethodInfo *)0x0);
                      if (!bVar7) {
                        pSVar12 = (System_Collections_Generic_Dictionary_object__object__o *)
                                  System_Collections_Generic_Dictionary_object__object___get_Item
                                            (local_f0,pIVar5,
                                             (MethodInfo_4AAD450 *)
                                             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Item
                                            );
                        if (((pSVar12 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
                            (source_03 = System_Collections_Generic_Dictionary_object__object___get_Item
                                                   (pSVar12,key,
                                                    (MethodInfo_4AAD450 *)
                                                    MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_get_Item
                                                   ), pSVar14 = local_d8,
                            source_03 == (Settings_BaseSetting_o *)0x0)) ||
                           (local_d8 == (Settings_BaseSetting_o *)0x0)) goto label_05b3f253;
                        (local_d8->fields).InspectorMetadata = (source_03->fields).InspectorMetadata;
                        Il2CppCodeGenWriteBarrier(&(local_d8->fields).InspectorMetadata);
                        Settings_SandboxGameCreateConfiguration__CopyInspectorBounds
                                  (source_03,pSVar14,method_01);
                        pSVar12 = (System_Collections_Generic_Dictionary_object__object__o *)
                                  System_Collections_Generic_Dictionary_object__object___get_Item
                                            (local_f0,pIVar5,
                                             (MethodInfo_4AAD450 *)
                                             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_get_Item
                                            );
                        if (pSVar12 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                        goto label_05b3f253;
                        System_Collections_Generic_Dictionary_object__object___set_Item
                                  (pSVar12,key,(Il2CppObject *)local_d8,
                                   (MethodInfo_4AAD4C0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_set_Item
                                  );
                      }
                    }
                    uVar18 = uVar18 + 1;
                    uVar2 = (uint)pSVar11->max_length;
                    uVar13 = (ulong)uVar2;
                  } while ((long)uVar18 < (long)(int)uVar2);
                }
              }
              pMVar8 = (MethodInfo *)((long)&local_d0->methodPointer + 1);
              uVar2 = (uint)local_70->max_length;
              pMVar17 = (MethodInfo *)(ulong)uVar2;
            } while ((long)pMVar8 < (long)(int)uVar2);
          }
          pSVar6 = (local_a8->fields).Addons;
          if (pSVar6 != (Settings_InGameAddonSettings_o *)0x0) {
            (pSVar6->fields).Current =
                 (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)local_f0;
            Il2CppCodeGenWriteBarrier(&(pSVar6->fields).Current);
            return (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)
                   local_f0;
          }
        }
      }
    }
  }
label_05b3f253:
  ThrowNullReferenceException();
}


// Settings.SandboxGameCreateConfiguration$$ApplyMiscDefaults
// il2cpp: void Settings_SandboxGameCreateConfiguration__ApplyMiscDefaults (Settings_InGameMiscSettings_o* misc, const MethodInfo* method);
// 0x5b3fce0

void Settings_SandboxGameCreateConfiguration__ApplyMiscDefaults
               (Settings_InGameMiscSettings_o *misc,MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  Settings_FloatSetting_o *__this;
  Settings_IntSetting_o *__this_00;
  
  if (Il2CppMethodInitialized_07547266 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_07547266 = '\x01';
  }
  if (misc == (Settings_InGameMiscSettings_o *)0x0) {
    return;
  }
  pSVar1 = (misc->fields).EndlessRespawnEnabled;
  if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
    Settings_TypedSetting_bool___set_Value
              ((Settings_TypedSetting_bool__o *)pSVar1,false,
               (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
    __this = (misc->fields).EndlessRespawnTime;
    if (__this != (Settings_FloatSetting_o *)0x0) {
      Settings_TypedSetting_float___set_Value
                ((Settings_TypedSetting_float__o *)__this,5.0,
                 (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
      pSVar1 = (misc->fields).ThunderspearPVP;
      if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)pSVar1,false,
                   (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        __this_00 = (misc->fields).PVP;
        if (__this_00 != (Settings_IntSetting_o *)0x0) {
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)__this_00,0,
                     (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          pSVar1 = (misc->fields).AllowBlades;
          if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
            Settings_TypedSetting_bool___set_Value
                      ((Settings_TypedSetting_bool__o *)pSVar1,true,
                       (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
            pSVar1 = (misc->fields).AllowAHSS;
            if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
              Settings_TypedSetting_bool___set_Value
                        ((Settings_TypedSetting_bool__o *)pSVar1,true,
                         (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
              pSVar1 = (misc->fields).AllowAPG;
              if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
                Settings_TypedSetting_bool___set_Value
                          ((Settings_TypedSetting_bool__o *)pSVar1,true,
                           (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                pSVar1 = (misc->fields).AllowThunderspears;
                if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
                  Settings_TypedSetting_bool___set_Value
                            ((Settings_TypedSetting_bool__o *)pSVar1,true,
                             (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                  pSVar1 = (misc->fields).AllowUnarmed;
                  if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
                    Settings_TypedSetting_bool___set_Value
                              ((Settings_TypedSetting_bool__o *)pSVar1,false,
                               (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                    pSVar1 = (misc->fields).AllowCivilian;
                    if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
                      Settings_TypedSetting_bool___set_Value
                                ((Settings_TypedSetting_bool__o *)pSVar1,false,
                                 (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                      pSVar1 = (misc->fields).AllowPlayerTitans;
                      if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
                        Settings_TypedSetting_bool___set_Value
                                  ((Settings_TypedSetting_bool__o *)pSVar1,true,
                                   (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                        pSVar1 = (misc->fields).AllowShifterSpecials;
                        if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
                          Settings_TypedSetting_bool___set_Value
                                    ((Settings_TypedSetting_bool__o *)pSVar1,true,
                                     (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                          pSVar1 = (misc->fields).AllowShifters;
                          if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
                            Settings_TypedSetting_bool___set_Value
                                      ((Settings_TypedSetting_bool__o *)pSVar1,false,
                                       (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                            pSVar1 = (misc->fields).AllowVoteKicking;
                            if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
                              Settings_TypedSetting_bool___set_Value
                                        ((Settings_TypedSetting_bool__o *)pSVar1,false,
                                         (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value
                                        );
                              pSVar1 = (misc->fields).Horses;
                              if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
                                Settings_TypedSetting_bool___set_Value
                                          ((Settings_TypedSetting_bool__o *)pSVar1,false,
                                           (MethodInfo_42DA020 *)
                                           MethodInfo_Settings_TypedSetting_bool_set_Value);
                                pSVar1 = (misc->fields).APGPVP;
                                if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
                                  Settings_TypedSetting_bool___set_Value
                                            ((Settings_TypedSetting_bool__o *)pSVar1,false,
                                             (MethodInfo_42DA020 *)
                                             MethodInfo_Settings_TypedSetting_bool_set_Value);
                                  pSVar1 = (misc->fields).RealismMode;
                                  if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
                                    Settings_TypedSetting_bool___set_Value
                                              ((Settings_TypedSetting_bool__o *)pSVar1,false,
                                               (MethodInfo_42DA020 *)
                                               MethodInfo_Settings_TypedSetting_bool_set_Value);
                                    pSVar1 = (misc->fields).GlobalMinimapDisable;
                                    if (pSVar1 != (Settings_BoolSetting_o *)0x0) {
                                      Settings_TypedSetting_bool___set_Value
                                                ((Settings_TypedSetting_bool__o *)pSVar1,false,
                                                 (MethodInfo_42DA020 *)
                                                 MethodInfo_Settings_TypedSetting_bool_set_Value);
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Settings.SandboxGameCreateConfiguration$$CopyInspectorBounds
// il2cpp: void Settings_SandboxGameCreateConfiguration__CopyInspectorBounds (Settings_BaseSetting_o* source, Settings_BaseSetting_o* destination, const MethodInfo* method);
// 0x5b3ff10

void Settings_SandboxGameCreateConfiguration__CopyInspectorBounds
               (Settings_BaseSetting_o *source,Settings_BaseSetting_o *destination,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Settings_BaseSetting_c *pSVar3;
  Settings_BaseSetting_o *pSVar4;
  
  if (Il2CppMethodInitialized_07547267 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    Il2CppMethodInitialized_07547267 = '\x01';
  }
  if (source != (Settings_BaseSetting_o *)0x0) {
    pSVar3 = source->klass;
    bVar1 = (pSVar3->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if ((((bVar2 <= bVar1) && (destination != (Settings_BaseSetting_o *)0x0)) &&
        ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_IntSetting)) &&
       ((bVar2 <= (destination->klass->_2).typeHierarchyDepth &&
        ((destination->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
         (Il2CppClass *)TypeInfo_Settings_IntSetting)))) {
      (*(uint64_t *)((char *)destination + 0x20)) = (*(uint64_t *)((char *)source + 0x20));
      return;
    }
    bVar2 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
    if (bVar2 <= bVar1) {
      pSVar4 = (Settings_BaseSetting_o *)0x0;
      if ((pSVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Settings_FloatSetting) {
        pSVar4 = source;
      }
      if (((destination != (Settings_BaseSetting_o *)0x0) && (pSVar4 != (Settings_BaseSetting_o *)0x0)) &&
         ((bVar2 <= (destination->klass->_2).typeHierarchyDepth &&
          ((destination->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
           (Il2CppClass *)TypeInfo_Settings_FloatSetting)))) {
        (*(uint64_t *)((char *)destination + 0x20)) = (*(uint64_t *)((char *)pSVar4 + 0x20));
        return;
      }
    }
  }
  return;
}


// Settings.SandboxGameCreateConfiguration$$NormalizeMap
// il2cpp: void Settings_SandboxGameCreateConfiguration__NormalizeMap (Settings_SandboxGameCreateConfiguration_o* __this, Settings_InGameSet_o* settings, const MethodInfo* method);
// 0x5b3de70

void Settings_SandboxGameCreateConfiguration__NormalizeMap
               (Settings_SandboxGameCreateConfiguration_o *__this,Settings_InGameSet_o *settings,
               MethodInfo *method)

{
  Settings_InGameGeneralSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  bool bVar3;
  System_Func_string____o *__this_00;
  System_String_array *pSVar4;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  System_String_o **ppSVar5;
  
  if (Il2CppMethodInitialized_07547268 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Contains_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_07547268 = '\x01';
  }
  if (Il2CppMethodInitialized_0754725c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_BuiltinLevels_GetMapCategories);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_array);
    Il2CppMethodInitialized_0754725c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_array);
  System_Func_object____ctor
            ((System_Func_object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Map_BuiltinLevels_GetMapCategories,(MethodInfo_4F0C6A0 *)0x0);
  pSVar4 = Settings_SandboxGameCreateConfiguration__SafeOptions(__this,__this_00,method_00);
  if (pSVar4 != (System_String_array *)0x0) {
    if (pSVar4->max_length == 0) {
      return;
    }
    if (((settings == (Settings_InGameSet_o *)0x0) ||
        (pSVar1 = (settings->fields).General, pSVar1 == (Settings_InGameGeneralSettings_o *)0x0)) ||
       (pSVar2 = (pSVar1->fields).MapCategory, pSVar2 == (Settings_StringSetting_o *)0x0)) goto label_05b3e057;
    bVar3 = System_Linq_Enumerable__Contains_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,
                       (Il2CppObject *)(pSVar2->fields)._value,
                       (MethodInfo_34E5FD0 *)MethodInfo_System_Linq_Enumerable_Contains_string);
    method_01 = extraout_RDX;
    if (!bVar3) {
      pSVar1 = (settings->fields).General;
      if (pSVar1 == (Settings_InGameGeneralSettings_o *)0x0) goto label_05b3e057;
      if ((int)pSVar4->max_length == 0) goto label_05b3e05c;
      pSVar2 = (pSVar1->fields).MapCategory;
      if (pSVar2 == (Settings_StringSetting_o *)0x0) goto label_05b3e057;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)pSVar4->m_Items[0],
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      method_01 = extraout_RDX_00;
    }
    pSVar1 = (settings->fields).General;
    if ((pSVar1 != (Settings_InGameGeneralSettings_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).MapCategory, pSVar2 != (Settings_StringSetting_o *)0x0)) {
      pSVar4 = Settings_SandboxGameCreateConfiguration__GetMapNames(__this,(pSVar2->fields)._value,method_01);
      pSVar1 = (settings->fields).General;
      if ((pSVar1 != (Settings_InGameGeneralSettings_o *)0x0) &&
         (pSVar2 = (pSVar1->fields).MapName, pSVar2 != (Settings_StringSetting_o *)0x0)) {
        bVar3 = System_Linq_Enumerable__Contains_object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,
                           (Il2CppObject *)(pSVar2->fields)._value,
                           (MethodInfo_34E5FD0 *)MethodInfo_System_Linq_Enumerable_Contains_string);
        if (bVar3) {
          return;
        }
        pSVar1 = (settings->fields).General;
        if ((pSVar1 != (Settings_InGameGeneralSettings_o *)0x0) && (pSVar4 != (System_String_array *)0x0)) {
          pSVar2 = (pSVar1->fields).MapName;
          if (pSVar4->max_length == 0) {
            ppSVar5 = *(System_String_o ***)(g_data_07556758 + 0xb8);
          }
          else {
            if ((int)pSVar4->max_length == 0) {
label_05b3e05c:
              ThrowIndexOutOfRangeException();
            }
            ppSVar5 = pSVar4->m_Items;
          }
          if (pSVar2 != (Settings_StringSetting_o *)0x0) {
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)*ppSVar5,
                       (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
            return;
          }
        }
      }
    }
  }
label_05b3e057:
  ThrowNullReferenceException();
}


// Settings.SandboxGameCreateConfiguration$$NormalizeMode
// il2cpp: void Settings_SandboxGameCreateConfiguration__NormalizeMode (Settings_SandboxGameCreateConfiguration_o* __this, Settings_InGameSet_o* settings, Map_MapScript_o* script, const MethodInfo* method);
// 0x5b3e070
// eh: try 0x5b3e2fc..0x5b3e3d2 -> pad 0x5b3e3e1 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5b3e3f4..0x5b3e457 -> pad 0x5b3e457 (+1 call sites) cleanup
// eh: try 0x5b3e45a..0x5b3e45f -> pad 0x5b3e467 catch (...) [compiler noexcept guard]
// asm: 42 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b3e204: jmp 0x5b3e431
// asm:   0x5b3e3d7: jmp 0x5b3e3e1
// asm:   0x5b3e3d9: jmp 0x5b3e3e1
// asm:   0x5b3e3db: jmp 0x5b3e3e1
// asm:   0x5b3e3dd: jmp 0x5b3e3e1
// asm:   0x5b3e3df: jmp 0x5b3e3e1
// asm:   0x5b3e3e1: mov rbx, rax
// asm:   0x5b3e3e4: cmp edx, 1
// asm:   0x5b3e3e7: jne 0x5b3e45f
// asm:   0x5b3e3e9: mov rdi, rbx
// asm:   0x5b3e3ec: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b3e3f1: mov rbx, rax
// asm:   0x5b3e3f4: lea rdi, [rip + 0x1739cc5]  ; TypeInfo_System_Exception
// asm:   0x5b3e3fb: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b3e400: mov rcx, qword ptr [rbx]
// asm:   0x5b3e403: mov rsi, qword ptr [rcx]
// asm:   0x5b3e406: mov rdi, rax
// asm:   0x5b3e409: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5b3e40e: test al, al
// asm:   0x5b3e410: je 0x5b3e436
// asm:   0x5b3e412: mov rbx, qword ptr [rbx]
// asm:   0x5b3e415: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3e41a: mov rdi, r14
// asm:   0x5b3e41d: mov rsi, rbx
// asm:   0x5b3e420: call 0x5b3dad0  ; Settings_SandboxGameCreateConfiguration__SetError()
// asm:   0x5b3e425: mov rax, qword ptr [r15]
// asm:   0x5b3e428: test rax, rax
// asm:   0x5b3e42b: jne 0x5b3e321
// asm:   0x5b3e436: mov edi, 8
// asm:   0x5b3e43b: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5b3e440: mov rcx, qword ptr [rbx]
// asm:   0x5b3e443: mov qword ptr [rax], rcx
// asm:   0x5b3e446: lea rsi, [rip + 0x12ef0b3]
// asm:   0x5b3e44d: mov rdi, rax
// asm:   0x5b3e450: xor edx, edx
// asm:   0x5b3e452: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5b3e457: mov rbx, rax
// asm:   0x5b3e45a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3e45f: mov rdi, rbx
// asm:   0x5b3e462: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b3e467: mov rdi, rax
// asm:   0x5b3e46a: call 0x2ab61e0  ; __clang_call_terminate()

void Settings_SandboxGameCreateConfiguration__NormalizeMode
               (Settings_SandboxGameCreateConfiguration_o *__this,Settings_InGameSet_o *settings,
               Map_MapScript_o *script,MethodInfo *method)

{
  Settings_SandboxGameCreateConfiguration___c__DisplayClass29_0_Fields *targetAddress;
  Settings_InGameSet_o *pSVar1;
  Settings_InGameGeneralSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  System_String_o *category;
  System_String_o *mapName;
  System_String_o *gameMode;
  Settings_InGameMiscSettings_o *settings_00;
  Settings_InGameModeSettings_o *pSVar6;
  bool bVar7;
  Settings_SandboxGameCreateConfiguration___c__DisplayClass29_0_o *__this_00;
  System_Func_string____o *__this_01;
  System_String_array *source;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_o **ppSVar8;
  
  if (Il2CppMethodInitialized_07547269 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Contains_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SandboxGameCreateConfiguration_c__DisplayClass29_0_NormalizeMode_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Settings_SandboxGameCreateConfiguration_c__DisplayClass29_0);
    Il2CppMethodInitialized_07547269 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Settings_SandboxGameCreateConfiguration_c__DisplayClass29_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Settings_SandboxGameCreateConfiguration___c__DisplayClass29_0_o *)0x0) {
    targetAddress = &__this_00->fields;
    (__this_00->fields).settings = settings;
    Il2CppCodeGenWriteBarrier(&targetAddress->settings);
    (__this_00->fields).script = script;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).script);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_array);
    System_Func_object____ctor
              ((System_Func_object__o *)__this_01,(Il2CppObject *)__this_00,
               (intptr_t)
               MethodInfo_Settings_SandboxGameCreateConfiguration_c__DisplayClass29_0_NormalizeMode_b__0,
               (MethodInfo_4F0C6A0 *)0x0);
    source = Settings_SandboxGameCreateConfiguration__SafeOptions(__this,__this_01,method_00);
    pSVar1 = (__this_00->fields).settings;
    if (((pSVar1 != (Settings_InGameSet_o *)0x0) &&
        (pSVar2 = (pSVar1->fields).General, pSVar2 != (Settings_InGameGeneralSettings_o *)0x0)) &&
       (pSVar3 = (pSVar2->fields).GameMode, pSVar3 != (Settings_StringSetting_o *)0x0)) {
      bVar7 = System_Linq_Enumerable__Contains_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (Il2CppObject *)(pSVar3->fields)._value,
                         (MethodInfo_34E5FD0 *)MethodInfo_System_Linq_Enumerable_Contains_string);
      if (!bVar7) {
        if (((targetAddress->settings == (Settings_InGameSet_o *)0x0) ||
            (pSVar2 = (targetAddress->settings->fields).General,
            pSVar2 == (Settings_InGameGeneralSettings_o *)0x0)) || (source == (System_String_array *)0x0))
        goto label_05b3e431;
        pSVar3 = (pSVar2->fields).GameMode;
        if (source->max_length == 0) {
          ppSVar8 = *(System_String_o ***)(g_data_07556758 + 0xb8);
        }
        else {
          if ((int)source->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          ppSVar8 = source->m_Items;
        }
        if (pSVar3 == (Settings_StringSetting_o *)0x0) goto label_05b3e431;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)*ppSVar8,
                   (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      }
      if (((targetAddress->settings != (Settings_InGameSet_o *)0x0) &&
          (pSVar2 = (targetAddress->settings->fields).General,
          pSVar2 != (Settings_InGameGeneralSettings_o *)0x0)) &&
         ((pSVar3 = (pSVar2->fields).GameMode, pSVar3 != (Settings_StringSetting_o *)0x0 &&
          (pSVar4 = (pSVar2->fields).PrevGameMode, pSVar4 != (Settings_StringSetting_o *)0x0)))) {
        method_01 = (MethodInfo *)(pSVar4->fields)._value;
        bVar7 = System_String__op_Inequality
                          ((pSVar3->fields)._value,(System_String_o *)method_01,(MethodInfo *)0x0);
        if (bVar7) {
          if (targetAddress->settings == (Settings_InGameSet_o *)0x0) goto label_05b3e431;
          Settings_SandboxGameCreateConfiguration__ApplyMiscDefaults
                    ((targetAddress->settings->fields).Misc,method_01);
          pSVar1 = targetAddress->settings;
          if (pSVar1 == (Settings_InGameSet_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar2 = (pSVar1->fields).General;
          if (pSVar2 == (Settings_InGameGeneralSettings_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar3 = (pSVar2->fields).MapCategory;
          if (pSVar3 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar4 = (pSVar2->fields).MapName;
          if (pSVar4 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar5 = (pSVar2->fields).GameMode;
          if (pSVar5 == (Settings_StringSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          category = (pSVar3->fields)._value;
          mapName = (pSVar4->fields)._value;
          gameMode = (pSVar5->fields)._value;
          settings_00 = (pSVar1->fields).Misc;
          if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
          }
          Map_BuiltinLevels__LoadSandboxMiscSettings(category,mapName,gameMode,settings_00,(MethodInfo *)0x0);
          if (targetAddress->settings == (Settings_InGameSet_o *)0x0) goto label_05b3e431;
          pSVar6 = (targetAddress->settings->fields).Mode;
          __this_02 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
          System_Collections_Generic_Dictionary_object__object____ctor
                    ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
                     (MethodInfo_4AAC8D0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
          if (pSVar6 == (Settings_InGameModeSettings_o *)0x0) goto label_05b3e431;
          (pSVar6->fields).Current = __this_02;
          Il2CppCodeGenWriteBarrier(&(pSVar6->fields).Current);
        }
        if ((((targetAddress->settings != (Settings_InGameSet_o *)0x0) &&
             (pSVar2 = (targetAddress->settings->fields).General,
             pSVar2 != (Settings_InGameGeneralSettings_o *)0x0)) &&
            (pSVar3 = (pSVar2->fields).GameMode, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
           (pSVar4 = (pSVar2->fields).PrevGameMode, pSVar4 != (Settings_StringSetting_o *)0x0)) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)(pSVar3->fields)._value,
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          return;
        }
      }
    }
  }
label_05b3e431:
  ThrowNullReferenceException();
}


// Settings.SandboxGameCreateConfiguration$$LoadMapScript
// il2cpp: Map_MapScript_o* Settings_SandboxGameCreateConfiguration__LoadMapScript (Settings_SandboxGameCreateConfiguration_o* __this, Settings_InGameSet_o* settings, const MethodInfo* method);
// 0x5b3d890
// eh: try 0x5b3d964..0x5b3da08 -> pad 0x5b3da08 (+10 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5b3da31..0x5b3daae -> pad 0x5b3dab3 (+1 call sites) cleanup
// eh: try 0x5b3dab6..0x5b3dabb -> pad 0x5b3dac3 catch (...) [compiler noexcept guard]
// asm: 53 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b3da08: jmp 0x5b3da1a
// asm:   0x5b3da0a: jmp 0x5b3da1a
// asm:   0x5b3da0c: jmp 0x5b3da1a
// asm:   0x5b3da0e: jmp 0x5b3da1a
// asm:   0x5b3da10: jmp 0x5b3da1a
// asm:   0x5b3da12: jmp 0x5b3da1a
// asm:   0x5b3da14: jmp 0x5b3da1a
// asm:   0x5b3da16: jmp 0x5b3da1a
// asm:   0x5b3da18: jmp 0x5b3da1a
// asm:   0x5b3da1a: mov rbx, rax
// asm:   0x5b3da1d: cmp edx, 1
// asm:   0x5b3da20: jne 0x5b3dabb
// asm:   0x5b3da26: mov rdi, rbx
// asm:   0x5b3da29: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b3da2e: mov rbx, rax
// asm:   0x5b3da31: lea rdi, [rip + 0x173a688]  ; TypeInfo_System_Exception
// asm:   0x5b3da38: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b3da3d: mov rcx, qword ptr [rbx]
// asm:   0x5b3da40: mov rsi, qword ptr [rcx]
// asm:   0x5b3da43: mov rdi, rax
// asm:   0x5b3da46: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5b3da4b: test al, al
// asm:   0x5b3da4d: je 0x5b3da8d
// asm:   0x5b3da4f: mov rbx, qword ptr [rbx]
// asm:   0x5b3da52: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3da57: test r15, r15
// asm:   0x5b3da5a: je 0x5b3daae
// asm:   0x5b3da5c: mov rax, qword ptr [rbp + 0x90]
// asm:   0x5b3da63: mov rax, qword ptr [rax + 0xb8]
// asm:   0x5b3da6a: mov rsi, qword ptr [rax]
// asm:   0x5b3da6d: mov rdi, r15
// asm:   0x5b3da70: add rdi, 0x40
// asm:   0x5b3da74: mov qword ptr [r15 + 0x40], rsi
// asm:   0x5b3da78: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5b3da7d: mov rdi, r14
// asm:   0x5b3da80: mov rsi, rbx
// asm:   0x5b3da83: call 0x5b3dad0  ; Settings_SandboxGameCreateConfiguration__SetError()
// asm:   0x5b3da88: jmp 0x5b3d9dd
// asm:   0x5b3da8d: mov edi, 8
// asm:   0x5b3da92: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5b3da97: mov rcx, qword ptr [rbx]
// asm:   0x5b3da9a: mov qword ptr [rax], rcx
// asm:   0x5b3da9d: lea rsi, [rip + 0x12efa5c]
// asm:   0x5b3daa4: mov rdi, rax
// asm:   0x5b3daa7: xor edx, edx
// asm:   0x5b3daa9: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5b3daae: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5b3dab3: mov rbx, rax
// asm:   0x5b3dab6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3dabb: mov rdi, rbx
// asm:   0x5b3dabe: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b3dac3: mov rdi, rax
// asm:   0x5b3dac6: call 0x2ab61e0  ; __clang_call_terminate()

Map_MapScript_o *
Settings_SandboxGameCreateConfiguration__LoadMapScript
          (Settings_SandboxGameCreateConfiguration_o *__this,Settings_InGameSet_o *settings,MethodInfo *method
          )

{
  System_String_o **targetAddress;
  Settings_InGameGeneralSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *name;
  Map_MapScriptOptions_o *pMVar4;
  bool bVar5;
  Map_MapScript_o *__this_00;
  System_String_o *pSVar6;
  
  if (Il2CppMethodInitialized_0754726a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScript);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_0754726a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScript);
  Map_MapScript___ctor(__this_00,(MethodInfo *)0x0);
  targetAddress = &(__this->fields)._MapDescription_k__BackingField;
  (__this->fields)._MapDescription_k__BackingField = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8)
  ;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if (settings == (Settings_InGameSet_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = (settings->fields).General;
  if (pSVar1 == (Settings_InGameGeneralSettings_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = (pSVar1->fields).MapCategory;
  if (pSVar2 == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar3 = (pSVar1->fields).MapName;
  if (pSVar3 == (Settings_StringSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar6 = (pSVar2->fields)._value;
  name = (pSVar3->fields)._value;
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  pSVar6 = Map_BuiltinLevels__LoadMap(pSVar6,name,(MethodInfo *)0x0);
  bVar5 = System_String__IsNullOrWhiteSpace(pSVar6,(MethodInfo *)0x0);
  if (bVar5) {
    if (__this_00 == (Map_MapScript_o *)0x0) {
      ThrowNullReferenceException();
    }
  }
  else {
    if (__this_00 == (Map_MapScript_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(__this_00->klass->vtable)._5_Deserialize.methodPtr)
              (__this_00,pSVar6,false,(__this_00->klass->vtable)._5_Deserialize.method);
  }
  pMVar4 = (__this_00->fields).Options;
  if ((pMVar4 == (Map_MapScriptOptions_o *)0x0) ||
     (pSVar6 = (pMVar4->fields).Description, pSVar6 == (System_String_o *)0x0)) {
    pSVar6 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8);
  }
  (__this->fields)._MapDescription_k__BackingField = pSVar6;
  Il2CppCodeGenWriteBarrier(targetAddress);
  return __this_00;
}


// Settings.SandboxGameCreateConfiguration$$SafeOptions
// il2cpp: System_String_array* Settings_SandboxGameCreateConfiguration__SafeOptions (Settings_SandboxGameCreateConfiguration_o* __this, System_Func_string____o* getter, const MethodInfo* method);
// 0x5b3cef0
// eh: try 0x5b3cf80..0x5b3d102 -> pad 0x5b3d110 (+9 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5b3d12b..0x5b3d19c -> pad 0x5b3d19c (+1 call sites) cleanup
// eh: try 0x5b3d19f..0x5b3d1a4 -> pad 0x5b3d1ac catch (...) [compiler noexcept guard]
// asm: 54 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b3cfb3: jmp 0x5b3cff6
// asm:   0x5b3d09b: jmp 0x5b3d0bc
// asm:   0x5b3d102: jmp 0x5b3d114
// asm:   0x5b3d104: jmp 0x5b3d114
// asm:   0x5b3d106: jmp 0x5b3d114
// asm:   0x5b3d108: jmp 0x5b3d114
// asm:   0x5b3d10a: jmp 0x5b3d114
// asm:   0x5b3d10c: jmp 0x5b3d114
// asm:   0x5b3d10e: jmp 0x5b3d114
// asm:   0x5b3d110: jmp 0x5b3d114
// asm:   0x5b3d112: jmp 0x5b3d114
// asm:   0x5b3d114: mov rbx, rax
// asm:   0x5b3d117: cmp edx, 1
// asm:   0x5b3d11a: jne 0x5b3d1a4
// asm:   0x5b3d120: mov rdi, rbx
// asm:   0x5b3d123: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b3d128: mov rbx, rax
// asm:   0x5b3d12b: lea rdi, [rip + 0x173af8e]  ; TypeInfo_System_Exception
// asm:   0x5b3d132: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b3d137: mov rcx, qword ptr [rbx]
// asm:   0x5b3d13a: mov rsi, qword ptr [rcx]
// asm:   0x5b3d13d: mov rdi, rax
// asm:   0x5b3d140: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5b3d145: test al, al
// asm:   0x5b3d147: je 0x5b3d17b
// asm:   0x5b3d149: mov rbx, qword ptr [rbx]
// asm:   0x5b3d14c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3d151: mov rdi, r14
// asm:   0x5b3d154: mov rsi, rbx
// asm:   0x5b3d157: call 0x5b3dad0  ; Settings_SandboxGameCreateConfiguration__SetError()
// asm:   0x5b3d15c: lea rdi, [rip + 0x17377d5]  ; TypeInfo_string_array
// asm:   0x5b3d163: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b3d168: mov rdi, rax
// asm:   0x5b3d16b: xor esi, esi
// asm:   0x5b3d16d: pop rbx
// asm:   0x5b3d16e: pop r12
// asm:   0x5b3d170: pop r13
// asm:   0x5b3d172: pop r14
// asm:   0x5b3d174: pop r15
// asm:   0x5b3d176: jmp 0x30d6180  ; SZArrayNew()
// asm:   0x5b3d17b: mov edi, 8
// asm:   0x5b3d180: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5b3d185: mov rcx, qword ptr [rbx]
// asm:   0x5b3d188: mov qword ptr [rax], rcx
// asm:   0x5b3d18b: lea rsi, [rip + 0x12f036e]
// asm:   0x5b3d192: mov rdi, rax
// asm:   0x5b3d195: xor edx, edx
// asm:   0x5b3d197: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5b3d19c: mov rbx, rax
// asm:   0x5b3d19f: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3d1a4: mov rdi, rbx
// asm:   0x5b3d1a7: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b3d1ac: mov rdi, rax
// asm:   0x5b3d1af: call 0x2ab61e0  ; __clang_call_terminate()

System_String_array *
Settings_SandboxGameCreateConfiguration__SafeOptions
          (Settings_SandboxGameCreateConfiguration_o *__this,System_Func_string____o *getter,
          MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  Il2CppObject *source;
  Settings_SandboxGameCreateConfiguration___c_StaticFields *pSVar2;
  System_Func_string__bool__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar3;
  System_String_array *pSVar4;
  
  if (Il2CppMethodInitialized_0754726b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Distinct_string_71a8388);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SandboxGameCreateConfiguration_c_SafeOptions_b__31_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SandboxGameCreateConfiguration_c);
    Il2CppMethodInitialized_0754726b = '\x01';
  }
  if (getter == (System_Func_string____o *)0x0) {
    ThrowNullReferenceException();
  }
  source = (Il2CppObject *)(*(code *)(getter->fields).invoke_impl)((getter->fields).method_code);
  if (source == (Il2CppObject *)0x0) {
    source = SZArrayNew(TypeInfo_string_array,0);
    uVar1 = (TypeInfo_Settings_SandboxGameCreateConfiguration_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Settings_SandboxGameCreateConfiguration_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_SandboxGameCreateConfiguration_c);
    pSVar2 = TypeInfo_Settings_SandboxGameCreateConfiguration_c->static_fields;
    __this_00 = pSVar2->__9__31_0;
  }
  else {
    pSVar2 = ((Il2CppClass *)TypeInfo_Settings_SandboxGameCreateConfiguration_c)->static_fields;
    __this_00 = pSVar2->__9__31_0;
  }
  if (__this_00 == (System_Func_string__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Settings_SandboxGameCreateConfiguration_c)->_2).cctor_finished_or_no_cctor
        == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_SandboxGameCreateConfiguration_c);
      pSVar2 = TypeInfo_Settings_SandboxGameCreateConfiguration_c->static_fields;
    }
    object = (Il2CppObject *)pSVar2->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_00,object,
               (intptr_t)MethodInfo_Settings_SandboxGameCreateConfiguration_c_SafeOptions_b__31_0,
               (MethodInfo_4F19300 *)0x0);
    pSVar2 = TypeInfo_Settings_SandboxGameCreateConfiguration_c->static_fields;
    pSVar2->__9__31_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&pSVar2->__9__31_0);
  }
  pSVar3 = System_Linq_Enumerable__Where_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (System_Func_TSource__bool__o *)__this_00,
                      (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_string);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_07542886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  pSVar3 = System_Linq_Enumerable__Distinct_object__34e8be0
                     (pSVar3,(System_Collections_Generic_IEqualityComparer_TSource__o *)
                             TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                      (MethodInfo_34E8BE0 *)MethodInfo_System_Linq_Enumerable_Distinct_string_71a8388);
  pSVar4 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     (pSVar3,(MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar4;
}


// Settings.SandboxGameCreateConfiguration$$SafeContent
// il2cpp: System_String_o* Settings_SandboxGameCreateConfiguration__SafeContent (Settings_SandboxGameCreateConfiguration_o* __this, System_Func_string__o* getter, const MethodInfo* method);
// 0x5b3f900
// eh: try 0x5b3f917..0x5b3f92c -> pad 0x5b3f92c (+1 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5b3f945..0x5b3f9b7 -> pad 0x5b3f9b7 (+1 call sites) cleanup
// eh: try 0x5b3f9ba..0x5b3f9bf -> pad 0x5b3f9c7 catch (...) [compiler noexcept guard]
// asm: 34 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b3f92c: jmp 0x5b3f92e
// asm:   0x5b3f92e: mov r14, rax
// asm:   0x5b3f931: cmp edx, 1
// asm:   0x5b3f934: jne 0x5b3f9bf
// asm:   0x5b3f93a: mov rdi, r14
// asm:   0x5b3f93d: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b3f942: mov r14, rax
// asm:   0x5b3f945: lea rdi, [rip + 0x1738774]  ; TypeInfo_System_Exception
// asm:   0x5b3f94c: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5b3f951: mov rcx, qword ptr [r14]
// asm:   0x5b3f954: mov rsi, qword ptr [rcx]
// asm:   0x5b3f957: mov rdi, rax
// asm:   0x5b3f95a: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5b3f95f: test al, al
// asm:   0x5b3f961: je 0x5b3f996
// asm:   0x5b3f963: mov r14, qword ptr [r14]
// asm:   0x5b3f966: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3f96b: mov rdi, rbx
// asm:   0x5b3f96e: mov rsi, r14
// asm:   0x5b3f971: call 0x5b3dad0  ; Settings_SandboxGameCreateConfiguration__SetError()
// asm:   0x5b3f996: mov edi, 8
// asm:   0x5b3f99b: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5b3f9a0: mov rcx, qword ptr [r14]
// asm:   0x5b3f9a3: mov qword ptr [rax], rcx
// asm:   0x5b3f9a6: lea rsi, [rip + 0x12edb53]
// asm:   0x5b3f9ad: mov rdi, rax
// asm:   0x5b3f9b0: xor edx, edx
// asm:   0x5b3f9b2: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5b3f9b7: mov r14, rax
// asm:   0x5b3f9ba: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3f9bf: mov rdi, r14
// asm:   0x5b3f9c2: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b3f9c7: mov rdi, rax
// asm:   0x5b3f9ca: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o *
Settings_SandboxGameCreateConfiguration__SafeContent
          (Settings_SandboxGameCreateConfiguration_o *__this,System_Func_string__o *getter,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (getter == (System_Func_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = (System_String_o *)
           (*(code *)(getter->fields).invoke_impl)((getter->fields).method_code,(getter->fields).method);
  if (pSVar1 == (System_String_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  return pSVar1;
}


// Settings.SandboxGameCreateConfiguration$$SetError
// il2cpp: void Settings_SandboxGameCreateConfiguration__SetError (Settings_SandboxGameCreateConfiguration_o* __this, System_Exception_o* exception, const MethodInfo* method);
// 0x5b3dad0

void Settings_SandboxGameCreateConfiguration__SetError
               (Settings_SandboxGameCreateConfiguration_o *__this,System_Exception_o *exception,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o **targetAddress;
  
  if (Il2CppMethodInitialized_0754726c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Unable to load Sandbox content.");
    Il2CppMethodInitialized_0754726c = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._LastError_k__BackingField,(MethodInfo *)0x0);
  if (bVar1) {
    targetAddress = &(__this->fields)._LastError_k__BackingField;
    if (exception == (System_Exception_o *)0x0) {
      pSVar2 = "Unable to load Sandbox content.";
    }
    else {
      pSVar2 = (*(exception->klass->vtable)._5_get_Message.methodPtr)
                         (exception,(exception->klass->vtable)._5_get_Message.method);
    }
    *targetAddress = pSVar2;
    Il2CppCodeGenWriteBarrier(targetAddress);
    return;
  }
  return;
}


// Settings.SandboxGameCreateConfiguration$$PreserveInspectorMetadata
// il2cpp: void Settings_SandboxGameCreateConfiguration__PreserveInspectorMetadata (Settings_BaseSetting_o* source, Settings_BaseSetting_o* destination, const MethodInfo* method);
// 0x5b3f7f0

void Settings_SandboxGameCreateConfiguration__PreserveInspectorMetadata
               (Settings_BaseSetting_o *source,Settings_BaseSetting_o *destination,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if ((source == (Settings_BaseSetting_o *)0x0) || (destination == (Settings_BaseSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (destination->fields).InspectorMetadata = (source->fields).InspectorMetadata;
  Il2CppCodeGenWriteBarrier(&(destination->fields).InspectorMetadata);
  Settings_SandboxGameCreateConfiguration__CopyInspectorBounds(source,destination,method_00);
  return;
}


// Settings.SandboxGameCreateConfiguration$$CloneDictionary
// il2cpp: System_Collections_Generic_Dictionary_string__BaseSetting__o* Settings_SandboxGameCreateConfiguration__CloneDictionary (System_Collections_Generic_Dictionary_string__BaseSetting__o* source, const MethodInfo* method);
// 0x5b3f9d0

System_Collections_Generic_Dictionary_string__BaseSetting__o *
Settings_SandboxGameCreateConfiguration__CloneDictionary
          (System_Collections_Generic_Dictionary_string__BaseSetting__o *source,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this;
  
  if (Il2CppMethodInitialized_0754726d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor_718b308);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
    Il2CppMethodInitialized_0754726d = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
  if (source == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,
               (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor)
    ;
  }
  else {
    System_Collections_Generic_Dictionary_object__object____ctor_4aacab0
              ((System_Collections_Generic_Dictionary_object__object__o *)__this,
               (System_Collections_Generic_IDictionary_TKey__TValue__o *)source,
               (MethodInfo_4AACAB0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor_718b308);
  }
  return __this;
}


// Settings.SandboxGameCreateConfiguration$$CloneNestedDictionary
// il2cpp: System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o* Settings_SandboxGameCreateConfiguration__CloneNestedDictionary (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o* source, const MethodInfo* method);
// 0x5b3fa60
// eh: try 0x5b3fbaa..0x5b3fc67 -> pad 0x5b3fc6d (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b3fc87..0x5b3fc8c -> pad 0x5b3fcb1 cleanup
// eh: try 0x5b3fcb4..0x5b3fcbe -> pad 0x5b3fcc6 catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b3fc67: jmp 0x5b3fc6f
// asm:   0x5b3fc69: jmp 0x5b3fc6f
// asm:   0x5b3fc6b: jmp 0x5b3fc6f
// asm:   0x5b3fc6d: jmp 0x5b3fc6f
// asm:   0x5b3fc6f: mov rbx, rax
// asm:   0x5b3fc72: cmp edx, 1
// asm:   0x5b3fc75: jne 0x5b3fcb4
// asm:   0x5b3fc77: mov rdi, rbx
// asm:   0x5b3fc7a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b3fc7f: mov rbx, qword ptr [rax]
// asm:   0x5b3fc82: mov qword ptr [rsp + 0x38], rbx
// asm:   0x5b3fc87: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3fc8c: lea rax, [rip + 0x1750035]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_BaseSetting_Dispose
// asm:   0x5b3fc93: mov rsi, qword ptr [rax]
// asm:   0x5b3fc96: lea rdi, [rsp + 0x10]
// asm:   0x5b3fc9b: call 0x4de67f0  ; System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose()
// asm:   0x5b3fca0: test rbx, rbx
// asm:   0x5b3fca3: je 0x5b3fc22
// asm:   0x5b3fca9: mov rdi, rbx
// asm:   0x5b3fcac: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b3fcb1: mov rbx, rax
// asm:   0x5b3fcb4: lea rdi, [rsp + 0x38]
// asm:   0x5b3fcb9: call 0x2fd6d80  ; il2cpp_runtime_helper_02fd6d80()
// asm:   0x5b3fcbe: mov rdi, rbx
// asm:   0x5b3fcc1: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b3fcc6: mov rdi, rax
// asm:   0x5b3fcc9: call 0x2ab61e0  ; __clang_call_terminate()

System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *
Settings_SandboxGameCreateConfiguration__CloneNestedDictionary
          (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *source,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *dictionary;
  bool bVar2;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *__this;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar3;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_68;
  undefined8 local_40;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *local_38;
  
  if (Il2CppMethodInitialized_0754726e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor_718b308);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_BaseSetting_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_BaseSetting_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_BaseSetting_get_Curren
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_KeyValuePair_string_Dictionary_string_BaseSetting_get_Key
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_KeyValuePair_string_Dictionary_string_BaseSetting_get_Value
              );
    Il2CppMethodInitialized_0754726e = '\x01';
  }
  local_68.fields._current.fields.key = (Il2CppObject *)0x0;
  local_68.fields._current.fields.value = (Il2CppObject *)0x0;
  local_68.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_68.fields._version = 0;
  local_68.fields._index = 0;
  local_68.fields._getEnumeratorRetType = 0;
  local_68.fields._36_4_ = 0;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_ctor);
  if (source != (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              (&local_68,(System_Collections_Generic_Dictionary_object__object__o *)source,
               (MethodInfo_4AAD970 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_GetEnumerator
              );
    local_40 = 0;
    local_38 = &local_68;
    if (__this == (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0) {
      bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)&local_68,
                         (MethodInfo_4CE66D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_BaseSetting_MoveNext
                        );
      pIVar1 = local_68.fields._current.fields.value;
      if (bVar2) {
        pSVar3 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
        System_Collections_Generic_Dictionary_object__object____ctor_4aacab0
                  ((System_Collections_Generic_Dictionary_object__object__o *)pSVar3,
                   (System_Collections_Generic_IDictionary_TKey__TValue__o *)pIVar1,
                   (MethodInfo_4AACAB0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor_718b308);
        ThrowNullReferenceException();
      }
    }
    else {
      while( true ) {
        bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                          ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)&local_68,
                           (MethodInfo_4CE66D0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_BaseSetting_MoveNext
                          );
        dictionary = local_68.fields._current.fields.value;
        pIVar1 = local_68.fields._current.fields.key;
        if (!bVar2) break;
        pSVar3 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_BaseSetting);
        System_Collections_Generic_Dictionary_object__object____ctor_4aacab0
                  ((System_Collections_Generic_Dictionary_object__object__o *)pSVar3,
                   (System_Collections_Generic_IDictionary_TKey__TValue__o *)dictionary,
                   (MethodInfo_4AACAB0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_ctor_718b308);
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this,pIVar1,
                   (Il2CppObject *)pSVar3,
                   (MethodInfo_4AAD4C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_BaseSetting_set_Item
                  );
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)&local_68,
               (MethodInfo_4CE67F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_BaseSetting_Dispose
              );
  }
  return __this;
}


// Settings.SandboxGameCreateConfiguration$$.ctor
// il2cpp: void Settings_SandboxGameCreateConfiguration___ctor (Settings_SandboxGameCreateConfiguration_o* __this, const MethodInfo* method);
// 0x5b40020

void Settings_SandboxGameCreateConfiguration___ctor
               (Settings_SandboxGameCreateConfiguration_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


