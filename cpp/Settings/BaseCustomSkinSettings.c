// Type: Settings.BaseCustomSkinSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Settings/BaseCustomSkinSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/BaseCustomSkinSettings.cs
// --------------------------------

// Settings.BaseCustomSkinSettings<object>$$GetSkinsEnabled
// il2cpp: Settings_BoolSetting_o* Settings_BaseCustomSkinSettings_object___GetSkinsEnabled (Settings_BaseCustomSkinSettings_T__o* __this, const MethodInfo_44DAD70* method);
// 0x45dad70

Settings_BoolSetting_o *
Settings_BaseCustomSkinSettings_object___GetSkinsEnabled
          (Settings_BaseCustomSkinSettings_T__o *__this,MethodInfo_44DAD70 *method)

{
  return (__this->fields).SkinsEnabled;
}


// Settings.BaseCustomSkinSettings<object>$$GetSkinSets
// il2cpp: Settings_IListSetting_o* Settings_BaseCustomSkinSettings_object___GetSkinSets (Settings_BaseCustomSkinSettings_T__o* __this, const MethodInfo_44DAD80* method);
// 0x45dad80

Settings_IListSetting_o *
Settings_BaseCustomSkinSettings_object___GetSkinSets
          (Settings_BaseCustomSkinSettings_T__o *__this,MethodInfo_44DAD80 *method)

{
  return (Settings_IListSetting_o *)(__this->fields).SkinSets;
}


// Settings.BaseCustomSkinSettings<object>$$GetSkinsLocal
// il2cpp: Settings_BoolSetting_o* Settings_BaseCustomSkinSettings_object___GetSkinsLocal (Settings_BaseCustomSkinSettings_T__o* __this, const MethodInfo_44DAD90* method);
// 0x45dad90

Settings_BoolSetting_o *
Settings_BaseCustomSkinSettings_object___GetSkinsLocal
          (Settings_BaseCustomSkinSettings_T__o *__this,MethodInfo_44DAD90 *method)

{
  return (__this->fields).SkinsLocal;
}


// Settings.BaseCustomSkinSettings<object>$$.ctor
// il2cpp: void Settings_BaseCustomSkinSettings_object____ctor (Settings_BaseCustomSkinSettings_T__o* __this, const MethodInfo_44DADA0* method);
// 0x45dada0

void Settings_BaseCustomSkinSettings_object____ctor
               (Settings_BaseCustomSkinSettings_T__o *__this,MethodInfo_44DADA0 *method)

{
  Settings_BoolSetting_o *pSVar1;
  Il2CppClass *klass;
  Settings_ListSetting_T__o *__this_00;
  
  if (Il2CppMethodInitialized_07540c3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    Il2CppMethodInitialized_07540c3b = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar1,false,(MethodInfo *)0x0);
  (__this->fields).SkinsLocal = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinsLocal);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar1,true,(MethodInfo *)0x0);
  (__this->fields).SkinsEnabled = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinsEnabled);
  klass = method->klass->rgctx_data->_1_Settings_ListSetting_T_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  __this_00 = (Settings_ListSetting_T__o *)il2cpp_codegen_object_new(klass);
  Settings_ListSetting_object____ctor_515d6d0
            (__this_00,(MethodInfo_515D6D0 *)method->klass->rgctx_data->_2_Settings_ListSetting_T___ctor);
  (__this->fields).SkinSets = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkinSets);
  Settings_SetSettingsContainer_object____ctor
            ((Settings_SetSettingsContainer_T__o *)__this,
             (MethodInfo_40485F0 *)method->klass->rgctx_data->_3_Settings_SetSettingsContainer_T___ctor);
  return;
}


