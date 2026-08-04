// Type: Settings.StringSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/StringSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/StringSetting.cs
// --------------------------------

// Settings.StringSetting$$.ctor
// il2cpp: void Settings_StringSetting___ctor (Settings_StringSetting_o* __this, const MethodInfo* method);
// 0x41fdaa0

void Settings_StringSetting___ctor(Settings_StringSetting_o *__this,MethodInfo *method)

{
  if (g_data_057ad8c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
    g_data_057ad8c0 = '\x01';
  }
  (__this->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_2a240d0
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
             MethodInfo_TypedSetting_1_System_String);
  return;
}


// Settings.StringSetting$$.ctor
// il2cpp: void Settings_StringSetting___ctor (Settings_StringSetting_o* __this, System_String_o* defaultValue, int32_t maxLength, const MethodInfo* method);
// 0x41f74f0

void Settings_StringSetting___ctor_40f74f0
               (Settings_StringSetting_o *__this,System_String_o *defaultValue,int32_t maxLength,
               MethodInfo *method)

{
  if (g_data_057ad8c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
    g_data_057ad8c1 = '\x01';
  }
  (__this->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_2a240d0
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)defaultValue,MethodInfo_TypedSetting_1_System_String);
  (__this->fields).MaxLength = maxLength;
  return;
}


// Settings.StringSetting$$DeserializeFromJsonObject
// il2cpp: void Settings_StringSetting__DeserializeFromJsonObject (Settings_StringSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x4203740

void Settings_StringSetting__DeserializeFromJsonObject
               (Settings_StringSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  System_String_o *aData;
  Il2CppObject *value;
  SimpleJSONFixed_JSONString_o *__this_00;
  MethodInfo_2A24090 **ppMVar1;
  
  ppMVar1 = (MethodInfo_2A24090 **)__this;
  if (g_data_057ad8c2 == '\0') {
    ppMVar1 = &MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad8c2 = '\x01';
  }
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    value = (Il2CppObject *)
            (*(json->klass->vtable)._9_get_Value.methodPtr)(json,(json->klass->vtable)._9_get_Value.method);
    Settings_TypedSetting_object___set_Value((Settings_TypedSetting_T__o *)__this,value,MethodInfo_Void_set_Value);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ad8c3 = '\x01';
  }
  aData = (((Settings_StringSetting_o *)ppMVar1)->fields)._value;
  __this_00 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
  SimpleJSONFixed_JSONString___ctor(__this_00,aData,(MethodInfo *)0x0);
  return;
}


// Settings.StringSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_StringSetting__SerializeToJsonObject (Settings_StringSetting_o* __this, const MethodInfo* method);
// 0x42037a0

SimpleJSONFixed_JSONNode_o *
Settings_StringSetting__SerializeToJsonObject(Settings_StringSetting_o *__this,MethodInfo *method)

{
  System_String_o *aData;
  SimpleJSONFixed_JSONString_o *__this_00;
  
  if (g_data_057ad8c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ad8c3 = '\x01';
  }
  aData = (__this->fields)._value;
  __this_00 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
  SimpleJSONFixed_JSONString___ctor(__this_00,aData,(MethodInfo *)0x0);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// Settings.StringSetting$$SanitizeValue
// il2cpp: System_String_o* Settings_StringSetting__SanitizeValue (Settings_StringSetting_o* __this, System_String_o* value, const MethodInfo* method);
// 0x4203800

System_String_o *
Settings_StringSetting__SanitizeValue
          (Settings_StringSetting_o *__this,System_String_o *value,MethodInfo *method)

{
  Settings_StringSetting_Fields *pSVar1;
  System_String_o **ppSVar2;
  int length;
  System_String_o *pSVar3;
  Utility_Color255_o *__this_00;
  Settings_TypedSetting_T__o *pSVar4;
  Il2CppObject *pIVar5;
  undefined8 extraout_RDX;
  
  if (value == (System_String_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad8c5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ColorSetting);
      g_data_057ad8c5 = '\x01';
    }
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
    if (g_data_057ad896 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
      g_data_057ad896 = '\x01';
    }
    Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar3,0,MethodInfo_TypedSetting_1_System_Boolean);
    pSVar1 = &__this->fields;
    (__this->fields).DefaultValue = pSVar3;
    il2cpp_runtime_helper_022b4080(pSVar1,pSVar3);
    __this_00 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
    Utility_Color255___ctor(__this_00,0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
    pSVar4 = (Settings_TypedSetting_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ColorSetting);
    if (g_data_057ad89a == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_Utility_Color255);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      g_data_057ad89a = '\x01';
    }
    Settings_TypedSetting_object____ctor(pSVar4,MethodInfo_TypedSetting_1_Utility_Color255);
    *(undefined4 *)&pSVar4[1].klass = 0;
    pIVar5 = (Il2CppObject *)
             (*(pSVar4->klass->vtable)._10_SanitizeValue.methodPtr)
                       (pSVar4,__this_00,(pSVar4->klass->vtable)._10_SanitizeValue.method);
    (pSVar4->fields).DefaultValue = pIVar5;
    il2cpp_runtime_helper_022b4080(&pSVar4->fields,pIVar5);
    Settings_TypedSetting_object___set_Value(pSVar4,(pSVar4->fields).DefaultValue,MethodInfo_Void_set_Value);
    ppSVar2 = &(__this->fields)._value;
    (__this->fields)._value = (System_String_o *)pSVar4;
    il2cpp_runtime_helper_022b4080(ppSVar2);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
    if (g_data_057ad896 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
      g_data_057ad896 = '\x01';
    }
    Settings_TypedSetting_bool____ctor_2a23ec0
              ((Settings_TypedSetting_bool__o *)pSVar3,(uint)value & 0xff,MethodInfo_TypedSetting_1_System_Boolean);
    pSVar1->DefaultValue = pSVar3;
    il2cpp_runtime_helper_022b4080(pSVar1,pSVar3);
    pSVar4 = (Settings_TypedSetting_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ColorSetting);
    if (g_data_057ad89a == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_Utility_Color255);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      g_data_057ad89a = '\x01';
    }
    Settings_TypedSetting_object____ctor(pSVar4,MethodInfo_TypedSetting_1_Utility_Color255);
    *(undefined4 *)&pSVar4[1].klass = 0;
    pIVar5 = (Il2CppObject *)
             (*(pSVar4->klass->vtable)._10_SanitizeValue.methodPtr)
                       (pSVar4,extraout_RDX,(pSVar4->klass->vtable)._10_SanitizeValue.method);
    (pSVar4->fields).DefaultValue = pIVar5;
    il2cpp_runtime_helper_022b4080(&pSVar4->fields,pIVar5);
    Settings_TypedSetting_object___set_Value(pSVar4,(pSVar4->fields).DefaultValue,MethodInfo_Void_set_Value);
    *ppSVar2 = (System_String_o *)pSVar4;
    pSVar3 = (System_String_o *)il2cpp_runtime_helper_022b4080(ppSVar2,pSVar4);
    return pSVar3;
  }
  length = (__this->fields).MaxLength;
  if (length < (value->fields)._stringLength) {
    pSVar3 = System_String__Substring_3af8da0(value,0,length,(MethodInfo *)0x0);
    return pSVar3;
  }
  return value;
}


