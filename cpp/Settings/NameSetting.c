// Type: Settings.NameSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/NameSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/NameSetting.cs
// --------------------------------

// Settings.NameSetting$$.ctor
// il2cpp: void Settings_NameSetting___ctor (Settings_NameSetting_o* __this, const MethodInfo* method);
// 0x42025b0

void Settings_NameSetting___ctor(Settings_NameSetting_o *__this,MethodInfo *method)

{
  Il2CppObject *defaultValue;
  
  (__this->fields).MaxStrippedLength = 0x7fffffff;
  defaultValue = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  if (g_data_057ad8c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
    g_data_057ad8c1 = '\x01';
  }
  (__this->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)__this,defaultValue,MethodInfo_TypedSetting_1_System_String)
  ;
  (__this->fields).MaxLength = 0x7fffffff;
  return;
}


// Settings.NameSetting$$.ctor
// il2cpp: void Settings_NameSetting___ctor (Settings_NameSetting_o* __this, System_String_o* defaultValue, int32_t maxLength, int32_t maxStrippedLength, const MethodInfo* method);
// 0x41fa5b0

void Settings_NameSetting___ctor_40fa5b0
               (Settings_NameSetting_o *__this,System_String_o *defaultValue,int32_t maxLength,
               int32_t maxStrippedLength,MethodInfo *method)

{
  (__this->fields).MaxStrippedLength = 0x7fffffff;
  if (g_data_057ad8c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
    g_data_057ad8c1 = '\x01';
  }
  (__this->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_2a240d0
            ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)defaultValue,MethodInfo_TypedSetting_1_System_String);
  (__this->fields).MaxLength = maxLength;
  (__this->fields).MaxStrippedLength = maxStrippedLength;
  return;
}


// Settings.NameSetting$$DeserializeFromJsonObject
// il2cpp: void Settings_NameSetting__DeserializeFromJsonObject (Settings_NameSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x4202620

void Settings_NameSetting__DeserializeFromJsonObject
               (Settings_NameSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  System_String_o *aData;
  Il2CppObject *value;
  SimpleJSONFixed_JSONString_o *__this_00;
  MethodInfo_2A24090 **ppMVar1;
  
  ppMVar1 = (MethodInfo_2A24090 **)__this;
  if (g_data_057ad8b6 == '\0') {
    ppMVar1 = &MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad8b6 = '\x01';
  }
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    value = (Il2CppObject *)
            (*(json->klass->vtable)._9_get_Value.methodPtr)(json,(json->klass->vtable)._9_get_Value.method);
    Settings_TypedSetting_object___set_Value((Settings_TypedSetting_T__o *)__this,value,MethodInfo_Void_set_Value);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ad8b7 = '\x01';
  }
  aData = (((Settings_NameSetting_o *)ppMVar1)->fields)._value;
  __this_00 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
  SimpleJSONFixed_JSONString___ctor(__this_00,aData,(MethodInfo *)0x0);
  return;
}


// Settings.NameSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_NameSetting__SerializeToJsonObject (Settings_NameSetting_o* __this, const MethodInfo* method);
// 0x4202680

SimpleJSONFixed_JSONNode_o *
Settings_NameSetting__SerializeToJsonObject(Settings_NameSetting_o *__this,MethodInfo *method)

{
  System_String_o *aData;
  SimpleJSONFixed_JSONString_o *__this_00;
  
  if (g_data_057ad8b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ad8b7 = '\x01';
  }
  aData = (__this->fields)._value;
  __this_00 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
  SimpleJSONFixed_JSONString___ctor(__this_00,aData,(MethodInfo *)0x0);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// Settings.NameSetting$$SanitizeValue
// il2cpp: System_String_o* Settings_NameSetting__SanitizeValue (Settings_NameSetting_o* __this, System_String_o* value, const MethodInfo* method);
// 0x42026e0

System_String_o *
Settings_NameSetting__SanitizeValue(Settings_NameSetting_o *__this,System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  int length;
  
  if (g_data_057ad8b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    g_data_057ad8b8 = '\x01';
  }
  if (value == (System_String_o *)0x0) {
label_04202767:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ad8b9 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
      il2cpp_runtime_helper_023445d0(&"/Presets");
      g_data_057ad8b9 = '\x01';
    }
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar1 = UnityEngine_Application__get_streamingAssetsPath((MethodInfo *)0x0);
    pSVar1 = System_String__Concat_3ae5ba0(pSVar1,"/Presets",(MethodInfo *)0x0);
    return pSVar1;
  }
  length = (__this->fields).MaxLength;
  pSVar1 = value;
  if ((value->fields)._stringLength <= length) {
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar1 = MiscExtensions__StripHex(value,(MethodInfo *)0x0);
    if (pSVar1 == (System_String_o *)0x0) goto label_04202767;
    length = (__this->fields).MaxStrippedLength;
    if ((pSVar1->fields)._stringLength <= length) {
      return value;
    }
  }
  pSVar1 = System_String__Substring_3af8da0(pSVar1,0,length,(MethodInfo *)0x0);
  return pSVar1;
}


