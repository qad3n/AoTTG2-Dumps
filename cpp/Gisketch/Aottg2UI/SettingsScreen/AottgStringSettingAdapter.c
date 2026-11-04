// Type: Gisketch.Aottg2UI.SettingsScreen.AottgStringSettingAdapter
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgStringSettingAdapter.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgStringSettingAdapter$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o* __this, Settings_StringSetting_o* setting, const MethodInfo* method);
// 0x180577fb0

void
Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o* __this, Settings_StringSetting_o* setting, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._setting = method;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._setting,method);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgStringSettingAdapter$$get_TextValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter__get_TextValue (Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o* __this, const MethodInfo* method);
// 0x18231f440

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter__get_TextValue
          (Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434771d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_18434771d = '\x01';
  }
  if ((__this->fields)._setting != (Settings_StringSetting_o *)0x0) {
    return (((__this->fields)._setting)->fields)._value;
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.SettingsScreen.AottgStringSettingAdapter$$get_MaxCharacters
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter__get_MaxCharacters (Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o* __this, const MethodInfo* method);
// 0x18231f420

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter__get_MaxCharacters
                  (Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (((__this->fields)._setting != (Settings_StringSetting_o *)0x0) &&
     (pSVar1 = (__this->fields)._setting, (pSVar1->fields).MaxLength != 0x7fffffff)) {
    return (pSVar1->fields).MaxLength;
  }
  return 0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgStringSettingAdapter$$SetText
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter__SetText (Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o* __this, System_String_o* value, const MethodInfo* method);
// 0x18231f3b0

void Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter__SetText
               (Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o *__this,System_String_o *value,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434771e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_18434771e = '\x01';
  }
  if ((__this->fields)._setting != (Settings_StringSetting_o *)0x0) {
    if (value == (System_String_o *)0x0) {
      value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)(__this->fields)._setting,(Il2CppObject *)value,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  }
  return;
}


