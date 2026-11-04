// Type: Settings.FloatSetting
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/FloatSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/FloatSetting.cs
// --------------------------------

// Settings.FloatSetting$$.ctor
// il2cpp: void Settings_FloatSetting___ctor (Settings_FloatSetting_o* __this, const MethodInfo* method);
// 0x181f12620

void Settings_FloatSetting___ctor(Settings_FloatSetting_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345491 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor_4096500);
    Il2CppMethodInitialized_184345491 = '\x01';
  }
  (__this->fields).MinValue = -3.4028235e+38;
  (__this->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor_e8f120
            ((Settings_TypedSetting_float__o *)__this,0.0,
             (MethodInfo_E8F120 *)MethodInfo_Settings_TypedSetting_float_ctor_4096500);
  return;
}


// Settings.FloatSetting$$.ctor
// il2cpp: void Settings_FloatSetting___ctor (Settings_FloatSetting_o* __this, float defaultValue, float minValue, float maxValue, const MethodInfo* method);
// 0x181f12570

void Settings_FloatSetting___ctor_1f12570
               (Settings_FloatSetting_o *__this,float defaultValue,float minValue,float maxValue,
               MethodInfo *method)

{
  Settings_FloatSetting_c *pSVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_184345492 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_184345492 = '\x01';
  }
  (__this->fields).MinValue = -3.4028235e+38;
  (__this->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)__this,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_float_ctor);
  pSVar1 = __this->klass;
  (__this->fields).MinValue = minValue;
  (__this->fields).MaxValue = maxValue;
  fVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (__this,defaultValue,(pSVar1->vtable)._11_SanitizeValue.method);
  pSVar1 = __this->klass;
  (__this->fields).DefaultValue = fVar2;
  (*(pSVar1->vtable)._4_SetDefault.methodPtr)(__this,(pSVar1->vtable)._4_SetDefault.method);
  return;
}


// Settings.FloatSetting$$DeserializeFromJsonObject
// il2cpp: void Settings_FloatSetting__DeserializeFromJsonObject (Settings_FloatSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x181f12470

void Settings_FloatSetting__DeserializeFromJsonObject
               (Settings_FloatSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_184345493 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    Il2CppMethodInitialized_184345493 = '\x01';
  }
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    value = (*(json->klass->vtable)._37_get_AsFloat.methodPtr)
                      (json,(json->klass->vtable)._37_get_AsFloat.method);
    Settings_TypedSetting_float___set_Value
              ((Settings_TypedSetting_float__o *)__this,value,
               (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
    return;
  }
  ThrowNullReferenceException();
}


// Settings.FloatSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_FloatSetting__SerializeToJsonObject (Settings_FloatSetting_o* __this, const MethodInfo* method);
// 0x181f12500

SimpleJSONFixed_JSONNode_o *
Settings_FloatSetting__SerializeToJsonObject(Settings_FloatSetting_o *__this,MethodInfo *method)

{
  float fVar1;
  SimpleJSONFixed_JSONNumber_o *__this_00;
  
  if (Il2CppMethodInitialized_184345494 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_184345494 = '\x01';
  }
  fVar1 = (__this->fields)._value;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
  SimpleJSONFixed_JSONNumber___ctor(__this_00,(double)fVar1,(MethodInfo *)0x0);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// Settings.FloatSetting$$SanitizeValue
// il2cpp: float Settings_FloatSetting__SanitizeValue (Settings_FloatSetting_o* __this, float value, const MethodInfo* method);
// 0x181f124e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f124f5: movaps xmm1, xmm0

float Settings_FloatSetting__SanitizeValue(Settings_FloatSetting_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (__this->fields).MinValue;
  if ((fVar2 <= value) && (fVar1 = (__this->fields).MaxValue, fVar2 = value, fVar1 < value)) {
    return fVar1;
  }
  return fVar2;
}


