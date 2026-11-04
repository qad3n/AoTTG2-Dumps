// Type: Settings.SettingsManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/SettingsManager.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingsManager.cs
// --------------------------------

// Settings.SettingsManager$$add_OnSettingsChanged
// il2cpp: void Settings_SettingsManager__add_OnSettingsChanged (System_Action_o* value, const MethodInfo* method);
// 0x181f26560
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f265af: nop 

void Settings_SettingsManager__add_OnSettingsChanged(System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Action_o *pSVar2;
  System_Delegate_o *pSVar3;
  System_Action_o *a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_1843454c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_1843454c5 = '\x01';
  }
  a = TypeInfo_Settings_SettingsManager->static_fields->OnSettingsChanged;
  do {
    pSVar1 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if (pSVar1 != (System_Delegate_o *)0x0) {
      pSVar3 = (System_Delegate_o *)0x0;
      if ((System_Action_c *)pSVar1->klass == TypeInfo_System_Action) {
        pSVar3 = pSVar1;
      }
      if (pSVar3 == (System_Delegate_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar1,TypeInfo_System_Action);
      }
    }
    pSVar2 = (System_Action_o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_Settings_SettingsManager->static_fields->OnSettingsChanged);
    bVar4 = pSVar2 == a;
    a = pSVar2;
    if (bVar4) {
      return;
    }
  } while( true );
}


// Settings.SettingsManager$$remove_OnSettingsChanged
// il2cpp: void Settings_SettingsManager__remove_OnSettingsChanged (System_Action_o* value, const MethodInfo* method);
// 0x181f26620
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f2666f: nop 

void Settings_SettingsManager__remove_OnSettingsChanged(System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Action_o *pSVar2;
  System_Delegate_o *pSVar3;
  System_Action_o *source;
  bool bVar4;
  
  if (Il2CppMethodInitialized_1843454c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_1843454c6 = '\x01';
  }
  source = TypeInfo_Settings_SettingsManager->static_fields->OnSettingsChanged;
  do {
    pSVar1 = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0)
    ;
    if (pSVar1 != (System_Delegate_o *)0x0) {
      pSVar3 = (System_Delegate_o *)0x0;
      if ((System_Action_c *)pSVar1->klass == TypeInfo_System_Action) {
        pSVar3 = pSVar1;
      }
      if (pSVar3 == (System_Delegate_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar1,TypeInfo_System_Action);
      }
    }
    pSVar2 = (System_Action_o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_Settings_SettingsManager->static_fields->OnSettingsChanged);
    bVar4 = pSVar2 == source;
    source = pSVar2;
    if (bVar4) {
      return;
    }
  } while( true );
}


// Settings.SettingsManager$$Init
// il2cpp: void Settings_SettingsManager__Init (const MethodInfo* method);
// 0x181f25b20

void Settings_SettingsManager__Init(MethodInfo *method)

{
  Settings_MultiplayerSettings_o *__this;
  Settings_ProfileSettings_o *__this_00;
  Settings_CustomSkinSettings_o *__this_01;
  Settings_GraphicsSettings_o *__this_02;
  Settings_GeneralSettings_o *__this_03;
  Settings_UISettings_o *__this_04;
  Settings_AbilitySettings_o *__this_05;
  Settings_InputSettings_o *__this_06;
  Settings_GeneralInputSettings_o *__this_07;
  Settings_HumanInputSettings_o *__this_08;
  Settings_TitanInputSettings_o *__this_09;
  Settings_AnnieShifterInputSettings_o *__this_10;
  Settings_ErenShifterInputSettings_o *__this_11;
  Settings_InteractionInputSettings_o *__this_12;
  Settings_MapEditorInputSettings_o *__this_13;
  Settings_InGameSettings_o *__this_14;
  Settings_SetSettingsContainer_InGameSet__o *__this_15;
  Settings_InGameCharacterSettings_o *pSVar1;
  Settings_WeatherSettings_o *__this_16;
  Settings_SetSettingsContainer_WeatherSet__o *__this_17;
  Settings_InGameSet_o *pSVar2;
  Settings_HumanCustomSettings_o *__this_18;
  Settings_SetSettingsContainerNoPresets_HumanCustomSet__o *__this_19;
  Settings_SetSettingsContainerPresetsOnly_HumanCustomSet__o *pSVar3;
  Settings_TitanCustomSettings_o *__this_20;
  Settings_SetSettingsContainerNoPresets_TitanCustomSet__o *__this_21;
  Settings_MapEditorSettings_o *__this_22;
  Settings_SoundSettings_o *__this_23;
  Settings_EmoteSettings_o *__this_24;
  Settings_AdvancedSettings_o *__this_25;
  
  if (Il2CppMethodInitialized_1843454c7 == '\0') {
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
    Il2CppMethodInitialized_1843454c7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_MultiplayerSettings);
  Settings_MultiplayerSettings___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings,__this);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ProfileSettings);
  Settings_ProfileSettings___ctor(__this_00,(MethodInfo *)0x0);
  TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings = __this_00;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings,__this_00);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_CustomSkinSettings);
  Settings_CustomSkinSettings___ctor(__this_01,(MethodInfo *)0x0);
  TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings = __this_01;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings,__this_01);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_GraphicsSettings);
  Settings_GraphicsSettings___ctor(__this_02,(MethodInfo *)0x0);
  TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings = __this_02;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings,__this_02);
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_GeneralSettings);
  Settings_GeneralSettings___ctor(__this_03,(MethodInfo *)0x0);
  TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings = __this_03;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings,__this_03);
  __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_UISettings);
  Settings_UISettings___ctor(__this_04,(MethodInfo *)0x0);
  TypeInfo_Settings_SettingsManager->static_fields->UISettings = __this_04;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_SettingsManager->static_fields->UISettings,__this_04);
  __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_AbilitySettings);
  Settings_AbilitySettings___ctor(__this_05,(MethodInfo *)0x0);
  TypeInfo_Settings_SettingsManager->static_fields->AbilitySettings = __this_05;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_SettingsManager->static_fields->AbilitySettings,__this_05);
  __this_06 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InputSettings);
  if (Il2CppMethodInitialized_184345463 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_AnnieShifterInputSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ErenShifterInputSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_GeneralInputSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanInputSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InteractionInputSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MapEditorInputSettings);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanInputSettings);
    Il2CppMethodInitialized_184345463 = '\x01';
  }
  __this_07 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_GeneralInputSettings);
  Settings_GeneralInputSettings___ctor(__this_07,(MethodInfo *)0x0);
  (__this_06->fields).General = __this_07;
  Il2CppCodeGenWriteBarrier(&(__this_06->fields).General,__this_07);
  __this_08 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_HumanInputSettings);
  Settings_HumanInputSettings___ctor(__this_08,(MethodInfo *)0x0);
  (__this_06->fields).Human = __this_08;
  Il2CppCodeGenWriteBarrier(&(__this_06->fields).Human,__this_08);
  __this_09 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_TitanInputSettings);
  Settings_TitanInputSettings___ctor(__this_09,(MethodInfo *)0x0);
  (__this_06->fields).Titan = __this_09;
  Il2CppCodeGenWriteBarrier(&(__this_06->fields).Titan,__this_09);
  __this_10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_AnnieShifterInputSettings);
  Settings_AnnieShifterInputSettings___ctor(__this_10,(MethodInfo *)0x0);
  (__this_06->fields).AnnieShifter = __this_10;
  Il2CppCodeGenWriteBarrier(&(__this_06->fields).AnnieShifter,__this_10);
  __this_11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ErenShifterInputSettings);
  Settings_ErenShifterInputSettings___ctor(__this_11,(MethodInfo *)0x0);
  (__this_06->fields).ErenShifter = __this_11;
  Il2CppCodeGenWriteBarrier(&(__this_06->fields).ErenShifter,__this_11);
  __this_12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InteractionInputSettings);
  Settings_InteractionInputSettings___ctor(__this_12,(MethodInfo *)0x0);
  (__this_06->fields).Interaction = __this_12;
  Il2CppCodeGenWriteBarrier(&(__this_06->fields).Interaction,__this_12);
  __this_13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_MapEditorInputSettings);
  Settings_MapEditorInputSettings___ctor(__this_13,(MethodInfo *)0x0);
  (__this_06->fields).MapEditor = __this_13;
  Il2CppCodeGenWriteBarrier(&(__this_06->fields).MapEditor,__this_13);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this_06,(MethodInfo *)0x0);
  TypeInfo_Settings_SettingsManager->static_fields->InputSettings = __this_06;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_SettingsManager->static_fields->InputSettings,__this_06);
  __this_14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameSettings);
  if (Il2CppMethodInitialized_18434544d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InGameCharacterSettings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_SetSettingsContainer_InGameSet_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SetSettingsContainer_InGameSet);
    Il2CppMethodInitialized_18434544d = '\x01';
  }
  __this_15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_SetSettingsContainer_InGameSet);
  Settings_SetSettingsContainer_object____ctor
            ((Settings_SetSettingsContainer_T__o *)__this_15,
             (MethodInfo_C8F6A0 *)MethodInfo_Settings_SetSettingsContainer_InGameSet_ctor);
  (__this_14->fields).InGameSets = __this_15;
  Il2CppCodeGenWriteBarrier(&(__this_14->fields).InGameSets,__this_15);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameCharacterSettings);
  Settings_InGameCharacterSettings___ctor(pSVar1,(MethodInfo *)0x0);
  (__this_14->fields).LastCharacter = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this_14->fields).LastCharacter,pSVar1);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this_14,(MethodInfo *)0x0);
  TypeInfo_Settings_SettingsManager->static_fields->InGameSettings = __this_14;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_SettingsManager->static_fields->InGameSettings,__this_14);
  __this_16 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_WeatherSettings);
  if (Il2CppMethodInitialized_184345459 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_SetSettingsContainer_WeatherSet_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SetSettingsContainer_WeatherSet);
    Il2CppMethodInitialized_184345459 = '\x01';
  }
  __this_17 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_SetSettingsContainer_WeatherSet);
  Settings_SetSettingsContainer_object____ctor
            ((Settings_SetSettingsContainer_T__o *)__this_17,
             (MethodInfo_C8F6A0 *)MethodInfo_Settings_SetSettingsContainer_WeatherSet_ctor);
  (__this_16->fields).WeatherSets = __this_17;
  Il2CppCodeGenWriteBarrier(&(__this_16->fields).WeatherSets,__this_17);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this_16,(MethodInfo *)0x0);
  TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings = __this_16;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings,__this_16);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameSet);
  Settings_InGameSet___ctor(pSVar2,(MethodInfo *)0x0);
  TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent,pSVar2);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameSet);
  Settings_InGameSet___ctor(pSVar2,(MethodInfo *)0x0);
  TypeInfo_Settings_SettingsManager->static_fields->InGameUI = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_SettingsManager->static_fields->InGameUI,pSVar2);
  __this_18 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_HumanCustomSettings);
  if (Il2CppMethodInitialized_18434543f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainerNoPresets_HumanCustomSet_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Settings_SetSettingsContainerNoPresets_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainerPresetsOnly_HumanCustomSet_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Settings_SetSettingsContainerPresetsOnly_HumanCustomSet);
    Il2CppMethodInitialized_18434543f = '\x01';
  }
  __this_19 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Settings_SetSettingsContainerNoPresets_HumanCustomSet);
  Settings_SetSettingsContainerNoPresets_object____ctor
            ((Settings_SetSettingsContainerPresetsOnly_T__o *)__this_19,
             (MethodInfo_C8E5B0 *)MethodInfo_Settings_SetSettingsContainerNoPresets_HumanCustomSet_ctor);
  (__this_18->fields).CustomSets = (Settings_SetSettingsContainer_HumanCustomSet__o *)__this_19;
  Il2CppCodeGenWriteBarrier(&(__this_18->fields).CustomSets,__this_19);
  pSVar3 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Settings_SetSettingsContainerPresetsOnly_HumanCustomSet);
  Settings_SetSettingsContainerPresetsOnly_object____ctor
            ((Settings_SetSettingsContainerPresetsOnly_T__o *)pSVar3,
             (MethodInfo_C8E5B0 *)MethodInfo_Settings_SetSettingsContainerPresetsOnly_HumanCustomSet_ctor);
  (__this_18->fields).Costume1Sets = (Settings_SetSettingsContainer_HumanCustomSet__o *)pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this_18->fields).Costume1Sets,pSVar3);
  pSVar3 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Settings_SetSettingsContainerPresetsOnly_HumanCustomSet);
  Settings_SetSettingsContainerPresetsOnly_object____ctor
            ((Settings_SetSettingsContainerPresetsOnly_T__o *)pSVar3,
             (MethodInfo_C8E5B0 *)MethodInfo_Settings_SetSettingsContainerPresetsOnly_HumanCustomSet_ctor);
  (__this_18->fields).Costume2Sets = (Settings_SetSettingsContainer_HumanCustomSet__o *)pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this_18->fields).Costume2Sets,pSVar3);
  pSVar3 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Settings_SetSettingsContainerPresetsOnly_HumanCustomSet);
  Settings_SetSettingsContainerPresetsOnly_object____ctor
            ((Settings_SetSettingsContainerPresetsOnly_T__o *)pSVar3,
             (MethodInfo_C8E5B0 *)MethodInfo_Settings_SetSettingsContainerPresetsOnly_HumanCustomSet_ctor);
  (__this_18->fields).Costume3Sets = (Settings_SetSettingsContainer_HumanCustomSet__o *)pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this_18->fields).Costume3Sets,pSVar3);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this_18,(MethodInfo *)0x0);
  TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings = __this_18;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings,__this_18);
  __this_20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_TitanCustomSettings);
  if (Il2CppMethodInitialized_184345456 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainerNoPresets_TitanCustomSet_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Settings_SetSettingsContainerNoPresets_TitanCustomSet);
    Il2CppMethodInitialized_184345456 = '\x01';
  }
  __this_21 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Settings_SetSettingsContainerNoPresets_TitanCustomSet);
  Settings_SetSettingsContainerNoPresets_object____ctor
            ((Settings_SetSettingsContainerPresetsOnly_T__o *)__this_21,
             (MethodInfo_C8E5B0 *)MethodInfo_Settings_SetSettingsContainerNoPresets_TitanCustomSet_ctor);
  (__this_20->fields).TitanCustomSets = (Settings_SetSettingsContainer_TitanCustomSet__o *)__this_21;
  Il2CppCodeGenWriteBarrier(&(__this_20->fields).TitanCustomSets,__this_21);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this_20,(MethodInfo *)0x0);
  TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings = __this_20;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_SettingsManager->static_fields->TitanCustomSettings,__this_20);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InGameCharacterSettings);
  Settings_InGameCharacterSettings___ctor(pSVar1,(MethodInfo *)0x0);
  TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_SettingsManager->static_fields->InGameCharacterSettings,pSVar1)
  ;
  __this_22 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_MapEditorSettings);
  Settings_MapEditorSettings___ctor(__this_22,(MethodInfo *)0x0);
  TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings = __this_22;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings,__this_22);
  __this_23 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_SoundSettings);
  Settings_SoundSettings___ctor(__this_23,(MethodInfo *)0x0);
  TypeInfo_Settings_SettingsManager->static_fields->SoundSettings = __this_23;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_SettingsManager->static_fields->SoundSettings,__this_23);
  __this_24 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_EmoteSettings);
  Settings_EmoteSettings___ctor(__this_24,(MethodInfo *)0x0);
  TypeInfo_Settings_SettingsManager->static_fields->EmoteSettings = __this_24;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_SettingsManager->static_fields->EmoteSettings,__this_24);
  __this_25 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_AdvancedSettings);
  Settings_AdvancedSettings___ctor(__this_25,(MethodInfo *)0x0);
  TypeInfo_Settings_SettingsManager->static_fields->AdvancedSettings = __this_25;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Settings_SettingsManager->static_fields->AdvancedSettings,__this_25);
  return;
}


// Settings.SettingsManager$$NotifySettingsChanged
// il2cpp: void Settings_SettingsManager__NotifySettingsChanged (const MethodInfo* method);
// 0x181f26510

void Settings_SettingsManager__NotifySettingsChanged(MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843454c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_1843454c8 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->OnSettingsChanged;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
    return;
  }
  return;
}


// Settings.SettingsManager$$.ctor
// il2cpp: void Settings_SettingsManager___ctor (Settings_SettingsManager_o* __this, const MethodInfo* method);
// 0x18054c890

void
Settings_SettingsManager___ctor(Settings_SettingsManager_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


