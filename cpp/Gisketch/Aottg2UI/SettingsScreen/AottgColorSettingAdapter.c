// Type: Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingAdapter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgColorSettingAdapter.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingAdapter$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter_o* __this, Settings_ColorSetting_o* setting, const MethodInfo* method);
// 0x5dc6430

void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter_o *__this,
               Settings_ColorSetting_o *setting,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._setting = setting;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._setting);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingAdapter$$get_TextValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter__get_TextValue (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter_o* __this, const MethodInfo* method);
// 0x5dc6460

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter__get_TextValue
          (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter_o *__this,MethodInfo *method)

{
  Settings_ColorSetting_o *pSVar1;
  System_String_o *pSVar2;
  Utility_Color255_o *__this_00;
  UnityEngine_Color_o local_18;
  
  if (Il2CppMethodInitialized_075481c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"#");
    Il2CppMethodInitialized_075481c4 = '\x01';
  }
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 == (Settings_ColorSetting_o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
    Utility_Color255___ctor_5ce7770(__this_00,(MethodInfo *)0x0);
  }
  else {
    __this_00 = (pSVar1->fields)._value;
  }
  if (__this_00 == (Utility_Color255_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_18 = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
  pSVar2 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0(&local_18,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_52f0320("#",pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingAdapter$$SetText
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter__SetText (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5dc6510

void Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter__SetText
               (Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter_o *__this,System_String_o *value,
               MethodInfo *method)

{
  Settings_ColorSetting_o *__this_00;
  bool bVar1;
  Utility_Color255_o *__this_01;
  UnityEngine_Color_o color;
  UnityEngine_Color_Fields UStack_48;
  float fStack_38;
  float fStack_34;
  undefined8 uStack_30;
  UnityEngine_Color_Fields UStack_28;
  
  if (Il2CppMethodInitialized_075481c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_075481c5 = '\x01';
  }
  UStack_48.r = 0.0;
  UStack_48.g = 0.0;
  UStack_48.b = 0.0;
  UStack_48.a = 0.0;
  if ((__this->fields)._setting != (Settings_ColorSetting_o *)0x0) {
    bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                      (value,(UnityEngine_Color_o *)&UStack_48,(MethodInfo *)0x0);
    if (bVar1) {
      __this_00 = (__this->fields)._setting;
      UStack_28.r = UStack_48.r;
      UStack_28.g = UStack_48.g;
      UStack_28.b = 0.0;
      UStack_28.a = 0.0;
      fStack_38 = UStack_48.b;
      fStack_34 = UStack_48.a;
      uStack_30 = 0;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
      color.fields.b = fStack_38;
      color.fields.a = fStack_34;
      color.fields.r = UStack_28.r;
      color.fields.g = UStack_28.g;
      Utility_Color255___ctor_5ce7790(__this_01,color,(MethodInfo *)0x0);
      if (__this_00 == (Settings_ColorSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)__this_01,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
    }
  }
  return;
}


