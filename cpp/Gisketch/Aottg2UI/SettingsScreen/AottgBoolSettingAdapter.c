// Type: Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgBoolSettingAdapter.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o* __this, Settings_BoolSetting_o* setting, const MethodInfo* method);
// 0x5dc5b70

void Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *__this,
               Settings_BoolSetting_o *setting,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._setting = setting;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._setting);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter$$get_TextValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter__get_TextValue (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o* __this, const MethodInfo* method);
// 0x5dc5ba0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter__get_TextValue
          (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075481b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_075481b6 = '\x01';
  }
  bVar1 = (*(__this->klass->vtable)._18_get_BoolValue.methodPtr)
                    (__this,(__this->klass->vtable)._18_get_BoolValue.method);
  if (bVar1) {
    return "true";
  }
  return "false";
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter$$get_BoolValue
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter__get_BoolValue (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o* __this, const MethodInfo* method);
// 0x5dc5c00

bool Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter__get_BoolValue
               (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *__this,MethodInfo *method)

{
  Settings_BoolSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_075481b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_075481b7 = '\x01';
  }
  pSVar1 = (__this->fields)._setting;
  if (pSVar1 == (Settings_BoolSetting_o *)0x0) {
    return false;
  }
  return (pSVar1->fields)._value != false;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter$$get_FloatValue
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter__get_FloatValue (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o* __this, const MethodInfo* method);
// 0x5dc5c40

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
// 0x5dc5c70

void Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter__SetBool
               (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *__this,bool value,
               MethodInfo *method)

{
  Settings_BoolSetting_o *__this_00;
  
  if (Il2CppMethodInitialized_075481b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_075481b8 = '\x01';
  }
  __this_00 = (__this->fields)._setting;
  if (__this_00 == (Settings_BoolSetting_o *)0x0) {
    return;
  }
  Settings_TypedSetting_bool___set_Value
            ((Settings_TypedSetting_bool__o *)__this_00,value,
             (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter$$SetText
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter__SetText (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5dc5cc0

void Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter__SetText
               (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *__this,System_String_o *value,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075481b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    il2cpp_codegen_initialize_runtime_metadata(&"1");
    Il2CppMethodInitialized_075481b9 = '\x01';
  }
  bVar1 = System_String__Equals_52ffe30(value,"true",5,(MethodInfo *)0x0);
  bVar2 = true;
  if (!bVar1) {
    bVar2 = System_String__op_Equality(value,"1",(MethodInfo *)0x0);
  }
  if (__this == (Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(__this->klass->vtable)._24_SetBool.methodPtr)(__this,bVar2,(__this->klass->vtable)._24_SetBool.method);
  return;
}


