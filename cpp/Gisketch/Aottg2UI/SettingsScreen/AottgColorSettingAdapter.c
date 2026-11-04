// Type: Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingAdapter
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgColorSettingAdapter.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingAdapter$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter_o* __this, Settings_ColorSetting_o* setting, const MethodInfo* method);
// 0x180577fb0

void
Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter_o* __this, Settings_ColorSetting_o* setting, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._setting = method;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._setting,method);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingAdapter$$get_TextValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter__get_TextValue (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter_o* __this, const MethodInfo* method);
// 0x182303bc0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter__get_TextValue
          (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter_o *__this,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  UnityEngine_Color_o *pUVar1;
  System_String_o *pSVar2;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_18434771f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_18434771f = '\x01';
  }
  if ((__this->fields)._setting == (Settings_ColorSetting_o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
    Utility_Color255___ctor_2332720(__this_00,(MethodInfo *)0x0);
  }
  else {
    __this_00 = (((__this->fields)._setting)->fields)._value;
  }
  if (__this_00 != (Utility_Color255_o *)0x0) {
    pUVar1 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_18,__this_00,(MethodInfo *)0x0);
    local_18.r = (pUVar1->fields).r;
    local_18.g = (pUVar1->fields).g;
    local_18.b = (pUVar1->fields).b;
    local_18.a = (pUVar1->fields).a;
    pSVar2 = UnityEngine_ColorUtility__ToHtmlStringRGBA_2f00800
                       ((UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_1969e50("#",pSVar2,(MethodInfo *)0x0);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingAdapter$$SetText
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter__SetText (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter_o* __this, System_String_o* value, const MethodInfo* method);
// 0x182303b00

void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter__SetText
               (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter_o *__this,System_String_o *value,
               MethodInfo *method)

{
  Settings_ColorSetting_o *__this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  Utility_Color255_o *__this_01;
  UnityEngine_Color_Fields local_38;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184347720 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_184347720 = '\x01';
  }
  local_38.r = 0.0;
  local_38.g = 0.0;
  local_38.b = 0.0;
  local_38.a = 0.0;
  if ((__this->fields)._setting != (Settings_ColorSetting_o *)0x0) {
    bVar5 = UnityEngine_ColorUtility__TryParseHtmlString
                      (value,(UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0);
    uVar3 = local_38._8_8_;
    uVar1 = local_38._0_8_;
    if (bVar5) {
      __this_00 = (__this->fields)._setting;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
      uVar4 = local_38._8_8_;
      uVar2 = local_38._0_8_;
      local_38.r = (float)uVar1;
      local_38.g = SUB84(uVar1,4);
      local_28[0].r = local_38.r;
      local_28[0].g = local_38.g;
      local_38.b = (float)uVar3;
      local_38.a = SUB84(uVar3,4);
      local_28[0].b = local_38.b;
      local_28[0].a = local_38.a;
      local_38._0_8_ = uVar2;
      local_38._8_8_ = uVar4;
      Utility_Color255___ctor_23327a0(__this_01,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
      if (__this_00 == (Settings_ColorSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)__this_01,
                 (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
    }
  }
  return;
}


