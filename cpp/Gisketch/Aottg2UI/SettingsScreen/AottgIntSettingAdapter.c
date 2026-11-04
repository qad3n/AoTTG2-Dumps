// Type: Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgIntSettingAdapter.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, Settings_IntSetting_o* setting, const MethodInfo* method);
// 0x180577fb0

void
Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, Settings_IntSetting_o* setting, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._setting = method;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._setting,method);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$get_TextValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_TextValue (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, const MethodInfo* method);
// 0x182304720

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_TextValue
          (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this,MethodInfo *method)

{
  System_Globalization_CultureInfo_o *provider;
  System_String_o *pSVar1;
  int32_t local_res8 [8];
  
  if (Il2CppMethodInitialized_184347715 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_184347715 = '\x01';
  }
  if ((__this->fields)._setting != (Settings_IntSetting_o *)0x0) {
    local_res8[0] = (((__this->fields)._setting)->fields)._value;
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    pSVar1 = System_Int32__ToString_1b29900(local_res8,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0)
    ;
    return pSVar1;
  }
  return "0";
}


// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$get_FloatValue
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_FloatValue (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, const MethodInfo* method);
// 0x182304630

float Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_FloatValue
                (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347716 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184347716 = '\x01';
  }
  if ((__this->fields)._setting != (Settings_IntSetting_o *)0x0) {
    return (float)(((__this->fields)._setting)->fields)._value;
  }
  return 0.0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$get_MinValue
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_MinValue (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, const MethodInfo* method);
// 0x1823046f0

float Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_MinValue
                (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  
  if (((__this->fields)._setting != (Settings_IntSetting_o *)0x0) &&
     (pSVar1 = (__this->fields)._setting, (pSVar1->fields).MinValue != -0x80000000)) {
    return (float)(pSVar1->fields).MinValue;
  }
  return 0.0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$get_MaxValue
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_MaxValue (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, const MethodInfo* method);
// 0x1823046c0

float Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_MaxValue
                (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  
  if (((__this->fields)._setting != (Settings_IntSetting_o *)0x0) &&
     (pSVar1 = (__this->fields)._setting, (pSVar1->fields).MaxValue != 0x7fffffff)) {
    return (float)(pSVar1->fields).MaxValue;
  }
  return 1.0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$get_HasMinValue
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_HasMinValue (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, const MethodInfo* method);
// 0x1823046a0

bool Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_HasMinValue
               (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this,MethodInfo *method)

{
  if ((__this->fields)._setting == (Settings_IntSetting_o *)0x0) {
    return false;
  }
  return (((__this->fields)._setting)->fields).MinValue != -0x80000000;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$get_HasMaxValue
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_HasMaxValue (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, const MethodInfo* method);
// 0x182304680

bool Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_HasMaxValue
               (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this,MethodInfo *method)

{
  if ((__this->fields)._setting == (Settings_IntSetting_o *)0x0) {
    return false;
  }
  return (((__this->fields)._setting)->fields).MaxValue != 0x7fffffff;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$get_MaxCharacters
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_MaxCharacters (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, const MethodInfo* method);
// 0x181b2a120

int32_t
Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_MaxCharacters(Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, MethodInfo* method)

{
  return 0xb;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$SetFloat
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__SetFloat (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, float value, const MethodInfo* method);
// 0x182304520

void Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__SetFloat
               (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this,float value,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347717 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184347717 = '\x01';
  }
  if ((__this->fields)._setting != (Settings_IntSetting_o *)0x0) {
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)(__this->fields)._setting,(int)value,
               (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$SetText
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__SetText (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, System_String_o* value, const MethodInfo* method);
// 0x182304580

void Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__SetText
               (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this,System_String_o *value,
               MethodInfo *method)

{
  Settings_IntSetting_o *__this_00;
  bool bVar1;
  System_Globalization_CultureInfo_o *provider;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184347718 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184347718 = '\x01';
  }
  local_res8[0] = 0;
  if ((__this->fields)._setting != (Settings_IntSetting_o *)0x0) {
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    bVar1 = System_Int32__TryParse_1b29d60
                      (value,7,(System_IFormatProvider_o *)provider,local_res8,(MethodInfo *)0x0);
    if (bVar1) {
      __this_00 = (__this->fields)._setting;
      if (__this_00 == (Settings_IntSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)__this_00,local_res8[0],
                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    }
  }
  return;
}


