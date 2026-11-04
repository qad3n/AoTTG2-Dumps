// Type: Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgBoolSettingAdapter.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o* __this, Settings_BoolSetting_o* setting, const MethodInfo* method);
// 0x180577fb0

void
Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o* __this, Settings_BoolSetting_o* setting, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._setting = method;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._setting,method);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter$$get_TextValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter__get_TextValue (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o* __this, const MethodInfo* method);
// 0x182303aa0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter__get_TextValue
          (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347711 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_184347711 = '\x01';
  }
  bVar1 = (*(__this->klass->vtable)._18_get_BoolValue.methodPtr)
                    (__this,(__this->klass->vtable)._18_get_BoolValue.method);
  pSVar2 = "false";
  if (bVar1) {
    pSVar2 = "true";
  }
  return pSVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter$$get_BoolValue
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter__get_BoolValue (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o* __this, const MethodInfo* method);
// 0x182303a20

bool Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter__get_BoolValue
               (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347712 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184347712 = '\x01';
  }
  if ((__this->fields)._setting == (Settings_BoolSetting_o *)0x0) {
    return false;
  }
  return (((__this->fields)._setting)->fields)._value;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter$$get_FloatValue
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter__get_FloatValue (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o* __this, const MethodInfo* method);
// 0x182303a70

float Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter__get_FloatValue
                (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = (*(__this->klass->vtable)._18_get_BoolValue.methodPtr)
                    (__this,(__this->klass->vtable)._18_get_BoolValue.method);
  if (bVar1) {
    return 1.0;
  }
  return 0.0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter$$SetBool
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter__SetBool (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o* __this, bool value, const MethodInfo* method);
// 0x182303920

void Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter__SetBool
               (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *__this,bool value,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347713 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_184347713 = '\x01';
  }
  if ((__this->fields)._setting != (Settings_BoolSetting_o *)0x0) {
    Settings_TypedSetting_bool___set_Value
              ((Settings_TypedSetting_bool__o *)(__this->fields)._setting,value,
               (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter$$SetText
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter__SetText (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o* __this, System_String_o* value, const MethodInfo* method);
// 0x182303980

void Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter__SetText
               (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *__this,System_String_o *value,
               MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347714 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    il2cpp_codegen_initialize_runtime_metadata(&"1");
    Il2CppMethodInitialized_184347714 = '\x01';
  }
  bVar1 = System_String__Equals_196c550(value,"true",5,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = true;
  }
  else {
    bVar1 = System_String__op_Equality(value,"1",(MethodInfo *)0x0);
  }
  if (__this != (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *)0x0) {
    (*(__this->klass->vtable)._24_SetBool.methodPtr)(__this,bVar1,(__this->klass->vtable)._24_SetBool.method);
    return;
  }
  ThrowNullReferenceException();
}


