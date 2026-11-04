// Type: Settings.NameSetting
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/NameSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/NameSetting.cs
// --------------------------------

// Settings.NameSetting$$.ctor
// il2cpp: void Settings_NameSetting___ctor (Settings_NameSetting_o* __this, const MethodInfo* method);
// 0x181f23df0

void Settings_NameSetting___ctor(Settings_NameSetting_o *__this,MethodInfo *method)

{
  Il2CppObject *defaultValue;
  bool bVar1;
  
  bVar1 = g_data_1843454ba == '\0';
  (__this->fields).MaxStrippedLength = 0x7fffffff;
  defaultValue = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  if (bVar1) {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    g_data_1843454ba = '\x01';
  }
  (__this->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)__this,defaultValue,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (__this->fields).MaxLength = 0x7fffffff;
  return;
}


// Settings.NameSetting$$.ctor
// il2cpp: void Settings_NameSetting___ctor (Settings_NameSetting_o* __this, System_String_o* defaultValue, int32_t maxLength, int32_t maxStrippedLength, const MethodInfo* method);
// 0x181f23e60

void Settings_NameSetting___ctor_1f23e60
               (Settings_NameSetting_o *__this,System_String_o *defaultValue,int32_t maxLength,
               int32_t maxStrippedLength,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = g_data_1843454ba == '\0';
  (__this->fields).MaxStrippedLength = 0x7fffffff;
  if (bVar1) {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    g_data_1843454ba = '\x01';
  }
  (__this->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)defaultValue,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (__this->fields).MaxLength = maxLength;
  (__this->fields).MaxStrippedLength = maxStrippedLength;
  return;
}


// Settings.NameSetting$$DeserializeFromJsonObject
// il2cpp: void Settings_NameSetting__DeserializeFromJsonObject (Settings_NameSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x181f23c60

void Settings_NameSetting__DeserializeFromJsonObject
               (Settings_NameSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  System_String_o *value;
  
  if (Il2CppMethodInitialized_1843454ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    Il2CppMethodInitialized_1843454ad = '\x01';
  }
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    value = (*(json->klass->vtable)._9_get_Value.methodPtr)(json,(json->klass->vtable)._9_get_Value.method);
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)value,
               (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    return;
  }
  ThrowNullReferenceException();
}


// Settings.NameSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_NameSetting__SerializeToJsonObject (Settings_NameSetting_o* __this, const MethodInfo* method);
// 0x181f23d80

SimpleJSONFixed_JSONNode_o *
Settings_NameSetting__SerializeToJsonObject(Settings_NameSetting_o *__this,MethodInfo *method)

{
  System_String_o *aData;
  SimpleJSONFixed_JSONString_o *__this_00;
  
  if (Il2CppMethodInitialized_1843454ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_1843454ae = '\x01';
  }
  aData = (__this->fields)._value;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
  SimpleJSONFixed_JSONString___ctor(__this_00,aData,(MethodInfo *)0x0);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// Settings.NameSetting$$SanitizeValue
// il2cpp: System_String_o* Settings_NameSetting__SanitizeValue (Settings_NameSetting_o* __this, System_String_o* value, const MethodInfo* method);
// 0x181f23cd0

System_String_o *
Settings_NameSetting__SanitizeValue(Settings_NameSetting_o *__this,System_String_o *value,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843454af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_1843454af = '\x01';
  }
  if (value != (System_String_o *)0x0) {
    iVar1 = (__this->fields).MaxLength;
    if (iVar1 < (value->fields)._stringLength) {
      pSVar2 = System_String__Substring_1972740(value,0,iVar1,(MethodInfo *)0x0);
      return pSVar2;
    }
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    pSVar2 = MiscExtensions__StripHex(value,(MethodInfo *)0x0);
    if (pSVar2 != (System_String_o *)0x0) {
      iVar1 = (__this->fields).MaxStrippedLength;
      if ((pSVar2->fields)._stringLength <= iVar1) {
        return value;
      }
      pSVar2 = System_String__Substring_1972740(pSVar2,0,iVar1,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  ThrowNullReferenceException();
}


