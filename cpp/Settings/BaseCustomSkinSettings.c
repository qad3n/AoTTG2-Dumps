// Type: Settings.BaseCustomSkinSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/BaseCustomSkinSettings.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/CustomSkins/BaseCustomSkinSettings.cs  [CHANGED since prior version]
// --------------------------------

// Settings.BaseCustomSkinSettings<object>$$GetSkinsEnabled
// il2cpp: Settings_BoolSetting_o* Settings_BaseCustomSkinSettings_object___GetSkinsEnabled (Settings_BaseCustomSkinSettings_T__o* __this, const MethodInfo_2E46340* method);
// 0x2f46340

Settings_BoolSetting_o *
Settings_BaseCustomSkinSettings<object>__GetSkinsEnabled
          (Settings_BaseCustomSkinSettings_T__o *__this,MethodInfo_2E46340 *method)

{
  return (__this->fields).SkinsEnabled;
}


// Settings.BaseCustomSkinSettings<object>$$GetSkinSets
// il2cpp: Settings_IListSetting_o* Settings_BaseCustomSkinSettings_object___GetSkinSets (Settings_BaseCustomSkinSettings_T__o* __this, const MethodInfo_2E46350* method);
// 0x2f46350

Settings_IListSetting_o *
Settings_BaseCustomSkinSettings<object>__GetSkinSets
          (Settings_BaseCustomSkinSettings_T__o *__this,MethodInfo_2E46350 *method)

{
  return (Settings_IListSetting_o *)(__this->fields).SkinSets;
}


// Settings.BaseCustomSkinSettings<object>$$GetSkinsLocal
// il2cpp: Settings_BoolSetting_o* Settings_BaseCustomSkinSettings_object___GetSkinsLocal (Settings_BaseCustomSkinSettings_T__o* __this, const MethodInfo_2E46360* method);
// 0x2f46360

Settings_BoolSetting_o *
Settings_BaseCustomSkinSettings<object>__GetSkinsLocal
          (Settings_BaseCustomSkinSettings_T__o *__this,MethodInfo_2E46360 *method)

{
  return (__this->fields).SkinsLocal;
}


// Settings.BaseCustomSkinSettings<object>$$.ctor
// il2cpp: void Settings_BaseCustomSkinSettings_object____ctor (Settings_BaseCustomSkinSettings_T__o* __this, const MethodInfo_2E46370* method);
// 0x2f46370

void Settings_BaseCustomSkinSettings<object>___ctor
               (Settings_BaseCustomSkinSettings_T__o *__this,MethodInfo_2E46370 *method)

{
  Settings_BoolSetting_o *pSVar1;
  Il2CppClass *pIVar2;
  Settings_ListSetting_T__o *__this_00;
  
  if (DAT_056ff9bf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    DAT_056ff9bf = '\x01';
  }
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar1,0,(MethodInfo *)0x0);
  (__this->fields).SkinsLocal = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).SkinsLocal,pSVar1);
  pSVar1 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(pSVar1,1,(MethodInfo *)0x0);
  (__this->fields).SkinsEnabled = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).SkinsEnabled,pSVar1);
  pIVar2 = method->klass->rgctx_data->_1_Settings_ListSetting_T_;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0();
  }
  __this_00 = (Settings_ListSetting_T__o *)il2cpp_runtime_glue(pIVar2);
  Settings_ListSetting<object>___ctor
            (__this_00,
             (MethodInfo_349ABA0 *)method->klass->rgctx_data->_2_Settings_ListSetting_T___ctor);
  (__this->fields).SkinSets = __this_00;
  il2cpp_runtime_glue(&(__this->fields).SkinSets,__this_00);
  Settings_SetSettingsContainer<object>___ctor
            ((Settings_SetSettingsContainer_T__o *)__this,
             (MethodInfo_394FAA0 *)
             method->klass->rgctx_data->_3_Settings_SetSettingsContainer_T___ctor);
  return;
}


