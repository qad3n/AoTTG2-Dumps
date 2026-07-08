// Type: Settings.SettingsManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/SettingsManager.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/SettingsManager.cs  [CHANGED since prior version]
// --------------------------------

// Settings.SettingsManager$$add_OnSettingsChanged
// il2cpp: void Settings_SettingsManager__add_OnSettingsChanged (System_Action_o* value, const MethodInfo* method);
// 0x3f11f70

void Settings_SettingsManager__add_OnSettingsChanged(System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *a;
  bool bVar2;
  
  if (DAT_05703ca4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_05703ca4 = '\x01';
  }
  a = *(System_Delegate_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  while( true ) {
    pSVar1 = System_Delegate__Combine(a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar1 != (System_Delegate_o *)0x0) && (pSVar1->klass != TypeInfo_Action)) break;
    pSVar1 = (System_Delegate_o *)il2cpp_glue_022c2530(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90,pSVar1,a);
    bVar2 = a == pSVar1;
    a = pSVar1;
    if (bVar2) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(pSVar1);
}


// Settings.SettingsManager$$remove_OnSettingsChanged
// il2cpp: void Settings_SettingsManager__remove_OnSettingsChanged (System_Action_o* value, const MethodInfo* method);
// 0x3f12030

void Settings_SettingsManager__remove_OnSettingsChanged(System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *source;
  bool bVar2;
  
  if (DAT_05703ca5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_05703ca5 = '\x01';
  }
  source = *(System_Delegate_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  while( true ) {
    pSVar1 = System_Delegate__Remove(source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar1 != (System_Delegate_o *)0x0) && (pSVar1->klass != TypeInfo_Action)) break;
    pSVar1 = (System_Delegate_o *)il2cpp_glue_022c2530(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90,pSVar1,source);
    bVar2 = source == pSVar1;
    source = pSVar1;
    if (bVar2) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume(pSVar1);
}


// Settings.SettingsManager$$Init
// il2cpp: void Settings_SettingsManager__Init (const MethodInfo* method);
// 0x3f120f0

void Settings_SettingsManager__Init(MethodInfo *method)

{
  long lVar1;
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
  MethodInfo *method_00;
  Settings_MapEditorSettings_o *__this_11;
  Settings_SoundSettings_o *__this_12;
  Settings_EmoteSettings_o *__this_13;
  MethodInfo *in_RSI;
  
  if (DAT_05703ca6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AbilitySettings);
    il2cpp_init_method_metadata(&TypeInfo_CustomSkinSettings);
    il2cpp_init_method_metadata(&TypeInfo_EmoteSettings);
    il2cpp_init_method_metadata(&TypeInfo_GeneralSettings);
    il2cpp_init_method_metadata(&TypeInfo_GraphicsSettings);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSettings);
    il2cpp_init_method_metadata(&TypeInfo_InGameCharacterSettings);
    il2cpp_init_method_metadata(&TypeInfo_InGameSet);
    il2cpp_init_method_metadata(&TypeInfo_InGameSettings);
    il2cpp_init_method_metadata(&TypeInfo_InputSettings);
    il2cpp_init_method_metadata(&TypeInfo_MapEditorSettings);
    il2cpp_init_method_metadata(&TypeInfo_MultiplayerSettings);
    il2cpp_init_method_metadata(&TypeInfo_ProfileSettings);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_SoundSettings);
    il2cpp_init_method_metadata(&TypeInfo_TitanCustomSettings);
    il2cpp_init_method_metadata(&TypeInfo_UISettings);
    il2cpp_init_method_metadata(&TypeInfo_WeatherSettings);
    DAT_05703ca6 = '\x01';
  }
  __this = (Settings_MultiplayerSettings_o *)il2cpp_runtime_glue(TypeInfo_MultiplayerSettings);
  Settings_MultiplayerSettings___ctor(__this,in_RSI);
  **(undefined8 **)(TypeInfo_SettingsManager + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_SettingsManager + 0xb8));
  __this_00 = (Settings_ProfileSettings_o *)il2cpp_runtime_glue(TypeInfo_ProfileSettings);
  Settings_ProfileSettings___ctor(__this_00,(MethodInfo *)__this);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_ProfileSettings_o **)(lVar1 + 8) = __this_00;
  il2cpp_runtime_glue(lVar1 + 8);
  __this_01 = (Settings_CustomSkinSettings_o *)il2cpp_runtime_glue(TypeInfo_CustomSkinSettings);
  Settings_CustomSkinSettings___ctor(__this_01,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_CustomSkinSettings_o **)(lVar1 + 0x10) = __this_01;
  il2cpp_runtime_glue(lVar1 + 0x10);
  __this_02 = (Settings_GraphicsSettings_o *)il2cpp_runtime_glue(TypeInfo_GraphicsSettings);
  Settings_GraphicsSettings___ctor(__this_02,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_GraphicsSettings_o **)(lVar1 + 0x18) = __this_02;
  il2cpp_runtime_glue(lVar1 + 0x18);
  __this_03 = (Settings_GeneralSettings_o *)il2cpp_runtime_glue(TypeInfo_GeneralSettings);
  Settings_GeneralSettings___ctor(__this_03,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_GeneralSettings_o **)(lVar1 + 0x20) = __this_03;
  il2cpp_runtime_glue(lVar1 + 0x20);
  __this_04 = (Settings_UISettings_o *)il2cpp_runtime_glue(TypeInfo_UISettings);
  Settings_UISettings___ctor(__this_04,(MethodInfo *)__this_03);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_UISettings_o **)(lVar1 + 0x28) = __this_04;
  il2cpp_runtime_glue(lVar1 + 0x28);
  __this_05 = (Settings_AbilitySettings_o *)il2cpp_runtime_glue(TypeInfo_AbilitySettings);
  Settings_AbilitySettings___ctor(__this_05,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_AbilitySettings_o **)(lVar1 + 0x30) = __this_05;
  il2cpp_runtime_glue(lVar1 + 0x30);
  __this_06 = (Settings_InputSettings_o *)il2cpp_runtime_glue(TypeInfo_InputSettings);
  Settings_InputSettings___ctor(__this_06,(MethodInfo *)__this_05);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_InputSettings_o **)(lVar1 + 0x38) = __this_06;
  il2cpp_runtime_glue(lVar1 + 0x38);
  __this_07 = (Settings_InGameSettings_o *)il2cpp_runtime_glue(TypeInfo_InGameSettings);
  Settings_InGameSettings___ctor(__this_07,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_InGameSettings_o **)(lVar1 + 0x40) = __this_07;
  il2cpp_runtime_glue(lVar1 + 0x40);
  __this_08 = (Settings_WeatherSettings_o *)il2cpp_runtime_glue(TypeInfo_WeatherSettings);
  Settings_WeatherSettings___ctor(__this_08,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_WeatherSettings_o **)(lVar1 + 0x48) = __this_08;
  il2cpp_runtime_glue(lVar1 + 0x48);
  pSVar2 = (Settings_InGameSet_o *)il2cpp_runtime_glue(TypeInfo_InGameSet);
  Settings_InGameSet___ctor(pSVar2,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_InGameSet_o **)(lVar1 + 0x50) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x50);
  pSVar2 = (Settings_InGameSet_o *)il2cpp_runtime_glue(TypeInfo_InGameSet);
  Settings_InGameSet___ctor(pSVar2,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_InGameSet_o **)(lVar1 + 0x58) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x58);
  __this_09 = (Settings_HumanCustomSettings_o *)il2cpp_runtime_glue(TypeInfo_HumanCustomSettings);
  Settings_HumanCustomSettings___ctor(__this_09,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_HumanCustomSettings_o **)(lVar1 + 0x60) = __this_09;
  il2cpp_runtime_glue(lVar1 + 0x60);
  __this_10 = (Settings_TitanCustomSettings_o *)il2cpp_runtime_glue(TypeInfo_TitanCustomSettings);
  Settings_TitanCustomSettings___ctor(__this_10,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_TitanCustomSettings_o **)(lVar1 + 0x68) = __this_10;
  il2cpp_runtime_glue(lVar1 + 0x68);
  method_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_InGameCharacterSettings);
  Settings_InGameCharacterSettings___ctor
            ((Settings_InGameCharacterSettings_o *)method_00,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(MethodInfo **)(lVar1 + 0x70) = method_00;
  il2cpp_runtime_glue(lVar1 + 0x70);
  __this_11 = (Settings_MapEditorSettings_o *)il2cpp_runtime_glue(TypeInfo_MapEditorSettings);
  Settings_MapEditorSettings___ctor(__this_11,method_00);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_MapEditorSettings_o **)(lVar1 + 0x78) = __this_11;
  il2cpp_runtime_glue(lVar1 + 0x78);
  __this_12 = (Settings_SoundSettings_o *)il2cpp_runtime_glue(TypeInfo_SoundSettings);
  Settings_SoundSettings___ctor(__this_12,(MethodInfo *)__this_11);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_SoundSettings_o **)(lVar1 + 0x80) = __this_12;
  il2cpp_runtime_glue(lVar1 + 0x80);
  __this_13 = (Settings_EmoteSettings_o *)il2cpp_runtime_glue(TypeInfo_EmoteSettings);
  Settings_EmoteSettings___ctor(__this_13,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_EmoteSettings_o **)(lVar1 + 0x88) = __this_13;
  il2cpp_runtime_glue(lVar1 + 0x88,__this_13);
  return;
}


// Settings.SettingsManager$$NotifySettingsChanged
// il2cpp: void Settings_SettingsManager__NotifySettingsChanged (const MethodInfo* method);
// 0x3f14490

void Settings_SettingsManager__NotifySettingsChanged(MethodInfo *method)

{
  long lVar1;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if (DAT_05703ca7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_05703ca7 = '\x01';
    in_RDX = extraout_RDX;
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x90);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28),in_RDX,
               *(code **)(lVar1 + 0x18));
    return;
  }
  return;
}


// Settings.SettingsManager$$.ctor
// il2cpp: void Settings_SettingsManager___ctor (Settings_SettingsManager_o* __this, const MethodInfo* method);
// 0x3f144e0

void Settings_SettingsManager___ctor(Settings_SettingsManager_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


