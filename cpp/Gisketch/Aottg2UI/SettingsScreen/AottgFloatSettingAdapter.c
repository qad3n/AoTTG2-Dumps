// Type: Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgFloatSettingAdapter.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, Settings_FloatSetting_o* setting, const MethodInfo* method);
// 0x5dc6020

void Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this,
               Settings_FloatSetting_o *setting,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._setting = setting;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._setting);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$get_TextValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_TextValue (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, const MethodInfo* method);
// 0x5dc6050

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_TextValue
          (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this,MethodInfo *method)

{
  Settings_FloatSetting_o *pSVar1;
  System_Globalization_CultureInfo_o *provider;
  System_String_o *pSVar2;
  float local_c;
  
  if (Il2CppMethodInitialized_075481be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"0.##################");
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_075481be = '\x01';
  }
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 == (Settings_FloatSetting_o *)0x0) {
    return "0";
  }
  local_c = (pSVar1->fields)._value;
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  pSVar2 = System_Single__ToString_54d0ad0
                     (&local_c,"0.##################",(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$get_FloatValue
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_FloatValue (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, const MethodInfo* method);
// 0x5dc6100

float Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_FloatValue
                (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this,MethodInfo *method)

{
  Settings_FloatSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_075481bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_075481bf = '\x01';
  }
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 == (Settings_FloatSetting_o *)0x0) {
    return 0.0;
  }
  return (pSVar1->fields)._value;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$get_MinValue
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_MinValue (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, const MethodInfo* method);
// 0x5dc6140

float Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_MinValue
                (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this,MethodInfo *method)

{
  float fVar1;
  Settings_FloatSetting_o *pSVar2;
  
  pSVar2 = (__this->fields)._setting;
  if (pSVar2 != (Settings_FloatSetting_o *)0x0) {
    fVar1 = (pSVar2->fields).MinValue;
    if ((fVar1 != -3.4028235e+38) || (NAN(fVar1))) {
      return fVar1;
    }
  }
  return 0.0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$get_MaxValue
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_MaxValue (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, const MethodInfo* method);
// 0x5dc6170

float Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_MaxValue
                (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this,MethodInfo *method)

{
  float fVar1;
  Settings_FloatSetting_o *pSVar2;
  
  pSVar2 = (__this->fields)._setting;
  if (pSVar2 != (Settings_FloatSetting_o *)0x0) {
    fVar1 = (pSVar2->fields).MaxValue;
    if ((fVar1 != 3.4028235e+38) || (NAN(fVar1))) {
      return fVar1;
    }
  }
  return 1.0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$get_HasMinValue
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_HasMinValue (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, const MethodInfo* method);
// 0x5dc61a0

bool Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_HasMinValue
               (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this,MethodInfo *method)

{
  Settings_FloatSetting_o *pSVar1;
  
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 == (Settings_FloatSetting_o *)0x0) {
    return false;
  }
  return (bool)(-((pSVar1->fields).MinValue != -3.4028235e+38) & 1);
}


// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$get_HasMaxValue
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_HasMaxValue (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, const MethodInfo* method);
// 0x5dc61d0

bool Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_HasMaxValue
               (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this,MethodInfo *method)

{
  Settings_FloatSetting_o *pSVar1;
  
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 == (Settings_FloatSetting_o *)0x0) {
    return false;
  }
  return (bool)(-((pSVar1->fields).MaxValue != 3.4028235e+38) & 1);
}


// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$get_MaxCharacters
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_MaxCharacters (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, const MethodInfo* method);
// 0x5dc6200

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_MaxCharacters
                  (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this,MethodInfo *method)

{
  return 0x14;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$SetFloat
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__SetFloat (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, float value, const MethodInfo* method);
// 0x5dc6210

void Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__SetFloat
               (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this,float value,
               MethodInfo *method)

{
  Settings_FloatSetting_o *__this_00;
  
  if (Il2CppMethodInitialized_075481c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    Il2CppMethodInitialized_075481c0 = '\x01';
  }
  __this_00 = (__this->fields)._setting;
  if (__this_00 == (Settings_FloatSetting_o *)0x0) {
    return;
  }
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)__this_00,value,
             (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$SetText
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__SetText (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5dc6270

void Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__SetText
               (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this,System_String_o *value,
               MethodInfo *method)

{
  Settings_FloatSetting_o *__this_00;
  bool bVar1;
  uint in_EAX;
  System_Globalization_CultureInfo_o *provider;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (Il2CppMethodInitialized_075481c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    Il2CppMethodInitialized_075481c1 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if ((__this->fields)._setting != (Settings_FloatSetting_o *)0x0) {
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    bVar1 = System_Single__TryParse_54d11a0
                      (value,0xa7,(System_IFormatProvider_o *)provider,(float *)((long)&uStack_18 + 4),
                       (MethodInfo *)0x0);
    if (bVar1) {
      __this_00 = (__this->fields)._setting;
      if (__this_00 == (Settings_FloatSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      Settings_TypedSetting_float___set_Value
                ((Settings_TypedSetting_float__o *)__this_00,uStack_18._4_4_,
                 (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
    }
  }
  return;
}


