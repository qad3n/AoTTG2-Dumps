// Type: Settings.BoolSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/BoolSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/BoolSetting.cs
// --------------------------------

// Settings.BoolSetting$$.ctor
// il2cpp: void Settings_BoolSetting___ctor (Settings_BoolSetting_o* __this, const MethodInfo* method);
// 0x41fd7c0

void Settings_BoolSetting___ctor(Settings_BoolSetting_o *__this,MethodInfo *method)

{
  if (g_data_057ad895 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad895 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)__this,0,MethodInfo_TypedSetting_1_System_Boolean);
  return;
}


// Settings.BoolSetting$$.ctor
// il2cpp: void Settings_BoolSetting___ctor (Settings_BoolSetting_o* __this, bool defaultValue, const MethodInfo* method);
// 0x41f3960

void Settings_BoolSetting___ctor_40f3960
               (Settings_BoolSetting_o *__this,bool_conflict defaultValue,MethodInfo *method)

{
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0
            ((Settings_TypedSetting_bool__o *)__this,defaultValue & 0xff,MethodInfo_TypedSetting_1_System_Boolean);
  return;
}


// Settings.BoolSetting$$DeserializeFromJsonObject
// il2cpp: void Settings_BoolSetting__DeserializeFromJsonObject (Settings_BoolSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x41ff580

void Settings_BoolSetting__DeserializeFromJsonObject
               (Settings_BoolSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

{
  byte bVar1;
  SimpleJSONFixed_JSONBool_o *__this_00;
  MethodInfo_2A23E90 **ppMVar2;
  
  ppMVar2 = (MethodInfo_2A23E90 **)__this;
  if (g_data_057ad897 == '\0') {
    ppMVar2 = &MethodInfo_Void_set_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad897 = '\x01';
  }
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (*(json->klass->vtable)._39_get_AsBool.methodPtr)
                      (json,(json->klass->vtable)._39_get_AsBool.method);
    Settings_TypedSetting_bool___set_Value((Settings_TypedSetting_bool__o *)__this,(uint)bVar1,MethodInfo_Void_set_Value);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad898 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONBool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ad898 = '\x01';
  }
  bVar1 = *(byte *)((long)&(((Settings_BoolSetting_o *)ppMVar2)->fields).DefaultValue + 1);
  __this_00 = (SimpleJSONFixed_JSONBool_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONBool);
  SimpleJSONFixed_JSONBool___ctor(__this_00,(uint)bVar1,(MethodInfo *)0x0);
  return;
}


// Settings.BoolSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_BoolSetting__SerializeToJsonObject (Settings_BoolSetting_o* __this, const MethodInfo* method);
// 0x41ff5e0

SimpleJSONFixed_JSONNode_o *
Settings_BoolSetting__SerializeToJsonObject(Settings_BoolSetting_o *__this,MethodInfo *method)

{
  byte bVar1;
  SimpleJSONFixed_JSONBool_o *__this_00;
  
  if (g_data_057ad898 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONBool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ad898 = '\x01';
  }
  bVar1 = *(byte *)((long)&(__this->fields).DefaultValue + 1);
  __this_00 = (SimpleJSONFixed_JSONBool_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONBool);
  SimpleJSONFixed_JSONBool___ctor(__this_00,(uint)bVar1,(MethodInfo *)0x0);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


