// Type: Settings.SettingsManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Settings/SettingsManager.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingsManager.cs
// --------------------------------

// Settings.SettingsManager$$add_OnSettingsChanged
// il2cpp: void Settings_SettingsManager__add_OnSettingsChanged (System_Action_o* value, const MethodInfo* method);
// 0x41fa6b0

void Settings_SettingsManager__add_OnSettingsChanged(System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *a;
  bool bVar2;
  
  if (g_data_057ad885 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ad885 = '\x01';
  }
  a = *(System_Delegate_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x98);
  while ((pSVar1 = System_Delegate__Combine(a,(System_Delegate_o *)value,(MethodInfo *)0x0),
         pSVar1 == (System_Delegate_o *)0x0 || (pSVar1->klass == TypeInfo_Action))) {
    pSVar1 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x98,pSVar1,a);
    bVar2 = a == pSVar1;
    a = pSVar1;
    if (bVar2) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pSVar1);
  return;
}


// Settings.SettingsManager$$remove_OnSettingsChanged
// il2cpp: void Settings_SettingsManager__remove_OnSettingsChanged (System_Action_o* value, const MethodInfo* method);
// 0x41fa770

void Settings_SettingsManager__remove_OnSettingsChanged(System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *source;
  bool bVar2;
  
  if (g_data_057ad886 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ad886 = '\x01';
  }
  source = *(System_Delegate_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x98);
  while ((pSVar1 = System_Delegate__Remove(source,(System_Delegate_o *)value,(MethodInfo *)0x0),
         pSVar1 == (System_Delegate_o *)0x0 || (pSVar1->klass == TypeInfo_Action))) {
    pSVar1 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x98,pSVar1,source);
    bVar2 = source == pSVar1;
    source = pSVar1;
    if (bVar2) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pSVar1);
  return;
}


// Settings.SettingsManager$$Init
// il2cpp: void Settings_SettingsManager__Init (const MethodInfo* method);
// 0x41fa830

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
  Settings_AdvancedSettings_o *__this_14;
  MethodInfo *in_RSI;
  
  if (g_data_057ad887 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AbilitySettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AdvancedSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomSkinSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EmoteSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GeneralSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GraphicsSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCharacterSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InputSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapEditorSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MultiplayerSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ProfileSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SoundSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TitanCustomSettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UISettings);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeatherSettings);
    g_data_057ad887 = '\x01';
  }
  __this = (Settings_MultiplayerSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MultiplayerSettings);
  Settings_MultiplayerSettings___ctor(__this,in_RSI);
  **(undefined8 **)(TypeInfo_SettingsManager + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_SettingsManager + 0xb8));
  __this_00 = (Settings_ProfileSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ProfileSettings);
  Settings_ProfileSettings___ctor(__this_00,(MethodInfo *)__this);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_ProfileSettings_o **)(lVar1 + 8) = __this_00;
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  __this_01 = (Settings_CustomSkinSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomSkinSettings);
  Settings_CustomSkinSettings___ctor(__this_01,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_CustomSkinSettings_o **)(lVar1 + 0x10) = __this_01;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10);
  __this_02 = (Settings_GraphicsSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GraphicsSettings);
  Settings_GraphicsSettings___ctor(__this_02,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_GraphicsSettings_o **)(lVar1 + 0x18) = __this_02;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18);
  __this_03 = (Settings_GeneralSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GeneralSettings);
  Settings_GeneralSettings___ctor(__this_03,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_GeneralSettings_o **)(lVar1 + 0x20) = __this_03;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x20);
  __this_04 = (Settings_UISettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UISettings);
  Settings_UISettings___ctor(__this_04,(MethodInfo *)__this_03);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_UISettings_o **)(lVar1 + 0x28) = __this_04;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28);
  __this_05 = (Settings_AbilitySettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AbilitySettings);
  Settings_AbilitySettings___ctor(__this_05,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_AbilitySettings_o **)(lVar1 + 0x30) = __this_05;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x30);
  __this_06 = (Settings_InputSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_InputSettings);
  Settings_InputSettings___ctor(__this_06,(MethodInfo *)__this_05);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_InputSettings_o **)(lVar1 + 0x38) = __this_06;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x38);
  __this_07 = (Settings_InGameSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_InGameSettings);
  Settings_InGameSettings___ctor(__this_07,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_InGameSettings_o **)(lVar1 + 0x40) = __this_07;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x40);
  __this_08 = (Settings_WeatherSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WeatherSettings);
  Settings_WeatherSettings___ctor(__this_08,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_WeatherSettings_o **)(lVar1 + 0x48) = __this_08;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x48);
  pSVar2 = (Settings_InGameSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_InGameSet);
  Settings_InGameSet___ctor(pSVar2,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_InGameSet_o **)(lVar1 + 0x50) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x50);
  pSVar2 = (Settings_InGameSet_o *)il2cpp_runtime_helper_023052d0(TypeInfo_InGameSet);
  Settings_InGameSet___ctor(pSVar2,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_InGameSet_o **)(lVar1 + 0x58) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x58);
  __this_09 = (Settings_HumanCustomSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HumanCustomSettings);
  Settings_HumanCustomSettings___ctor(__this_09,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_HumanCustomSettings_o **)(lVar1 + 0x60) = __this_09;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x60);
  __this_10 = (Settings_TitanCustomSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TitanCustomSettings);
  Settings_TitanCustomSettings___ctor(__this_10,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_TitanCustomSettings_o **)(lVar1 + 0x68) = __this_10;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x68);
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_InGameCharacterSettings);
  Settings_InGameCharacterSettings___ctor((Settings_InGameCharacterSettings_o *)method_00,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(MethodInfo **)(lVar1 + 0x70) = method_00;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x70);
  __this_11 = (Settings_MapEditorSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapEditorSettings);
  Settings_MapEditorSettings___ctor(__this_11,method_00);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_MapEditorSettings_o **)(lVar1 + 0x78) = __this_11;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x78);
  __this_12 = (Settings_SoundSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_SoundSettings);
  Settings_SoundSettings___ctor(__this_12,(MethodInfo *)__this_11);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_SoundSettings_o **)(lVar1 + 0x80) = __this_12;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x80);
  __this_13 = (Settings_EmoteSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_EmoteSettings);
  Settings_EmoteSettings___ctor(__this_13,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_EmoteSettings_o **)(lVar1 + 0x88) = __this_13;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x88);
  __this_14 = (Settings_AdvancedSettings_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AdvancedSettings);
  Settings_AdvancedSettings___ctor(__this_14,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_SettingsManager + 0xb8);
  *(Settings_AdvancedSettings_o **)(lVar1 + 0x90) = __this_14;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x90,__this_14);
  return;
}


// Settings.SettingsManager$$NotifySettingsChanged
// il2cpp: void Settings_SettingsManager__NotifySettingsChanged (const MethodInfo* method);
// 0x41fcc10

void Settings_SettingsManager__NotifySettingsChanged(MethodInfo *method)

{
  long lVar1;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if (g_data_057ad888 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ad888 = '\x01';
    in_RDX = extraout_RDX;
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x98);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28),in_RDX,*(code **)(lVar1 + 0x18));
    return;
  }
  return;
}


// Settings.SettingsManager$$.ctor
// il2cpp: void Settings_SettingsManager___ctor (Settings_SettingsManager_o* __this, const MethodInfo* method);
// 0x41fcc60

void Settings_SettingsManager___ctor(Settings_SettingsManager_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


