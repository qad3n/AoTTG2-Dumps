// Type: Settings.BoolSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Settings/BoolSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/BoolSetting.cs
// --------------------------------

// Settings.BoolSetting$$.ctor
// il2cpp: void Settings_BoolSetting___ctor (Settings_BoolSetting_o* __this, const MethodInfo* method);
// 0x5b55360

void Settings_BoolSetting___ctor(Settings_BoolSetting_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075472d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d5 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)__this,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  return;
}


// Settings.BoolSetting$$.ctor
// il2cpp: void Settings_BoolSetting___ctor (Settings_BoolSetting_o* __this, bool defaultValue, const MethodInfo* method);
// 0x5b412a0

void Settings_BoolSetting___ctor_5a412a0(Settings_BoolSetting_o *__this,bool defaultValue,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)__this,defaultValue,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  return;
}


// Settings.BoolSetting$$DeserializeFromJsonObject
// il2cpp: void Settings_BoolSetting__DeserializeFromJsonObject (Settings_BoolSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x5b553a0

void Settings_BoolSetting__DeserializeFromJsonObject
               (Settings_BoolSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  bool value;
  
  if (Il2CppMethodInitialized_075472d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_075472d7 = '\x01';
  }
  if (json == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  value = (*(json->klass->vtable)._39_get_AsBool.methodPtr)(json,(json->klass->vtable)._39_get_AsBool.method);
  Settings_TypedSetting_bool___set_Value
            ((Settings_TypedSetting_bool__o *)__this,value,
             (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  return;
}


// Settings.BoolSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_BoolSetting__SerializeToJsonObject (Settings_BoolSetting_o* __this, const MethodInfo* method);
// 0x5b55400

SimpleJSONFixed_JSONNode_o *
Settings_BoolSetting__SerializeToJsonObject(Settings_BoolSetting_o *__this,MethodInfo *method)

{
  bool aData;
  SimpleJSONFixed_JSONBool_o *__this_00;
  
  if (Il2CppMethodInitialized_075472d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONBool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_075472d8 = '\x01';
  }
  aData = (__this->fields)._value;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONBool);
  SimpleJSONFixed_JSONBool___ctor(__this_00,aData,(MethodInfo *)0x0);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


