// Type: Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgIntSettingAdapter.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, Settings_IntSetting_o* setting, const MethodInfo* method);
// 0x44600e0

void Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this,
               Settings_IntSetting_o *setting,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._setting = setting;
  il2cpp_runtime_helper_022b4080(&__this->fields,setting);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$get_TextValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_TextValue (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, const MethodInfo* method);
// 0x4460110

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_TextValue
          (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  System_Globalization_CultureInfo_o *provider;
  System_String_o *pSVar2;
  int32_t local_c;
  
  if (g_data_057ae780 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"0");
    g_data_057ae780 = '\x01';
  }
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
    local_c = (pSVar1->fields)._value;
    if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    pSVar2 = System_Int32__ToString_3cb4470
                       ((int32_t)&local_c,(System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
    return pSVar2;
  }
  return "0";
}


// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$get_FloatValue
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_FloatValue (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, const MethodInfo* method);
// 0x44601b0

float Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_FloatValue
                (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  
  if (g_data_057ae781 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ae781 = '\x01';
  }
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
    return (float)(pSVar1->fields)._value;
  }
  return 0.0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$get_MinValue
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_MinValue (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, const MethodInfo* method);
// 0x44601f0

float Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_MinValue
                (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_IntSetting_o *pSVar2;
  float fVar3;
  
  pSVar2 = (__this->fields)._setting;
  if (pSVar2 != (Settings_IntSetting_o *)0x0) {
    iVar1 = (pSVar2->fields).MinValue;
    fVar3 = 0.0;
    if (iVar1 != -0x80000000) {
      fVar3 = (float)iVar1;
    }
    return fVar3;
  }
  return 0.0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$get_MaxValue
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_MaxValue (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, const MethodInfo* method);
// 0x4460220

float Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_MaxValue
                (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_IntSetting_o *pSVar2;
  
  pSVar2 = (__this->fields)._setting;
  if ((pSVar2 != (Settings_IntSetting_o *)0x0) && (iVar1 = (pSVar2->fields).MaxValue, iVar1 != 0x7fffffff)) {
    return (float)iVar1;
  }
  return 1.0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$get_HasMinValue
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_HasMinValue (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, const MethodInfo* method);
// 0x4460250

bool_conflict
Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_HasMinValue
          (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
    return (bool_conflict)CONCAT71((int7)((ulong)pSVar1 >> 8),(pSVar1->fields).MinValue != -0x80000000);
  }
  return 0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$get_HasMaxValue
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_HasMaxValue (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, const MethodInfo* method);
// 0x4460270

bool_conflict
Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__get_HasMaxValue
          (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
    return (bool_conflict)CONCAT71((int7)((ulong)pSVar1 >> 8),(pSVar1->fields).MaxValue != 0x7fffffff);
  }
  return 0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$SetFloat
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__SetFloat (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, float value, const MethodInfo* method);
// 0x4460290

void Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__SetFloat
               (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this,float value,
               MethodInfo *method)

{
  Settings_IntSetting_o *__this_00;
  
  if (g_data_057ae782 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae782 = '\x01';
  }
  __this_00 = (__this->fields)._setting;
  if (__this_00 != (Settings_IntSetting_o *)0x0) {
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this_00,(int)value,MethodInfo_Void_set_Value);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter$$SetText
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__SetText (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o* __this, System_String_o* value, const MethodInfo* method);
// 0x44602f0

void Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter__SetText
               (Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this,System_String_o *value,
               MethodInfo *method)

{
  uint in_EAX;
  bool_conflict bVar1;
  System_Globalization_CultureInfo_o *provider;
  Settings_TypedSetting_int__Fields SVar2;
  Settings_IntSetting_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ae783 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae783 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if ((__this->fields)._setting != (Settings_IntSetting_o *)0x0) {
    if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    SVar2.DefaultValue = 7;
    SVar2._value = 0;
    bVar1 = System_Int32__TryParse_3cb4bf0
                      (value,7,(System_IFormatProvider_o *)provider,(int32_t *)((long)&uStack_18 + 4),
                       (MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      __this_00 = (__this->fields)._setting;
      if (__this_00 == (Settings_IntSetting_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
        (__this_00->fields).DefaultValue = SVar2.DefaultValue;
        (__this_00->fields)._value = SVar2._value;
        il2cpp_runtime_helper_022b4080(&__this_00->fields,SVar2);
        return;
      }
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)__this_00,uStack_18._4_4_,MethodInfo_Void_set_Value);
    }
  }
  return;
}


