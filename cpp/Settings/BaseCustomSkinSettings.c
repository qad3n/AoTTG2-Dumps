// Type: Settings.BaseCustomSkinSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/BaseCustomSkinSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/BaseCustomSkinSettings.cs
// --------------------------------

// Settings.BaseCustomSkinSettings<object>$$GetSkinsEnabled
// il2cpp: Settings_BoolSetting_o* Settings_BaseCustomSkinSettings_object___GetSkinsEnabled (Settings_BaseCustomSkinSettings_T__o* __this, const MethodInfo_2EB9670* method);
// 0x2fb9670

Settings_BoolSetting_o *
Settings_BaseCustomSkinSettings_object___GetSkinsEnabled
          (Settings_BaseCustomSkinSettings_T__o *__this,MethodInfo_2EB9670 *method)

{
  return (__this->fields).SkinsEnabled;
}


// Settings.BaseCustomSkinSettings<object>$$GetSkinSets
// il2cpp: Settings_IListSetting_o* Settings_BaseCustomSkinSettings_object___GetSkinSets (Settings_BaseCustomSkinSettings_T__o* __this, const MethodInfo_2EB9680* method);
// 0x2fb9680

Settings_IListSetting_o *
Settings_BaseCustomSkinSettings_object___GetSkinSets
          (Settings_BaseCustomSkinSettings_T__o *__this,MethodInfo_2EB9680 *method)

{
  return (Settings_IListSetting_o *)(__this->fields).SkinSets;
}


// Settings.BaseCustomSkinSettings<object>$$GetSkinsLocal
// il2cpp: Settings_BoolSetting_o* Settings_BaseCustomSkinSettings_object___GetSkinsLocal (Settings_BaseCustomSkinSettings_T__o* __this, const MethodInfo_2EB9690* method);
// 0x2fb9690

Settings_BoolSetting_o *
Settings_BaseCustomSkinSettings_object___GetSkinsLocal
          (Settings_BaseCustomSkinSettings_T__o *__this,MethodInfo_2EB9690 *method)

{
  return (__this->fields).SkinsLocal;
}


// Settings.BaseCustomSkinSettings<object>$$.ctor
// il2cpp: void Settings_BaseCustomSkinSettings_object____ctor (Settings_BaseCustomSkinSettings_T__o* __this, const MethodInfo_2EB96A0* method);
// 0x2fb96a0

void Settings_BaseCustomSkinSettings_object____ctor
               (Settings_BaseCustomSkinSettings_T__o *__this,MethodInfo_2EB96A0 *method)

{
  Settings_BoolSetting_o *pSVar1;
  Il2CppClass *pIVar2;
  Settings_ListSetting_T__o *__this_00;
  
  if (g_data_057a82bd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    g_data_057a82bd = '\x01';
  }
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar1,0,(MethodInfo *)0x0);
  (__this->fields).SkinsLocal = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).SkinsLocal,pSVar1);
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar1,1,(MethodInfo *)0x0);
  (__this->fields).SkinsEnabled = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).SkinsEnabled,pSVar1);
  pIVar2 = method->klass->rgctx_data->_1_Settings_ListSetting_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
  }
  __this_00 = (Settings_ListSetting_T__o *)il2cpp_runtime_helper_023052d0(pIVar2);
  Settings_ListSetting_object____ctor_3521170
            (__this_00,(MethodInfo_3521170 *)method->klass->rgctx_data->_2_Settings_ListSetting_T___ctor);
  (__this->fields).SkinSets = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).SkinSets,__this_00);
  Settings_SetSettingsContainer_object____ctor
            ((Settings_SetSettingsContainer_T__o *)__this,
             (MethodInfo_39E1470 *)method->klass->rgctx_data->_3_Settings_SetSettingsContainer_T___ctor);
  return;
}


