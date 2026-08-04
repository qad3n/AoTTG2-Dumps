// Type: Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgFloatSettingAdapter.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, Settings_FloatSetting_o* setting, const MethodInfo* method);
// 0x44603a0

void Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this,
               Settings_FloatSetting_o *setting,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._setting = setting;
  il2cpp_runtime_helper_022b4080(&__this->fields,setting);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$get_TextValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_TextValue (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, const MethodInfo* method);
// 0x44603d0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_TextValue
          (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this,MethodInfo *method)

{
  Settings_FloatSetting_o *pSVar1;
  System_Globalization_CultureInfo_o *method_00;
  System_String_o *pSVar2;
  float __this_00;
  float local_c;
  
  if (g_data_057ae784 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&"0.##################");
    il2cpp_runtime_helper_023445d0(&"0");
    g_data_057ae784 = '\x01';
  }
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
    local_c = (pSVar1->fields)._value;
    if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    pSVar2 = System_Single__ToString_3ccd050
                       (__this_00,(System_String_o *)&local_c,"0.##################",(MethodInfo *)method_00);
    return pSVar2;
  }
  return "0";
}


// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$get_FloatValue
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_FloatValue (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, const MethodInfo* method);
// 0x4460480

float Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_FloatValue
                (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this,MethodInfo *method)

{
  Settings_FloatSetting_o *pSVar1;
  
  if (g_data_057ae785 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    g_data_057ae785 = '\x01';
  }
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
    return (pSVar1->fields)._value;
  }
  return 0.0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$get_MinValue
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_MinValue (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, const MethodInfo* method);
// 0x44604c0

float Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_MinValue
                (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this,MethodInfo *method)

{
  float fVar1;
  Settings_FloatSetting_o *pSVar2;
  
  pSVar2 = (__this->fields)._setting;
  if (pSVar2 != (Settings_FloatSetting_o *)0x0) {
    fVar1 = (pSVar2->fields).MinValue;
    return (float)(~-(uint)(fVar1 == -3.4028235e+38) & (uint)fVar1);
  }
  return 0.0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$get_MaxValue
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_MaxValue (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, const MethodInfo* method);
// 0x44604f0

float Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_MaxValue
                (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this,MethodInfo *method)

{
  float fVar1;
  Settings_FloatSetting_o *pSVar2;
  uint uVar3;
  
  pSVar2 = (__this->fields)._setting;
  if (pSVar2 != (Settings_FloatSetting_o *)0x0) {
    fVar1 = (pSVar2->fields).MaxValue;
    uVar3 = -(uint)(fVar1 == 3.4028235e+38);
    return (float)(~uVar3 & (uint)fVar1 | uVar3 & 0x3f800000);
  }
  return 1.0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$get_HasMinValue
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_HasMinValue (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, const MethodInfo* method);
// 0x4460530

bool_conflict
Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_HasMinValue
          (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this,MethodInfo *method)

{
  Settings_FloatSetting_o *pSVar1;
  
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
    return -(uint)((pSVar1->fields).MinValue != -3.4028235e+38) & 1;
  }
  return 0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$get_HasMaxValue
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_HasMaxValue (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, const MethodInfo* method);
// 0x4460560

bool_conflict
Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__get_HasMaxValue
          (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this,MethodInfo *method)

{
  Settings_FloatSetting_o *pSVar1;
  
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
    return -(uint)((pSVar1->fields).MaxValue != 3.4028235e+38) & 1;
  }
  return 0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$SetFloat
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__SetFloat (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, float value, const MethodInfo* method);
// 0x4460590

void Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__SetFloat
               (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this,float value,
               MethodInfo *method)

{
  Settings_FloatSetting_o *__this_00;
  
  if (g_data_057ae786 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae786 = '\x01';
  }
  __this_00 = (__this->fields)._setting;
  if (__this_00 != (Settings_FloatSetting_o *)0x0) {
    Settings_TypedSetting_float___set_Value((Settings_TypedSetting_float__o *)__this_00,value,MethodInfo_Void_set_Value);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter$$SetText
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__SetText (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o* __this, System_String_o* value, const MethodInfo* method);
// 0x44605f0

void Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter__SetText
               (Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this,System_String_o *value,
               MethodInfo *method)

{
  uint in_EAX;
  bool_conflict bVar1;
  System_Globalization_CultureInfo_o *provider;
  Settings_TypedSetting_float__Fields SVar2;
  Settings_FloatSetting_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ae787 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae787 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if ((__this->fields)._setting != (Settings_FloatSetting_o *)0x0) {
    if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    SVar2.DefaultValue = 2.34017e-43;
    SVar2._value = 0.0;
    bVar1 = System_Single__TryParse_3ccd6a0
                      (value,0xa7,(System_IFormatProvider_o *)provider,(float *)((long)&uStack_18 + 4),
                       (MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      __this_00 = (__this->fields)._setting;
      if (__this_00 == (Settings_FloatSetting_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
        (__this_00->fields).DefaultValue = SVar2.DefaultValue;
        (__this_00->fields)._value = SVar2._value;
        il2cpp_runtime_helper_022b4080(&__this_00->fields,SVar2);
        return;
      }
      Settings_TypedSetting_float___set_Value
                ((Settings_TypedSetting_float__o *)__this_00,uStack_18._4_4_,MethodInfo_Void_set_Value);
    }
  }
  return;
}


