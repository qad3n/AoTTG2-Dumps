// Type: Settings.IntSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/IntSetting.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/SettingTypes/IntSetting.cs  [CHANGED since prior version]
// --------------------------------

// Settings.IntSetting$$.ctor
// il2cpp: void Settings_IntSetting___ctor (Settings_IntSetting_o* __this, const MethodInfo* method);
// 0x3f0ecf0

void Settings_IntSetting___ctor(Settings_IntSetting_o *__this,MethodInfo *method)

{
  if (DAT_05703c7f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_Int32);
    DAT_05703c7f = '\x01';
  }
  (__this->fields).MinValue = -0x80000000;
  (__this->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting<int>___ctor((Settings_TypedSetting_int__o *)__this,0,MethodInfo_TypedSetting_1_System_Int32);
  return;
}


// Settings.IntSetting$$.ctor
// il2cpp: void Settings_IntSetting___ctor (Settings_IntSetting_o* __this, int32_t defaultValue, int32_t minValue, int32_t maxValue, const MethodInfo* method);
// 0x3f086c0

void Settings_IntSetting___ctor
               (Settings_IntSetting_o *__this,int32_t defaultValue,int32_t minValue,int32_t maxValue
               ,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  int32_t iVar1;
  undefined8 extraout_RDX;
  
  if (DAT_05703c80 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_Int32);
    DAT_05703c80 = '\x01';
  }
  (__this->fields).MinValue = -0x80000000;
  (__this->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting<int>___ctor((Settings_TypedSetting_int__o *)__this,MethodInfo_TypedSetting_1_System_Int32);
  (__this->fields).MinValue = minValue;
  (__this->fields).MaxValue = maxValue;
  iVar1 = (*(__this->klass->vtable)._10_SanitizeValue.methodPtr)
                    (__this,(ulong)(uint)defaultValue,
                     (__this->klass->vtable)._10_SanitizeValue.method);
  (__this->fields).DefaultValue = iVar1;
  vtable_dispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,vtable_dispatch)
  ;
  return;
}


// Settings.IntSetting$$DeserializeFromJsonObject
// il2cpp: void Settings_IntSetting__DeserializeFromJsonObject (Settings_IntSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x3f0ed40

void Settings_IntSetting__DeserializeFromJsonObject
               (Settings_IntSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  int32_t value;
  
  if (DAT_05703c81 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05703c81 = '\x01';
  }
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    value = (*(json->klass->vtable)._35_get_AsInt.methodPtr)
                      (json,(json->klass->vtable)._35_get_AsInt.method);
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)__this,value,MethodInfo_Void_set_Value)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.IntSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_IntSetting__SerializeToJsonObject (Settings_IntSetting_o* __this, const MethodInfo* method);
// 0x3f0eda0

SimpleJSONFixed_JSONNode_o *
Settings_IntSetting__SerializeToJsonObject(Settings_IntSetting_o *__this,MethodInfo *method)

{
  int iVar1;
  SimpleJSONFixed_JSONNumber_o *__this_00;
  
  if (DAT_05703c82 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNumber);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05703c82 = '\x01';
  }
  iVar1 = (__this->fields)._value;
  __this_00 = (SimpleJSONFixed_JSONNumber_o *)il2cpp_runtime_glue(TypeInfo_JSONNumber);
  SimpleJSONFixed_JSONNumber___ctor(__this_00,(double)iVar1,(MethodInfo *)0x0);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// Settings.IntSetting$$SanitizeValue
// il2cpp: int32_t Settings_IntSetting__SanitizeValue (Settings_IntSetting_o* __this, int32_t value, const MethodInfo* method);
// 0x3f0ee10

int32_t Settings_IntSetting__SanitizeValue
                  (Settings_IntSetting_o *__this,int32_t value,MethodInfo *method)

{
  int32_t iVar1;
  
  if (DAT_05703c83 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_05703c83 = '\x01';
  }
  iVar1 = (__this->fields).MaxValue;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar1 = System_Math__Min(value,iVar1,(MethodInfo *)0x0);
  iVar1 = System_Math__Max(iVar1,(__this->fields).MinValue,(MethodInfo *)0x0);
  return iVar1;
}


