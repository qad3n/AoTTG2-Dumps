// Type: Settings.StringSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/StringSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/StringSetting.cs
// --------------------------------

// Settings.StringSetting$$.ctor
// il2cpp: void Settings_StringSetting___ctor (Settings_StringSetting_o* __this, const MethodInfo* method);
// 0x5c7c970

void Settings_StringSetting___ctor(Settings_StringSetting_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547986 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_07547986 = '\x01';
  }
  (__this->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_42da2c0
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8),
             (MethodInfo_42DA2C0 *)MethodInfo_Settings_TypedSetting_string_ctor);
  return;
}


// Settings.StringSetting$$.ctor
// il2cpp: void Settings_StringSetting___ctor (Settings_StringSetting_o* __this, System_String_o* defaultValue, int32_t maxLength, const MethodInfo* method);
// 0x5c7b730

void Settings_StringSetting___ctor_5b7b730
               (Settings_StringSetting_o *__this,System_String_o *defaultValue,int32_t maxLength,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547987 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_07547987 = '\x01';
  }
  (__this->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_42da2c0
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)defaultValue,
             (MethodInfo_42DA2C0 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (__this->fields).MaxLength = maxLength;
  return;
}


// Settings.StringSetting$$DeserializeFromJsonObject
// il2cpp: void Settings_StringSetting__DeserializeFromJsonObject (Settings_StringSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x5c7c9d0

void Settings_StringSetting__DeserializeFromJsonObject
               (Settings_StringSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  System_String_o *value;
  
  if (Il2CppMethodInitialized_07547988 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_07547988 = '\x01';
  }
  if (json == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  value = (*(json->klass->vtable)._9_get_Value.methodPtr)(json,(json->klass->vtable)._9_get_Value.method);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)value,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  return;
}


// Settings.StringSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_StringSetting__SerializeToJsonObject (Settings_StringSetting_o* __this, const MethodInfo* method);
// 0x5c7ca30

SimpleJSONFixed_JSONNode_o *
Settings_StringSetting__SerializeToJsonObject(Settings_StringSetting_o *__this,MethodInfo *method)

{
  System_String_o *aData;
  SimpleJSONFixed_JSONString_o *__this_00;
  
  if (Il2CppMethodInitialized_07547989 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07547989 = '\x01';
  }
  aData = (__this->fields)._value;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
  SimpleJSONFixed_JSONString___ctor(__this_00,aData,(MethodInfo *)0x0);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// Settings.StringSetting$$SanitizeValue
// il2cpp: System_String_o* Settings_StringSetting__SanitizeValue (Settings_StringSetting_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5c7ca90

System_String_o *
Settings_StringSetting__SanitizeValue
          (Settings_StringSetting_o *__this,System_String_o *value,MethodInfo *method)

{
  int32_t length;
  System_String_o *pSVar1;
  
  if (value == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  length = (__this->fields).MaxLength;
  if (length < (value->fields)._stringLength) {
    pSVar1 = System_String__Substring_53042f0(value,0,length,(MethodInfo *)0x0);
    return pSVar1;
  }
  return value;
}


