// Type: Settings.StringSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/StringSetting.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/SettingTypes/StringSetting.cs  [CHANGED since prior version]
// --------------------------------

// Settings.StringSetting$$.ctor
// il2cpp: void Settings_StringSetting___ctor (Settings_StringSetting_o* __this, const MethodInfo* method);
// 0x3f11350

void Settings_StringSetting___ctor(Settings_StringSetting_o *__this,MethodInfo *method)

{
  if (DAT_05703c98 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_String);
    DAT_05703c98 = '\x01';
  }
  (__this->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting<object>___ctor
            ((Settings_TypedSetting_T__o *)__this,
             (Il2CppObject *)**(undefined8 **)(DAT_057110b0 + 0xb8),MethodInfo_TypedSetting_1_System_String);
  return;
}


// Settings.StringSetting$$.ctor
// il2cpp: void Settings_StringSetting___ctor (Settings_StringSetting_o* __this, System_String_o* defaultValue, int32_t maxLength, const MethodInfo* method);
// 0x3f085c0

void Settings_StringSetting___ctor
               (Settings_StringSetting_o *__this,System_String_o *defaultValue,int32_t maxLength,
               MethodInfo *method)

{
  if (DAT_05703c99 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TypedSetting_1_System_String);
    DAT_05703c99 = '\x01';
  }
  (__this->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting<object>___ctor
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)defaultValue,MethodInfo_TypedSetting_1_System_String);
  (__this->fields).MaxLength = maxLength;
  return;
}


// Settings.StringSetting$$DeserializeFromJsonObject
// il2cpp: void Settings_StringSetting__DeserializeFromJsonObject (Settings_StringSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x3f113b0

void Settings_StringSetting__DeserializeFromJsonObject
               (Settings_StringSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method
               )

{
  Il2CppObject *value;
  
  if (DAT_05703c9a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05703c9a = '\x01';
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


// Settings.StringSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_StringSetting__SerializeToJsonObject (Settings_StringSetting_o* __this, const MethodInfo* method);
// 0x3f11410

SimpleJSONFixed_JSONNode_o *
Settings_StringSetting__SerializeToJsonObject(Settings_StringSetting_o *__this,MethodInfo *method)

{
  System_String_o *aData;
  SimpleJSONFixed_JSONString_o *__this_00;
  
  if (DAT_05703c9b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONString);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05703c9b = '\x01';
  }
  aData = (__this->fields)._value;
  __this_00 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_glue(TypeInfo_JSONString);
  SimpleJSONFixed_JSONString___ctor(__this_00,aData,(MethodInfo *)0x0);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// Settings.StringSetting$$SanitizeValue
// il2cpp: System_String_o* Settings_StringSetting__SanitizeValue (Settings_StringSetting_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3f11470

System_String_o *
Settings_StringSetting__SanitizeValue
          (Settings_StringSetting_o *__this,System_String_o *value,MethodInfo *method)

{
  int length;
  System_String_o *pSVar1;
  
  if (value == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  length = (__this->fields).MaxLength;
  if (length < (value->fields)._stringLength) {
    pSVar1 = System_String__Substring(value,0,length,(MethodInfo *)0x0);
    return pSVar1;
  }
  return value;
}


