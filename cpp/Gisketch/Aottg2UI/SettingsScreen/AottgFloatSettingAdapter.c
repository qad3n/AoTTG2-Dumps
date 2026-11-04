// Type: Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgFloatSettingAdapter.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, Settings_FloatSetting_o* setting, const MethodInfo* method);
// 0x180577fb0

void
Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, Settings_FloatSetting_o* setting, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._setting = method;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._setting,method);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$get_TextValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_TextValue (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, const MethodInfo* method);
// 0x182304470

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_TextValue
          (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this,MethodInfo *method)

{
  System_Globalization_CultureInfo_o *provider;
  System_String_o *pSVar1;
  float local_res8 [8];
  
  if (Il2CppMethodInitialized_184347719 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"0.##################");
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_184347719 = '\x01';
  }
  if ((__this->fields)._setting != (Settings_FloatSetting_o *)0x0) {
    local_res8[0] = (((__this->fields)._setting)->fields)._value;
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    pSVar1 = System_Single__ToString_1b4a0d0
                       (local_res8,"0.##################",(System_IFormatProvider_o *)provider,
                        (MethodInfo *)0x0);
    return pSVar1;
  }
  return "0";
}


// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$get_FloatValue
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_FloatValue (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, const MethodInfo* method);
// 0x182304370

float Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_FloatValue
                (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434771a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_18434771a = '\x01';
  }
  if ((__this->fields)._setting != (Settings_FloatSetting_o *)0x0) {
    return (((__this->fields)._setting)->fields)._value;
  }
  return 0.0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$get_MinValue
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_MinValue (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, const MethodInfo* method);
// 0x182304450

float Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_MinValue
                (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this,MethodInfo *method)

{
  float fVar1;
  
  if (((__this->fields)._setting != (Settings_FloatSetting_o *)0x0) &&
     (fVar1 = (((__this->fields)._setting)->fields).MinValue, fVar1 != -3.4028235e+38)) {
    return fVar1;
  }
  return 0.0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$get_MaxValue
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_MaxValue (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, const MethodInfo* method);
// 0x182304420

float Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_MaxValue
                (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this,MethodInfo *method)

{
  float fVar1;
  
  if (((__this->fields)._setting != (Settings_FloatSetting_o *)0x0) &&
     (fVar1 = (((__this->fields)._setting)->fields).MaxValue, fVar1 != 3.4028235e+38)) {
    return fVar1;
  }
  return 1.0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$get_HasMinValue
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_HasMinValue (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, const MethodInfo* method);
// 0x1823043f0

bool Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_HasMinValue
               (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this,MethodInfo *method)

{
  if (((__this->fields)._setting != (Settings_FloatSetting_o *)0x0) &&
     ((((__this->fields)._setting)->fields).MinValue != -3.4028235e+38)) {
    return true;
  }
  return false;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$get_HasMaxValue
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_HasMaxValue (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, const MethodInfo* method);
// 0x1823043c0

bool Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_HasMaxValue
               (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this,MethodInfo *method)

{
  if (((__this->fields)._setting != (Settings_FloatSetting_o *)0x0) &&
     ((((__this->fields)._setting)->fields).MaxValue != 3.4028235e+38)) {
    return true;
  }
  return false;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$get_MaxCharacters
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_MaxCharacters (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_MaxCharacters(Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, MethodInfo* method)

{
  return 0x14;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$SetFloat
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__SetFloat (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, float value, const MethodInfo* method);
// 0x182304250

void Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__SetFloat
               (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this,float value,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434771b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    Il2CppMethodInitialized_18434771b = '\x01';
  }
  if ((__this->fields)._setting != (Settings_FloatSetting_o *)0x0) {
    Settings_TypedSetting_float___set_Value
              ((Settings_TypedSetting_float__o *)(__this->fields)._setting,value,
               (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$SetText
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__SetText (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, System_String_o* value, const MethodInfo* method);
// 0x1823042b0

void Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__SetText
               (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this,System_String_o *value,
               MethodInfo *method)

{
  Settings_FloatSetting_o *__this_00;
  bool bVar1;
  System_Globalization_CultureInfo_o *provider;
  float local_res8 [2];
  
  if (Il2CppMethodInitialized_18434771c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    Il2CppMethodInitialized_18434771c = '\x01';
  }
  local_res8[0] = 0.0;
  if ((__this->fields)._setting != (Settings_FloatSetting_o *)0x0) {
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    bVar1 = System_Single__TryParse_1b4a540
                      (value,0xa7,(System_IFormatProvider_o *)provider,local_res8,(MethodInfo *)0x0);
    if (bVar1) {
      __this_00 = (__this->fields)._setting;
      if (__this_00 == (Settings_FloatSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      Settings_TypedSetting_float___set_Value
                ((Settings_TypedSetting_float__o *)__this_00,local_res8[0],
                 (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
    }
  }
  return;
}


