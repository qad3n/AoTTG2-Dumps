// Type: Settings.FloatSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Settings/FloatSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/FloatSetting.cs
// --------------------------------

// Settings.FloatSetting$$.ctor
// il2cpp: void Settings_FloatSetting___ctor (Settings_FloatSetting_o* __this, const MethodInfo* method);
// 0x5b558a0

void Settings_FloatSetting___ctor(Settings_FloatSetting_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075472dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor_719edc8);
    Il2CppMethodInitialized_075472dd = '\x01';
  }
  (__this->fields).MinValue = -3.4028235e+38;
  (__this->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor_42da3e0
            ((Settings_TypedSetting_float__o *)__this,0.0,
             (MethodInfo_42DA3E0 *)MethodInfo_Settings_TypedSetting_float_ctor_719edc8);
  return;
}


// Settings.FloatSetting$$.ctor
// il2cpp: void Settings_FloatSetting___ctor (Settings_FloatSetting_o* __this, float defaultValue, float minValue, float maxValue, const MethodInfo* method);
// 0x5b411f0

void Settings_FloatSetting___ctor_5a411f0
               (Settings_FloatSetting_o *__this,float defaultValue,float minValue,float maxValue,
               MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 extraout_RDX;
  float fVar1;
  
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (__this->fields).MinValue = -3.4028235e+38;
  (__this->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)__this,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (__this->fields).MinValue = minValue;
  (__this->fields).MaxValue = maxValue;
  fVar1 = (*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                    (__this,defaultValue,(__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields).DefaultValue = fVar1;
  vtableDispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
  (*vtableDispatch)
            (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
  return;
}


// Settings.FloatSetting$$DeserializeFromJsonObject
// il2cpp: void Settings_FloatSetting__DeserializeFromJsonObject (Settings_FloatSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x5b558f0

void Settings_FloatSetting__DeserializeFromJsonObject
               (Settings_FloatSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_075472df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    Il2CppMethodInitialized_075472df = '\x01';
  }
  if (json == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  value = (*(json->klass->vtable)._37_get_AsFloat.methodPtr)
                    (json,(json->klass->vtable)._37_get_AsFloat.method);
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)__this,value,
             (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  return;
}


// Settings.FloatSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_FloatSetting__SerializeToJsonObject (Settings_FloatSetting_o* __this, const MethodInfo* method);
// 0x5b55950

SimpleJSONFixed_JSONNode_o *
Settings_FloatSetting__SerializeToJsonObject(Settings_FloatSetting_o *__this,MethodInfo *method)

{
  float fVar1;
  SimpleJSONFixed_JSONNumber_o *__this_00;
  
  if (Il2CppMethodInitialized_075472e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_075472e0 = '\x01';
  }
  fVar1 = (__this->fields)._value;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
  SimpleJSONFixed_JSONNumber___ctor(__this_00,(double)fVar1,(MethodInfo *)0x0);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// Settings.FloatSetting$$SanitizeValue
// il2cpp: float Settings_FloatSetting__SanitizeValue (Settings_FloatSetting_o* __this, float value, const MethodInfo* method);
// 0x5b559c0

float Settings_FloatSetting__SanitizeValue(Settings_FloatSetting_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  
  fVar1 = (__this->fields).MinValue;
  fVar3 = (__this->fields).MaxValue;
  if (value <= fVar3) {
    fVar3 = value;
  }
  uVar2 = -(uint)(fVar1 <= value);
  return (float)(~uVar2 & (uint)fVar1 | (uint)fVar3 & uVar2);
}


