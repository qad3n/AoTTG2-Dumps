// Type: Settings.BaseCustomSkinSettings
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/BaseCustomSkinSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/BaseCustomSkinSettings.cs
// --------------------------------

// Settings.BaseCustomSkinSettings<object>$$GetSkinsEnabled
// il2cpp: Settings_BoolSetting_o* Settings_BaseCustomSkinSettings_object___GetSkinsEnabled (Settings_BaseCustomSkinSettings_T__o* __this, const MethodInfo_C7FB50* method);
// 0x180c7fb50

Settings_BoolSetting_o*
Settings_BaseCustomSkinSettings_object___GetSkinsEnabled(Settings_BaseCustomSkinSettings_T__o* __this, MethodInfo_C7FB50* method)

{
  return (__this->fields)._Current_k__BackingField;
}


// Settings.BaseCustomSkinSettings<object>$$GetSkinSets
// il2cpp: Settings_IListSetting_o* Settings_BaseCustomSkinSettings_object___GetSkinSets (Settings_BaseCustomSkinSettings_T__o* __this, const MethodInfo_5853D0* method);
// 0x1805853d0

Settings_IListSetting_o*
Settings_BaseCustomSkinSettings_object___GetSkinSets(Settings_BaseCustomSkinSettings_T__o* __this, MethodInfo_5853D0* method)

{
  return *(Unity_Properties_IProperty_TContainer__o **)&__this[1].fields;
}


// Settings.BaseCustomSkinSettings<object>$$GetSkinsLocal
// il2cpp: Settings_BoolSetting_o* Settings_BaseCustomSkinSettings_object___GetSkinsLocal (Settings_BaseCustomSkinSettings_T__o* __this, const MethodInfo_5853C0* method);
// 0x1805853c0

Settings_BoolSetting_o*
Settings_BaseCustomSkinSettings_object___GetSkinsLocal(Settings_BaseCustomSkinSettings_T__o* __this, MethodInfo_5853C0* method)

{
  return *(Unity_Properties_IProperty_TContainer__o **)
          &(__this->fields).m_IndexedCollectionPropertyBag.fields.m_Position;
}


// Settings.BaseCustomSkinSettings<object>$$.ctor
// il2cpp: void Settings_BaseCustomSkinSettings_object____ctor (Settings_BaseCustomSkinSettings_T__o* __this, const MethodInfo_FF5F20* method);
// 0x180ff5f20

void Settings_BaseCustomSkinSettings_object____ctor
               (Settings_BaseCustomSkinSettings_T__o *__this,MethodInfo_FF5F20 *method)

{
  Settings_BoolSetting_o *pSVar1;
  Il2CppClass *klass;
  Settings_ListSetting_T__o *__this_00;
  
  if (Il2CppMethodInitialized_184340459 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    Il2CppMethodInitialized_184340459 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_1f11be0(pSVar1,false,(MethodInfo *)0x0);
  (__this->fields).SkinsLocal = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinsLocal,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_1f11be0(pSVar1,true,(MethodInfo *)0x0);
  (__this->fields).SkinsEnabled = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinsEnabled,pSVar1);
  klass = method->klass->rgctx_data->_1_Settings_ListSetting_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_00 = (Settings_ListSetting_T__o *)il2cpp_codegen_object_new(klass);
  Settings_ListSetting_object____ctor_182b940
            (__this_00,(MethodInfo_182B940 *)method->klass->rgctx_data->_2_Settings_ListSetting_T___ctor);
  (__this->fields).SkinSets = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinSets,__this_00);
  Settings_SetSettingsContainer_object____ctor
            ((Settings_SetSettingsContainer_T__o *)__this,
             (MethodInfo_C8F6A0 *)method->klass->rgctx_data->_3_Settings_SetSettingsContainer_T___ctor);
  return;
}


