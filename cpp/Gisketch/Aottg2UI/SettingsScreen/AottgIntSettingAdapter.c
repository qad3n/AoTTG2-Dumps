// Type: Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgIntSettingAdapter.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, Settings_IntSetting_o* setting, const MethodInfo* method);
// 0x5dc5d60

void Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this,
               Settings_IntSetting_o *setting,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._setting = setting;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._setting);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$get_TextValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_TextValue (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, const MethodInfo* method);
// 0x5dc5d90

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_TextValue
          (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  System_Globalization_CultureInfo_o *provider;
  System_String_o *pSVar2;
  int32_t local_c;
  
  if (Il2CppMethodInitialized_075481ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_075481ba = '\x01';
  }
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 == (Settings_IntSetting_o *)0x0) {
    return "0";
  }
  local_c = (pSVar1->fields)._value;
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  pSVar2 = System_Int32__ToString_54b7520(&local_c,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$get_FloatValue
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_FloatValue (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, const MethodInfo* method);
// 0x5dc5e20

float Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_FloatValue
                (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_075481bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_075481bb = '\x01';
  }
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 == (Settings_IntSetting_o *)0x0) {
    return 0.0;
  }
  return (float)(pSVar1->fields)._value;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$get_MinValue
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_MinValue (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, const MethodInfo* method);
// 0x5dc5e60

float Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_MinValue
                (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_IntSetting_o *pSVar2;
  float fVar3;
  
  pSVar2 = (__this->fields)._setting;
  if (pSVar2 == (Settings_IntSetting_o *)0x0) {
    return 0.0;
  }
  iVar1 = (pSVar2->fields).MinValue;
  fVar3 = 0.0;
  if (iVar1 != -0x80000000) {
    fVar3 = (float)iVar1;
  }
  return fVar3;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$get_MaxValue
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_MaxValue (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, const MethodInfo* method);
// 0x5dc5e90

float Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_MaxValue
                (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_IntSetting_o *pSVar2;
  
  pSVar2 = (__this->fields)._setting;
  if ((pSVar2 == (Settings_IntSetting_o *)0x0) || (iVar1 = (pSVar2->fields).MaxValue, iVar1 == 0x7fffffff)) {
    return 1.0;
  }
  return (float)iVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$get_HasMinValue
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_HasMinValue (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, const MethodInfo* method);
// 0x5dc5ec0

bool Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_HasMinValue
               (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 == (Settings_IntSetting_o *)0x0) {
    return false;
  }
  return (pSVar1->fields).MinValue != -0x80000000;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$get_HasMaxValue
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_HasMaxValue (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, const MethodInfo* method);
// 0x5dc5ee0

bool Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_HasMaxValue
               (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 == (Settings_IntSetting_o *)0x0) {
    return false;
  }
  return (pSVar1->fields).MaxValue != 0x7fffffff;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$get_MaxCharacters
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_MaxCharacters (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, const MethodInfo* method);
// 0x5dc5f00

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_MaxCharacters
                  (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this,MethodInfo *method)

{
  return 0xb;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$SetFloat
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__SetFloat (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, float value, const MethodInfo* method);
// 0x5dc5f10

void Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__SetFloat
               (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this,float value,
               MethodInfo *method)

{
  Settings_IntSetting_o *__this_00;
  
  if (Il2CppMethodInitialized_075481bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_075481bc = '\x01';
  }
  __this_00 = (__this->fields)._setting;
  if (__this_00 == (Settings_IntSetting_o *)0x0) {
    return;
  }
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)__this_00,(int)value,
             (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$SetText
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__SetText (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5dc5f70

void Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__SetText
               (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this,System_String_o *value,
               MethodInfo *method)

{
  Settings_IntSetting_o *__this_00;
  bool bVar1;
  uint in_EAX;
  System_Globalization_CultureInfo_o *provider;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (Il2CppMethodInitialized_075481bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_075481bd = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if ((__this->fields)._setting != (Settings_IntSetting_o *)0x0) {
    if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    bVar1 = System_Int32__TryParse_54b7c80
                      (value,7,(System_IFormatProvider_o *)provider,(int32_t *)((long)&uStack_18 + 4),
                       (MethodInfo *)0x0);
    if (bVar1) {
      __this_00 = (__this->fields)._setting;
      if (__this_00 == (Settings_IntSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)__this_00,uStack_18._4_4_,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    }
  }
  return;
}


