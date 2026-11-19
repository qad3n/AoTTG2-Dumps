// Type: Gisketch.Aottg2UI.SettingsScreen.AottgStringSettingAdapter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgStringSettingAdapter.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgStringSettingAdapter$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o* __this, Settings_StringSetting_o* setting, const MethodInfo* method);
// 0x5dc6320

void Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o *__this,
               Settings_StringSetting_o *setting,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._setting = setting;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._setting);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgStringSettingAdapter$$get_TextValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter__get_TextValue (Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o* __this, const MethodInfo* method);
// 0x5dc6350

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter__get_TextValue
          (Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_075481c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_075481c2 = '\x01';
  }
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 == (Settings_StringSetting_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  return (pSVar1->fields)._value;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgStringSettingAdapter$$get_MaxCharacters
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter__get_MaxCharacters (Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o* __this, const MethodInfo* method);
// 0x5dc63a0

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter__get_MaxCharacters
                  (Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_StringSetting_o *pSVar2;
  int iVar3;
  
  pSVar2 = (__this->fields)._setting;
  if (pSVar2 == (Settings_StringSetting_o *)0x0) {
    return 0;
  }
  iVar1 = (pSVar2->fields).MaxLength;
  iVar3 = 0;
  if (iVar1 != 0x7fffffff) {
    iVar3 = iVar1;
  }
  return iVar3;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgStringSettingAdapter$$SetText
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter__SetText (Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5dc63c0

void Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter__SetText
               (Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o *__this,System_String_o *value,
               MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  
  if (Il2CppMethodInitialized_075481c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_075481c3 = '\x01';
  }
  __this_00 = (__this->fields)._setting;
  if (__this_00 == (Settings_StringSetting_o *)0x0) {
    return;
  }
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  return;
}


