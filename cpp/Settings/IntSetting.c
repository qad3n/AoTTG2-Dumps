// Type: Settings.IntSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Settings/IntSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/IntSetting.cs
// --------------------------------

// Settings.IntSetting$$.ctor
// il2cpp: void Settings_IntSetting___ctor (Settings_IntSetting_o* __this, const MethodInfo* method);
// 0x5b56f00

void Settings_IntSetting___ctor(Settings_IntSetting_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075472e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor_719eda8);
    Il2CppMethodInitialized_075472e7 = '\x01';
  }
  (__this->fields).MinValue = -0x80000000;
  (__this->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor_42da190
            ((Settings_TypedSetting_int__o *)__this,0,
             (MethodInfo_42DA190 *)MethodInfo_Settings_TypedSetting_int_ctor_719eda8);
  return;
}


// Settings.IntSetting$$.ctor
// il2cpp: void Settings_IntSetting___ctor (Settings_IntSetting_o* __this, int32_t defaultValue, int32_t minValue, int32_t maxValue, const MethodInfo* method);
// 0x5b412e0

void Settings_IntSetting___ctor_5a412e0
               (Settings_IntSetting_o *__this,int32_t defaultValue,int32_t minValue,int32_t maxValue,
               MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_075472e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_075472e8 = '\x01';
  }
  (__this->fields).MinValue = -0x80000000;
  (__this->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor
            ((Settings_TypedSetting_int__o *)__this,
             (MethodInfo_42DA180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  (__this->fields).MinValue = minValue;
  (__this->fields).MaxValue = maxValue;
  iVar1 = (*(__this->klass->vtable)._11_SanitizeValue.methodPtr)
                    (__this,defaultValue,(__this->klass->vtable)._11_SanitizeValue.method);
  (__this->fields).DefaultValue = iVar1;
  (*(__this->klass->vtable)._4_SetDefault.methodPtr)(__this,(__this->klass->vtable)._4_SetDefault.method);
  return;
}


// Settings.IntSetting$$DeserializeFromJsonObject
// il2cpp: void Settings_IntSetting__DeserializeFromJsonObject (Settings_IntSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x5b56f50

void Settings_IntSetting__DeserializeFromJsonObject
               (Settings_IntSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  int32_t value;
  
  if (Il2CppMethodInitialized_075472e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_075472e9 = '\x01';
  }
  if (json == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  value = (*(json->klass->vtable)._35_get_AsInt.methodPtr)(json,(json->klass->vtable)._35_get_AsInt.method);
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)__this,value,
             (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  return;
}


// Settings.IntSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_IntSetting__SerializeToJsonObject (Settings_IntSetting_o* __this, const MethodInfo* method);
// 0x5b56fb0

SimpleJSONFixed_JSONNode_o *
Settings_IntSetting__SerializeToJsonObject(Settings_IntSetting_o *__this,MethodInfo *method)

{
  int iVar1;
  SimpleJSONFixed_JSONNumber_o *__this_00;
  
  if (Il2CppMethodInitialized_075472ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNumber);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_075472ea = '\x01';
  }
  iVar1 = (__this->fields)._value;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNumber);
  SimpleJSONFixed_JSONNumber___ctor(__this_00,(double)iVar1,(MethodInfo *)0x0);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// Settings.IntSetting$$SanitizeValue
// il2cpp: int32_t Settings_IntSetting__SanitizeValue (Settings_IntSetting_o* __this, int32_t value, const MethodInfo* method);
// 0x5b57020

int32_t Settings_IntSetting__SanitizeValue(Settings_IntSetting_o *__this,int32_t value,MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_075472eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_075472eb = '\x01';
  }
  iVar1 = (__this->fields).MaxValue;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  iVar1 = System_Math__Min_54baeb0(value,iVar1,(MethodInfo *)0x0);
  iVar1 = System_Math__Max_54bad40(iVar1,(__this->fields).MinValue,(MethodInfo *)0x0);
  return iVar1;
}


