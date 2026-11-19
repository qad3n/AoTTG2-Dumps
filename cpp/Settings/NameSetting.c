// Type: Settings.NameSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Settings/NameSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/NameSetting.cs
// --------------------------------

// Settings.NameSetting$$.ctor
// il2cpp: void Settings_NameSetting___ctor (Settings_NameSetting_o* __this, const MethodInfo* method);
// 0x5c7b6c0

void Settings_NameSetting___ctor(Settings_NameSetting_o *__this,MethodInfo *method)

{
  Il2CppObject *defaultValue;
  
  (__this->fields).MaxStrippedLength = 0x7fffffff;
  defaultValue = (Il2CppObject *)**(undefined8 **)(g_data_07556758 + 0xb8);
  if (Il2CppMethodInitialized_07547987 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_07547987 = '\x01';
  }
  (__this->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_42da2c0
            ((Settings_TypedSetting_T__o *)__this,defaultValue,
             (MethodInfo_42DA2C0 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (__this->fields).MaxLength = 0x7fffffff;
  return;
}


// Settings.NameSetting$$.ctor
// il2cpp: void Settings_NameSetting___ctor (Settings_NameSetting_o* __this, System_String_o* defaultValue, int32_t maxLength, int32_t maxStrippedLength, const MethodInfo* method);
// 0x5c7b780

void Settings_NameSetting___ctor_5b7b780
               (Settings_NameSetting_o *__this,System_String_o *defaultValue,int32_t maxLength,
               int32_t maxStrippedLength,MethodInfo *method)

{
  (__this->fields).MaxStrippedLength = 0x7fffffff;
  if (Il2CppMethodInitialized_07547987 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_07547987 = '\x01';
  }
  (__this->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_42da2c0
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)defaultValue,
             (MethodInfo_42DA2C0 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (__this->fields).MaxLength = maxLength;
  (__this->fields).MaxStrippedLength = maxStrippedLength;
  return;
}


// Settings.NameSetting$$DeserializeFromJsonObject
// il2cpp: void Settings_NameSetting__DeserializeFromJsonObject (Settings_NameSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x5c7b7f0

void Settings_NameSetting__DeserializeFromJsonObject
               (Settings_NameSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  System_String_o *value;
  
  if (Il2CppMethodInitialized_0754797a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_0754797a = '\x01';
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


// Settings.NameSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_NameSetting__SerializeToJsonObject (Settings_NameSetting_o* __this, const MethodInfo* method);
// 0x5c7b850

SimpleJSONFixed_JSONNode_o *
Settings_NameSetting__SerializeToJsonObject(Settings_NameSetting_o *__this,MethodInfo *method)

{
  System_String_o *aData;
  SimpleJSONFixed_JSONString_o *__this_00;
  
  if (Il2CppMethodInitialized_0754797b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_0754797b = '\x01';
  }
  aData = (__this->fields)._value;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
  SimpleJSONFixed_JSONString___ctor(__this_00,aData,(MethodInfo *)0x0);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// Settings.NameSetting$$SanitizeValue
// il2cpp: System_String_o* Settings_NameSetting__SanitizeValue (Settings_NameSetting_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5c7b8b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c7b919: mov rdi, rax

System_String_o *
Settings_NameSetting__SanitizeValue(Settings_NameSetting_o *__this,System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  int length;
  
  if (Il2CppMethodInitialized_0754797c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_0754797c = '\x01';
  }
  if (value == (System_String_o *)0x0) {
label_05c7b937:
    ThrowNullReferenceException();
  }
  length = (__this->fields).MaxLength;
  if (length < (value->fields)._stringLength) {
    pSVar1 = value;
  }
  else {
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    pSVar1 = MiscExtensions__StripHex(value,(MethodInfo *)0x0);
    if (pSVar1 == (System_String_o *)0x0) goto label_05c7b937;
    length = (__this->fields).MaxStrippedLength;
    if ((pSVar1->fields)._stringLength <= length) {
      return value;
    }
  }
  pSVar1 = System_String__Substring_53042f0(pSVar1,0,length,(MethodInfo *)0x0);
  return pSVar1;
}


