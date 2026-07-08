// Type: Settings.FloatSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/FloatSetting.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/SettingTypes/FloatSetting.cs  [CHANGED since prior version]
// --------------------------------

// Settings.FloatSetting$$.ctor
// il2cpp: void Settings_FloatSetting___ctor (Settings_FloatSetting_o* __this, const MethodInfo* method);
// 0x3f0d590

void Settings_FloatSetting___ctor(Settings_FloatSetting_o *__this,MethodInfo *method)

{
  if (DAT_05703c75 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_Single);
    DAT_05703c75 = '\x01';
  }
  (__this->fields).MinValue = -3.4028235e+38;
  (__this->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting<float>___ctor((Settings_TypedSetting_float__o *)__this,0.0,MethodInfo_TypedSetting_1_System_Single);
  return;
}


// Settings.FloatSetting$$.ctor
// il2cpp: void Settings_FloatSetting___ctor (Settings_FloatSetting_o* __this, float defaultValue, float minValue, float maxValue, const MethodInfo* method);
// 0x3f08610

void Settings_FloatSetting___ctor
               (Settings_FloatSetting_o *__this,float defaultValue,float minValue,float maxValue,
               MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 extraout_RDX;
  float fVar1;
  
  if (DAT_05703c76 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_Single);
    DAT_05703c76 = '\x01';
  }
  (__this->fields).MinValue = -3.4028235e+38;
  (__this->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting<float>___ctor((Settings_TypedSetting_float__o *)__this,MethodInfo_TypedSetting_1_System_Single);
  (__this->fields).MinValue = minValue;
  (__this->fields).MaxValue = maxValue;
  fVar1 = (float)(*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                           (defaultValue,__this,(__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields).DefaultValue = fVar1;
  vtable_dispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,vtable_dispatch)
  ;
  return;
}


// Settings.FloatSetting$$DeserializeFromJsonObject
// il2cpp: void Settings_FloatSetting__DeserializeFromJsonObject (Settings_FloatSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x3f0d5e0

void Settings_FloatSetting__DeserializeFromJsonObject
               (Settings_FloatSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  float value;
  
  if (DAT_05703c77 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05703c77 = '\x01';
  }
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    value = (float)(*(json->klass->vtable)._37_get_AsFloat.methodPtr)
                             (json,(json->klass->vtable)._37_get_AsFloat.method);
    Settings_TypedSetting<float>__set_Value
              ((Settings_TypedSetting_float__o *)__this,value,MethodInfo_Void_set_Value);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.FloatSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_FloatSetting__SerializeToJsonObject (Settings_FloatSetting_o* __this, const MethodInfo* method);
// 0x3f0d640

SimpleJSONFixed_JSONNode_o *
Settings_FloatSetting__SerializeToJsonObject(Settings_FloatSetting_o *__this,MethodInfo *method)

{
  float fVar1;
  SimpleJSONFixed_JSONNumber_o *__this_00;
  
  if (DAT_05703c78 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNumber);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    DAT_05703c78 = '\x01';
  }
  fVar1 = (__this->fields)._value;
  __this_00 = (SimpleJSONFixed_JSONNumber_o *)il2cpp_runtime_glue(TypeInfo_JSONNumber);
  SimpleJSONFixed_JSONNumber___ctor(__this_00,(double)fVar1,(MethodInfo *)0x0);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// Settings.FloatSetting$$SanitizeValue
// il2cpp: float Settings_FloatSetting__SanitizeValue (Settings_FloatSetting_o* __this, float value, const MethodInfo* method);
// 0x3f0d6b0

float Settings_FloatSetting__SanitizeValue
                (Settings_FloatSetting_o *__this,float value,MethodInfo *method)

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


