// Type: Settings.SettingsManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Settings/SettingsManager.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingsManager.cs
// --------------------------------

// Settings.SettingsManager$$add_OnSettingsChanged
// il2cpp: void Settings_SettingsManager__add_OnSettingsChanged (System_Action_o* value, const MethodInfo* method);
// 0x5c7d3c0

void Settings_SettingsManager__add_OnSettingsChanged(System_Action_o *value,MethodInfo *method)

{
  System_Action_o *pSVar1;
  System_Delegate_o *value_00;
  System_Action_o *a;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547992 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07547992 = '\x01';
  }
  a = TypeInfo_Settings_SettingsManager->static_fields->OnSettingsChanged;
  while( true ) {
    value_00 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((value_00 != (System_Delegate_o *)0x0) &&
       ((System_Action_c *)value_00->klass != TypeInfo_System_Action)) break;
    pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_Settings_SettingsManager->static_fields->OnSettingsChanged,value_00,a);
    bVar2 = pSVar1 == a;
    a = pSVar1;
    if (bVar2) {
      return;
    }
  }
  il2cpp_codegen_raise_invalid_cast_exception(value_00);
}


// Settings.SettingsManager$$remove_OnSettingsChanged
// il2cpp: void Settings_SettingsManager__remove_OnSettingsChanged (System_Action_o* value, const MethodInfo* method);
// 0x5c7d470

void Settings_SettingsManager__remove_OnSettingsChanged(System_Action_o *value,MethodInfo *method)

{
  System_Action_o *pSVar1;
  System_Delegate_o *value_00;
  System_Action_o *source;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547993 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07547993 = '\x01';
  }
  source = TypeInfo_Settings_SettingsManager->static_fields->OnSettingsChanged;
  while( true ) {
    value_00 = System_Delegate__Remove
                         ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((value_00 != (System_Delegate_o *)0x0) &&
       ((System_Action_c *)value_00->klass != TypeInfo_System_Action)) break;
    pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_Settings_SettingsManager->static_fields->OnSettingsChanged,value_00,source);
    bVar2 = pSVar1 == source;
    source = pSVar1;
    if (bVar2) {
      return;
    }
  }
  il2cpp_codegen_raise_invalid_cast_exception(value_00);
}


// Settings.SettingsManager$$Init
// il2cpp: void Settings_SettingsManager__Init (const MethodInfo* method);
// 0x5c7d520

void Settings_SettingsManager__Init(MethodInfo *method)

{
  Settings_SettingsManager_StaticFields *pSVar1;
  Settings_MultiplayerSettings_o *__this;
  Settings_ProfileSettings_o *__this_00;
  Settings_CustomSkinSettings_o *__this_01;
  Settings_GraphicsSettings_o *__this_02;
  Settings_GeneralSettings_o *__this_03;
  Settings_UISettings_o *__this_04;
  Settings_AbilitySettings_o *__this_05;
  Settings_InputSettings_o *__this_06;
  Settings_InGameSettings_o *__this_07;
  Settings_WeatherSettings_o *__this_08;
  Settings_InGameSet_o *pSVar2;
  Settings_HumanCustomSettings_o *__this_09;
  Settings_TitanCustomSettings_o *__this_10;
  Settings_InGameCharacterSettings_o *__this_11;
  Settings_MapEditorSettings_o *__this_12;
  Settings_SoundSettings_o *__this_13;
  Settings_EmoteSettings_o *__this_14;
  Settings_AdvancedSettings_o *__this_15;
  
  if (Il2CppMethodInitialized_07547994 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_AbilitySettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_AdvancedSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_CustomSkinSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_EmoteSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_GeneralSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_GraphicsSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameCharacterSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InputSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MapEditorSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MultiplayerSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ProfileSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SoundSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_UISettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_WeatherSettings);
    Il2CppMethodInitialized_07547994 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_MultiplayerSettings);
  Settings_MultiplayerSettings___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ProfileSettings);
  Settings_ProfileSettings___ctor((Settings_UnsavedProfileSettings_o *)__this_00,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields;
  pSVar1->ProfileSettings = __this_00;
  Il2CppCodeGenWriteBarrier(&pSVar1->ProfileSettings);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_CustomSkinSettings);
  Settings_CustomSkinSettings___ctor(__this_01,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields;
  pSVar1->CustomSkinSettings = __this_01;
  Il2CppCodeGenWriteBarrier(&pSVar1->CustomSkinSettings);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_GraphicsSettings);
  Settings_GraphicsSettings___ctor(__this_02,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields;
  pSVar1->GraphicsSettings = __this_02;
  Il2CppCodeGenWriteBarrier(&pSVar1->GraphicsSettings);
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_GeneralSettings);
  Settings_GeneralSettings___ctor(__this_03,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields;
  pSVar1->GeneralSettings = __this_03;
  Il2CppCodeGenWriteBarrier(&pSVar1->GeneralSettings);
  __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_UISettings);
  Settings_UISettings___ctor(__this_04,(MethodInfo *)__this_03);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields;
  pSVar1->UISettings = __this_04;
  Il2CppCodeGenWriteBarrier(&pSVar1->UISettings);
  __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_AbilitySettings);
  Settings_AbilitySettings___ctor(__this_05,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields;
  pSVar1->AbilitySettings = __this_05;
  Il2CppCodeGenWriteBarrier(&pSVar1->AbilitySettings);
  __this_06 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InputSettings);
  Settings_InputSettings___ctor(__this_06,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields;
  pSVar1->InputSettings = __this_06;
  Il2CppCodeGenWriteBarrier(&pSVar1->InputSettings);
  __this_07 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameSettings);
  Settings_InGameSettings___ctor(__this_07,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields;
  pSVar1->InGameSettings = __this_07;
  Il2CppCodeGenWriteBarrier(&pSVar1->InGameSettings);
  __this_08 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_WeatherSettings);
  Settings_WeatherSettings___ctor(__this_08,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields;
  pSVar1->WeatherSettings = __this_08;
  Il2CppCodeGenWriteBarrier(&pSVar1->WeatherSettings);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameSet);
  Settings_InGameSet___ctor(pSVar2,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields;
  pSVar1->InGameCurrent = pSVar2;
  Il2CppCodeGenWriteBarrier(&pSVar1->InGameCurrent);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameSet);
  Settings_InGameSet___ctor(pSVar2,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields;
  pSVar1->InGameUI = pSVar2;
  Il2CppCodeGenWriteBarrier(&pSVar1->InGameUI);
  __this_09 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_HumanCustomSettings);
  Settings_HumanCustomSettings___ctor(__this_09,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields;
  pSVar1->HumanCustomSettings = __this_09;
  Il2CppCodeGenWriteBarrier(&pSVar1->HumanCustomSettings);
  __this_10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_TitanCustomSettings);
  Settings_TitanCustomSettings___ctor(__this_10,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields;
  pSVar1->TitanCustomSettings = __this_10;
  Il2CppCodeGenWriteBarrier(&pSVar1->TitanCustomSettings);
  __this_11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameCharacterSettings);
  Settings_InGameCharacterSettings___ctor(__this_11,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields;
  pSVar1->InGameCharacterSettings = __this_11;
  Il2CppCodeGenWriteBarrier(&pSVar1->InGameCharacterSettings);
  __this_12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_MapEditorSettings);
  Settings_MapEditorSettings___ctor(__this_12,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields;
  pSVar1->MapEditorSettings = __this_12;
  Il2CppCodeGenWriteBarrier(&pSVar1->MapEditorSettings);
  __this_13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_SoundSettings);
  Settings_SoundSettings___ctor(__this_13,(MethodInfo *)__this_12);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields;
  pSVar1->SoundSettings = __this_13;
  Il2CppCodeGenWriteBarrier(&pSVar1->SoundSettings);
  __this_14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_EmoteSettings);
  Settings_EmoteSettings___ctor(__this_14,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields;
  pSVar1->EmoteSettings = __this_14;
  Il2CppCodeGenWriteBarrier(&pSVar1->EmoteSettings);
  __this_15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_AdvancedSettings);
  Settings_AdvancedSettings___ctor(__this_15,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields;
  pSVar1->AdvancedSettings = __this_15;
  Il2CppCodeGenWriteBarrier(&pSVar1->AdvancedSettings);
  return;
}


// Settings.SettingsManager$$NotifySettingsChanged
// il2cpp: void Settings_SettingsManager__NotifySettingsChanged (const MethodInfo* method);
// 0x5c7eb50

void Settings_SettingsManager__NotifySettingsChanged(MethodInfo *method)

{
  System_Action_o *pSVar1;
  code *vtableDispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if (Il2CppMethodInitialized_07547995 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_07547995 = '\x01';
    in_RDX = extraout_RDX;
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->OnSettingsChanged;
  if (pSVar1 == (System_Action_o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,(pSVar1->fields).method,in_RDX,vtableDispatch);
  return;
}


// Settings.SettingsManager$$.ctor
// il2cpp: void Settings_SettingsManager___ctor (Settings_SettingsManager_o* __this, const MethodInfo* method);
// 0x5c7eba0

void Settings_SettingsManager___ctor(Settings_SettingsManager_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


