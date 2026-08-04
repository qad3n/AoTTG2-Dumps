// Type: Settings.FloatSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/FloatSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/FloatSetting.cs
// --------------------------------

// Settings.FloatSetting$$.ctor
// il2cpp: void Settings_FloatSetting___ctor (Settings_FloatSetting_o* __this, const MethodInfo* method);
// 0x41fd850

void Settings_FloatSetting___ctor(Settings_FloatSetting_o *__this,MethodInfo *method)

{
  if (g_data_057ad89d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Single);
    g_data_057ad89d = '\x01';
  }
  (__this->fields).MinValue = -3.4028235e+38;
  (__this->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor_2a241e0((Settings_TypedSetting_float__o *)__this,0.0,MethodInfo_TypedSetting_1_System_Single);
  return;
}


// Settings.FloatSetting$$.ctor
// il2cpp: void Settings_FloatSetting___ctor (Settings_FloatSetting_o* __this, float defaultValue, float minValue, float maxValue, const MethodInfo* method);
// 0x41f3a30

void Settings_FloatSetting___ctor_40f3a30
               (Settings_FloatSetting_o *__this,float defaultValue,float minValue,float maxValue,
               MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  undefined8 extraout_RDX;
  float fVar1;
  
  if (g_data_057ad89e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Single);
    g_data_057ad89e = '\x01';
  }
  (__this->fields).MinValue = -3.4028235e+38;
  (__this->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor((Settings_TypedSetting_float__o *)__this,MethodInfo_TypedSetting_1_System_Single);
  (__this->fields).MinValue = minValue;
  (__this->fields).MaxValue = maxValue;
  fVar1 = (float)(*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                           (defaultValue,__this,(__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields).DefaultValue = fVar1;
  vtableDispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
  (*vtableDispatch)
            (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
  return;
}


// Settings.FloatSetting$$DeserializeFromJsonObject
// il2cpp: void Settings_FloatSetting__DeserializeFromJsonObject (Settings_FloatSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x41ff9f0

void Settings_FloatSetting__DeserializeFromJsonObject
               (Settings_FloatSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  SimpleJSONFixed_JSONNumber_o *__this_00;
  MethodInfo_2A241B0 **ppMVar1;
  float fVar2;
  
  ppMVar1 = (MethodInfo_2A241B0 **)__this;
  if (g_data_057ad89f == '\0') {
    ppMVar1 = &MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad89f = '\x01';
  }
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    fVar2 = (float)(*(json->klass->vtable)._37_get_AsFloat.methodPtr)
                             (json,(json->klass->vtable)._37_get_AsFloat.method);
    Settings_TypedSetting_float___set_Value((Settings_TypedSetting_float__o *)__this,fVar2,MethodInfo_Void_set_Value);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    g_data_057ad8a0 = '\x01';
  }
  fVar2 = (((Settings_FloatSetting_o *)ppMVar1)->fields)._value;
  __this_00 = (SimpleJSONFixed_JSONNumber_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
  SimpleJSONFixed_JSONNumber___ctor(__this_00,(double)fVar2,(MethodInfo *)0x0);
  return;
}


// Settings.FloatSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_FloatSetting__SerializeToJsonObject (Settings_FloatSetting_o* __this, const MethodInfo* method);
// 0x41ffa50

SimpleJSONFixed_JSONNode_o *
Settings_FloatSetting__SerializeToJsonObject(Settings_FloatSetting_o *__this,MethodInfo *method)

{
  float fVar1;
  SimpleJSONFixed_JSONNumber_o *__this_00;
  
  if (g_data_057ad8a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    g_data_057ad8a0 = '\x01';
  }
  fVar1 = (__this->fields)._value;
  __this_00 = (SimpleJSONFixed_JSONNumber_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
  SimpleJSONFixed_JSONNumber___ctor(__this_00,(double)fVar1,(MethodInfo *)0x0);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// Settings.FloatSetting$$SanitizeValue
// il2cpp: float Settings_FloatSetting__SanitizeValue (Settings_FloatSetting_o* __this, float value, const MethodInfo* method);
// 0x41ffac0

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


