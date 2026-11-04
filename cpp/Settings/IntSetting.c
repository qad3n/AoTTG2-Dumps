// Type: Settings.IntSetting
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/IntSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/IntSetting.cs
// --------------------------------

// Settings.IntSetting$$.ctor
// il2cpp: void Settings_IntSetting___ctor (Settings_IntSetting_o* __this, const MethodInfo* method);
// 0x181f1de90

void Settings_IntSetting___ctor(Settings_IntSetting_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434549b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor_4096188);
    Il2CppMethodInitialized_18434549b = '\x01';
  }
  (__this->fields).MinValue = -0x80000000;
  (__this->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor_e8f1f0
            ((Settings_TypedSetting_int__o *)__this,0,
             (MethodInfo_E8F1F0 *)MethodInfo_Settings_TypedSetting_int_ctor_4096188);
  return;
}


// Settings.IntSetting$$.ctor
// il2cpp: void Settings_IntSetting___ctor (Settings_IntSetting_o* __this, int32_t defaultValue, int32_t minValue, int32_t maxValue, const MethodInfo* method);
// 0x181f1de00

void Settings_IntSetting___ctor_1f1de00
               (Settings_IntSetting_o *__this,int32_t defaultValue,int32_t minValue,int32_t maxValue,
               MethodInfo *method)

{
  Settings_IntSetting_c *pSVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (__this->fields).MinValue = -0x80000000;
  (__this->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)__this,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = __this->klass;
  (__this->fields).MinValue = minValue;
  (__this->fields).MaxValue = maxValue;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (__this,defaultValue,(pSVar1->vtable)._11_SanitizeValue.method);
  (__this->fields).DefaultValue = iVar2;
  (*(__this->klass->vtable)._4_SetDefault.methodPtr)(__this,(__this->klass->vtable)._4_SetDefault.method);
  return;
}


// Settings.IntSetting$$DeserializeFromJsonObject
// il2cpp: void Settings_IntSetting__DeserializeFromJsonObject (Settings_IntSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x181f1dcb0

void Settings_IntSetting__DeserializeFromJsonObject
               (Settings_IntSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  int32_t value;
  
  if (Il2CppMethodInitialized_18434549d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_18434549d = '\x01';
  }
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    value = (*(json->klass->vtable)._35_get_AsInt.methodPtr)(json,(json->klass->vtable)._35_get_AsInt.method);
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)__this,value,
               (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    return;
  }
  ThrowNullReferenceException();
}


// Settings.IntSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_IntSetting__SerializeToJsonObject (Settings_IntSetting_o* __this, const MethodInfo* method);
// 0x181f1dd90

SimpleJSONFixed_JSONNode_o *
Settings_IntSetting__SerializeToJsonObject(Settings_IntSetting_o *__this,MethodInfo *method)

{
  int iVar1;
  SimpleJSONFixed_JSONNumber_o *__this_00;
  
  if (Il2CppMethodInitialized_18434549e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_18434549e = '\x01';
  }
  iVar1 = (__this->fields)._value;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
  SimpleJSONFixed_JSONNumber___ctor(__this_00,(double)iVar1,(MethodInfo *)0x0);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// Settings.IntSetting$$SanitizeValue
// il2cpp: int32_t Settings_IntSetting__SanitizeValue (Settings_IntSetting_o* __this, int32_t value, const MethodInfo* method);
// 0x181f1dd20

int32_t Settings_IntSetting__SanitizeValue(Settings_IntSetting_o *__this,int32_t value,MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_18434549f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_18434549f = '\x01';
  }
  iVar1 = (__this->fields).MaxValue;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  iVar1 = System_Math__Min_1b2c2d0(value,iVar1,(MethodInfo *)0x0);
  iVar1 = System_Math__Max_1b2c0d0(iVar1,(__this->fields).MinValue,(MethodInfo *)0x0);
  return iVar1;
}


