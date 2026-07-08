// Type: Settings.NameSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/NameSetting.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/SettingTypes/NameSetting.cs  [CHANGED since prior version]
// --------------------------------

// Settings.NameSetting$$.ctor
// il2cpp: void Settings_NameSetting___ctor (Settings_NameSetting_o* __this, const MethodInfo* method);
// 0x3f101c0

void Settings_NameSetting___ctor(Settings_NameSetting_o *__this,MethodInfo *method)

{
  Il2CppObject *defaultValue;
  
  (__this->fields).MaxStrippedLength = 0x7fffffff;
  defaultValue = (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  if (DAT_05703c99 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_String);
    DAT_05703c99 = '\x01';
  }
  (__this->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting<object>___ctor
            ((Settings_TypedSetting_T__o *)__this,defaultValue,MethodInfo_TypedSetting_1_System_String);
  (__this->fields).MaxLength = 0x7fffffff;
  return;
}


// Settings.NameSetting$$.ctor
// il2cpp: void Settings_NameSetting___ctor (Settings_NameSetting_o* __this, System_String_o* defaultValue, int32_t maxLength, int32_t maxStrippedLength, const MethodInfo* method);
// 0x3f0b530

void Settings_NameSetting___ctor
               (Settings_NameSetting_o *__this,System_String_o *defaultValue,int32_t maxLength,
               int32_t maxStrippedLength,MethodInfo *method)

{
  (__this->fields).MaxStrippedLength = 0x7fffffff;
  if (DAT_05703c99 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_String);
    DAT_05703c99 = '\x01';
  }
  (__this->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting<object>___ctor
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)defaultValue,MethodInfo_TypedSetting_1_System_String);
  (__this->fields).MaxLength = maxLength;
  (__this->fields).MaxStrippedLength = maxStrippedLength;
  return;
}


// Settings.NameSetting$$DeserializeFromJsonObject
// il2cpp: void Settings_NameSetting__DeserializeFromJsonObject (Settings_NameSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x3f10230

void Settings_NameSetting__DeserializeFromJsonObject
               (Settings_NameSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  Il2CppObject *value;
  
  if (DAT_05703c8e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05703c8e = '\x01';
  }
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    value = (Il2CppObject *)
            (*(json->klass->vtable)._9_get_Value.methodPtr)
                      (json,(json->klass->vtable)._9_get_Value.method);
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)__this,value,MethodInfo_Void_set_Value);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.NameSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_NameSetting__SerializeToJsonObject (Settings_NameSetting_o* __this, const MethodInfo* method);
// 0x3f10290

SimpleJSONFixed_JSONNode_o *
Settings_NameSetting__SerializeToJsonObject(Settings_NameSetting_o *__this,MethodInfo *method)

{
  System_String_o *aData;
  SimpleJSONFixed_JSONString_o *__this_00;
  
  if (DAT_05703c8f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONString);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05703c8f = '\x01';
  }
  aData = (__this->fields)._value;
  __this_00 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_glue(TypeInfo_JSONString);
  SimpleJSONFixed_JSONString___ctor(__this_00,aData,(MethodInfo *)0x0);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// Settings.NameSetting$$SanitizeValue
// il2cpp: System_String_o* Settings_NameSetting__SanitizeValue (Settings_NameSetting_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3f102f0

System_String_o *
Settings_NameSetting__SanitizeValue
          (Settings_NameSetting_o *__this,System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  int length;
  
  if (DAT_05703c90 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    DAT_05703c90 = '\x01';
  }
  if (value == (System_String_o *)0x0) {
LAB_03f10377:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  length = (__this->fields).MaxLength;
  pSVar1 = value;
  if ((value->fields)._stringLength <= length) {
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = MiscExtensions__StripHex(value,(MethodInfo *)0x0);
    if (pSVar1 == (System_String_o *)0x0) goto LAB_03f10377;
    length = (__this->fields).MaxStrippedLength;
    if ((pSVar1->fields)._stringLength <= length) {
      return value;
    }
  }
  pSVar1 = System_String__Substring(pSVar1,0,length,(MethodInfo *)0x0);
  return pSVar1;
}


