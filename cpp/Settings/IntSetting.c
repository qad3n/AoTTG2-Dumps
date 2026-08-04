// Type: Settings.IntSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/IntSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/IntSetting.cs
// --------------------------------

// Settings.IntSetting$$.ctor
// il2cpp: void Settings_IntSetting___ctor (Settings_IntSetting_o* __this, const MethodInfo* method);
// 0x41fd800

void Settings_IntSetting___ctor(Settings_IntSetting_o *__this,MethodInfo *method)

{
  if (g_data_057ad8a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
    g_data_057ad8a7 = '\x01';
  }
  (__this->fields).MinValue = -0x80000000;
  (__this->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor_2a23fd0((Settings_TypedSetting_int__o *)__this,0,MethodInfo_TypedSetting_1_System_Int32);
  return;
}


// Settings.IntSetting$$.ctor
// il2cpp: void Settings_IntSetting___ctor (Settings_IntSetting_o* __this, int32_t defaultValue, int32_t minValue, int32_t maxValue, const MethodInfo* method);
// 0x41f39a0

void Settings_IntSetting___ctor_40f39a0
               (Settings_IntSetting_o *__this,int32_t defaultValue,int32_t minValue,int32_t maxValue,
               MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  int32_t iVar1;
  undefined8 extraout_RDX;
  
  if (g_data_057ad8a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
    g_data_057ad8a8 = '\x01';
  }
  (__this->fields).MinValue = -0x80000000;
  (__this->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)__this,MethodInfo_TypedSetting_1_System_Int32);
  (__this->fields).MinValue = minValue;
  (__this->fields).MaxValue = maxValue;
  iVar1 = (*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                    (__this,(ulong)(uint)defaultValue,(__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields).DefaultValue = iVar1;
  vtableDispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
  (*vtableDispatch)
            (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
  return;
}


// Settings.IntSetting$$DeserializeFromJsonObject
// il2cpp: void Settings_IntSetting__DeserializeFromJsonObject (Settings_IntSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x4201100

void Settings_IntSetting__DeserializeFromJsonObject
               (Settings_IntSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  int iVar1;
  int32_t value;
  SimpleJSONFixed_JSONNumber_o *__this_00;
  MethodInfo_2A23FA0 **ppMVar2;
  
  ppMVar2 = (MethodInfo_2A23FA0 **)__this;
  if (g_data_057ad8a9 == '\0') {
    ppMVar2 = &MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad8a9 = '\x01';
  }
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    value = (*(json->klass->vtable)._35_get_AsInt.methodPtr)(json,(json->klass->vtable)._35_get_AsInt.method);
    Settings_TypedSetting_int___set_Value((Settings_TypedSetting_int__o *)__this,value,MethodInfo_Void_set_Value);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8aa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ad8aa = '\x01';
  }
  iVar1 = (((Settings_IntSetting_o *)ppMVar2)->fields)._value;
  __this_00 = (SimpleJSONFixed_JSONNumber_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
  SimpleJSONFixed_JSONNumber___ctor(__this_00,(double)iVar1,(MethodInfo *)0x0);
  return;
}


// Settings.IntSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_IntSetting__SerializeToJsonObject (Settings_IntSetting_o* __this, const MethodInfo* method);
// 0x4201160

SimpleJSONFixed_JSONNode_o *
Settings_IntSetting__SerializeToJsonObject(Settings_IntSetting_o *__this,MethodInfo *method)

{
  int iVar1;
  SimpleJSONFixed_JSONNumber_o *__this_00;
  
  if (g_data_057ad8aa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057ad8aa = '\x01';
  }
  iVar1 = (__this->fields)._value;
  __this_00 = (SimpleJSONFixed_JSONNumber_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
  SimpleJSONFixed_JSONNumber___ctor(__this_00,(double)iVar1,(MethodInfo *)0x0);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// Settings.IntSetting$$SanitizeValue
// il2cpp: int32_t Settings_IntSetting__SanitizeValue (Settings_IntSetting_o* __this, int32_t value, const MethodInfo* method);
// 0x42011d0

int32_t Settings_IntSetting__SanitizeValue(Settings_IntSetting_o *__this,int32_t value,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  
  if (cRam00000000057ad8ab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    cRam00000000057ad8ab = '\x01';
  }
  iVar2 = (__this->fields).MaxValue;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar2 = System_Math__Min_3cb7d70(value,iVar2,(MethodInfo *)0x0);
  iVar1 = (__this->fields).MinValue;
  if (iVar2 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}


